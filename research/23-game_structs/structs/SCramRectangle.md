# SCramRectangle

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | — |
| nocturne | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `map_id` | `int` | 0x0 | 0x0 |
| `start_x` | `int` | 0x4 | 0x4 |
| `start_y` | `int` | 0x8 | 0x8 |
| `end_x` | `int` | 0xc | 0xc |
| `end_y` | `int` | 0x10 | 0x10 |
| `orientation` | `int` | 0x14 | 0x14 |
| `occupant` | `CCramTex*` | 0x18 | 0x18 |
| `candidate_end_x` | `int` | 0x1c | 0x1c |
| `candidate_end_y` | `int` | 0x20 | 0x20 |
| `active_flag` | `int` | 0x24 | 0x24 |
