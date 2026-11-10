# CMotionList

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 165128 | fields | — |
| nocturne | 165128 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `state_count` | `int` | 0x0 | 0x0 |  |  |  |
| `state_names` | `char[80][30]` | 0x4 | 0x4 |  |  |  |
| `motion_count` | `int` | 0x964 | 0x964 |  |  |  |
| `motions` | `SMotion[120]` | 0x968 | 0x968 |  |  |  |
