# CCrater

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 112 | fields | 112 |
| nocturne | 112 | fields | 112 |
| bw1 | 112 | fields | 112 |
| blairwitch2 | 112 | fields | 112 |
| bw3 | 112 | fields | 112 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `active` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `has_smoke` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `smoke_delay` | `float` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `center_position` | `CVector3f` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `smoke_spawn_timer` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `smoke_positions` | `CVector3f[3]` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `corner_positions` | `CVector3f[4]` | 0x40 | 0x40 | 0x40 | 0x40 | 0x40 |
