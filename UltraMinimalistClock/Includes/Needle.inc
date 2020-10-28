[Needle]
Meter = Shape
Group = Needle
Shape = Line ([Center] + Cos([NeedleRadian])*([Center]-#NeedleLength#)),([Center] + Sin([NeedleRadian])*([Center]-#NeedleLength#)),([Center] + Cos([NeedleRadian])*[Center]),([Center] + Sin([NeedleRadian])*[Center]) | Stroke Color #NeedleColor# | StrokeWidth #NeedleWidth#
DynamicVariables = 1

[NeedleRadian]
Measure = Calc
Group = Needle
Formula = (([FullTurn] / 720) * ([TotalMinutes] - 180))
DynamicVariables = 1

[TotalMinutes]
Measure = Calc
Group = Needle
Formula = ([Hour] = 12 ? [Minute] : ([Hour] * 60) + [Minute])
DynamicVariables = 1

[Hour]
Measure = Time
Group = Needle
Format = %I

[Minute]
Measure = Time
Group = Needle
Format = %M