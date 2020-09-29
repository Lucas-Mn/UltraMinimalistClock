[HideLines]
Measure = Plugin
Plugin = ActionTimer
ActionList1 = Init | Repeat Loop,50,13 | Redraw
ActionList2 = UpdateCondition | HideLine | Plus
Init = [!SetVariable CurrentLine 1][!UpdateMeasure HideLines]
Loop = [!CommandMeasure HideLines "Execute 2"]
Plus = [!SetVariable CurrentLine (#CurrentLine#+1)][!UpdateMeasure HideLines]
UpdateCondition = [!UpdateMeasure ConditionalIndex]
HideLine = [!ShowMeter Line#CurrentLine#][!HideMeter #ChosenLine#][!Redraw]
Redraw = [!Redraw]
DynamicVariables = 1

[ConditionalIndex]
Measure = Calc
IfCondition = (#UltraMinimalism#=0) || ( ([Hour]=#CurrentLine#) || ([Hour]=#CurrentLine#-1) || ([Hour]/#CurrentLine#=12) )
IfTrueAction = [!SetVariable ChosenLine "null"]
IfFalseAction = [!SetVariable ChosenLine Line#CurrentLine#]
IfConditionMode = 1
DynamicVariables = 1
UpdateDivider = -1

[UpdateHiddenLines]
Measure = Calc
IfCondition = ([Minute] = 0)
IfTrueAction = [!CommandMeasure HideLines "Execute 1"]
IfConditionMode = 1
DynamicVariables = 1
UpdateDivider = 60
