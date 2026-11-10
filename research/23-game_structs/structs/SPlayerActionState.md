# SPlayerActionState

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 32 | fields | — |
| nocturne | 32 | fields | — |
| bw1 | 36 | fields | — |
| blairwitch2 | 36 | fields | — |
| bw3 | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `walk` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `backup` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `run` | `int` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `fire` | `int` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `use_item` | `int` | 0x10 | 0x10 | 0x10 | 0x10 | 0x14 |
| `light` | `int` | 0x14 | 0x14 | 0x14 | 0x14 | 0x18 |
| `draw` | `int` | 0x18 | 0x18 | 0x18 | 0x18 | 0x1c |
| `jump` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x20 |
| `quick_turn` | `int` |  |  | 0x20 | 0x20 | 0x24 |
| `action` | `int` |  |  |  |  | 0x10 |
