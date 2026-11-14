# SSimFrame

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 100 | fields | — |
| nocturne | 100 | fields | — |
| bw1 | 108 | fields | — |
| blairwitch2 | 116 | fields | — |
| bw3 | 116 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `sequence_number` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `random_seed` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `delta_time` | `float` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `player_input` | `SPlayerInput[2]` | 0xc | 0xc | 0xc | 0xc | 0xc |
