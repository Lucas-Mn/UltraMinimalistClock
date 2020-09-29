[Variables]
Index = 3
LineSizeMultiplier = 1
DrawLine = "Line [LineStartX],[LineStartY],[LineEndX],[LineEndY] | StrokeWidth [LineWidth] | Stroke Color #LineColor#"

[DrawLines]
Measure = Plugin
Plugin = ActionTimer
ActionList1 = Line12 | Line1 | Line2 | Line3 | Line4 | Line5 | Line6 | Line7 | Line8 | Line | Line9 | Line10 | Line11
Line12 = [!SetVariable LineSizeMultiplier 1][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 0][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line12][!Redraw]
Line1 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 1][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line1][!Redraw]
Line2 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 2][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line2][!Redraw]
Line3 = [!SetVariable LineSizeMultiplier 1][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 3][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line3][!Redraw]
Line4 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 4][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line4][!Redraw]
Line5 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 5][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line5][!Redraw]
Line6 = [!SetVariable LineSizeMultiplier 1][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 6][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line6][!Redraw]
Line7 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 7][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line7][!Redraw]
Line8 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 8][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line8][!Redraw]
Line9 = [!SetVariable LineSizeMultiplier 1][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 9][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line9][!Redraw]
Line10 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 10][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line10][!Redraw]
Line11 = [!SetVariable LineSizeMultiplier #SmallLineRatio#][!UpdateMeasureGroup LineSizeCalcs][!SetVariable Index 11][!UpdateMeasureGroup LineCalcs][!UpdateMeter Line11][!Redraw]
DynamicVariables = 1

; line sizes
[LineWidth]
Measure = Calc
Formula = #LineWidth# * #LineSizeMultiplier#
Group = LineSizeCalcs
DynamicVariables = 1
UpdateDivider = -1

[LineLength]
Measure = Calc
Formula = #LineLength# * #LineSizeMultiplier#
Group = LineSizeCalcs
DynamicVariables = 1
UpdateDivider = -1

[Index]
Measure = Calc
Formula = #Index# - 3
Group = LineCalcs
DynamicVariables = 1
UpdateDivider = -1

[LineStartX]
Measure = Calc
Formula = ([Center] + Cos([FullTurn]/12*[Index]) * ([Center] - #LineLength# * #LineSizeMultiplier#))
Group = LineCalcs
DynamicVariables = 1
UpdateDivider = -1

[LineStartY]
Measure = Calc
Formula = ([Center] + Sin([FullTurn]/12*[Index]) * ([Center] - #LineLength# * #LineSizeMultiplier#))
Group = LineCalcs
DynamicVariables = 1
UpdateDivider = -1

[LineEndX]
Measure = Calc
Formula = ([Center] + Cos([FullTurn]/12*[Index]) * ([Center]))
Group = LineCalcs
DynamicVariables = 1
UpdateDivider = -1

[LineEndY]
Measure = Calc
Formula = ([Center] + Sin([FullTurn]/12*([Index])) * ([Center]))
Group = LineCalcs
DynamicVariables = 1
UpdateDivider = -1

; --- lines ---

[Line12]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line1]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line2]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line3]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line4]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line5]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line6]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line7]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line8]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line9]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line10]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1

[Line11]
Meter = Shape
Shape = #DrawLine#
DynamicVariables = 1
UpdateDivider = -1