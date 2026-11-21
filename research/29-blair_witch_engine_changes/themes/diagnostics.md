# diagnostics

[All themes](../README.md)

## `noop`

| Function | nocedit | Builds | Root | Difference | Port | Evidence |
|---|---|---|---|---|---|---|
| `CDemonActor::getActorClassName` | 0x00408b90 | bw2 |  | BW2 prints '%s::getClassName()\n' to the console on every call, then returns the same class name. | Nothing. It is a debug console trace. | blairwitch2 CDemonActor_getActorClassName_FUN_00408a50: CConsole_printf(g_CConsolePtr,"%s::getClassName()\n") before getActorType()->class_name. |
| `CDemonActor::getActorType` | 0x00408b50 | bw1, bw3 |  | Only the fatal text changes to 'CDemonActor::getActorType called for %s. ...', and the debug pointer check is gone. This path is unreachable for a valid actor. | Nothing. The recreation's pure virtual already makes this unreachable. | bw1 CDemonActor_getActorType_FUN_00408800: the message includes %s and there is no doCheckForInvalidPointers. In the recreation getActorType is pure virtual. |

