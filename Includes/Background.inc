[Background]
Meter = Shape
Shape = Ellipse [Center],[Center],(#Size#/2) | StrokeWidth #BackgroundBorderWidth# | FillColor #BackgroundColor#
DynamicVariables = 1
MouseOverAction = [!SetOption DigitalClock FontColor 255,255,255,(255*#ShowTimeOnHover#)][!UpdateMeter DigitalClock][!Redraw DigitalClock]
MouseLeaveAction = [!SetOption DigitalClock FontColor 255,255,255,0][!UpdateMeter DigitalClock][!Redraw DigitalClock]

[DigitalClock]
Meter = String
Group = DigitalClock
FontColor = 255,255,255,0
FontSize = (#Size# / 10)
FontWeight = 600
StringAlign = CenterCenter
Text = [Hour]:[Minute]
X = [Center]
Y = [Center]
DynamicVariables = 1
AntiAlias = 1