# editor-tools

[All themes](../README.md)

## `noop`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CScript static init` | 0x005591b0 | bw1, bw2, bw3 |  | The two CEdScrollBar script-editor globals (vertical and horizontal) are no longer constructed. The pick list and CScript instance remain. | Nothing to port: the recreation already defers the script editor's scroll bars (script.cpp comment). | nocedit staticInit_FUN_005591b0 has two CEdScrollBar_ctor; bw1 005430c0/bw2 00520f90/bw3 005286b0 only CPickList_ctor and CScript_ctor |
| `CWayPoint::setup` (corrected) | 0x005ebeb0 | bw1, bw3 | waypoint-renderable | After CTrigger::setup (which sets is_renderable=0 in all builds), BW1/BW3 set is_renderable = mission->is_in_editor. In game is_in_editor is 0, so waypoints are not renderable, exactly as in nocedit. Waypoints become renderable only in the editor. The first reader's 'hides waypoints in game' is not a change, because nocedit already hides them. | Nothing to port: only the editor sees it, and the recreation has no editor. | bw1 CWayPoint_setup_FUN_005aba00 'is_renderable = g_CDemonMission_PTR_0061f650->is_in_editor'; nocedit CTrigger_setup_FUN_005df990 'is_renderable = 0'. |

