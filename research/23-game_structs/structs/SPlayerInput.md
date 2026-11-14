# SPlayerInput

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 44 | fields | — |
| nocturne | 44 | fields | — |
| bw1 | 48 | fields | — |
| blairwitch2 | 52 | fields | — |
| bw3 | 52 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `action_state` | `SPlayerActionState` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `strafe_speed` | `float` | 0x20 | 0x20 | 0x24 | 0x24 | 0x28 |
| `turn_speed` | `float` | 0x24 | 0x24 | 0x28 | 0x28 | 0x2c |
| `look_up_down_speed` | `float` | 0x28 | 0x28 | 0x2c | 0x2c | 0x30 |
| `drop_item` | `int` |  |  |  | 0x30 |  |
