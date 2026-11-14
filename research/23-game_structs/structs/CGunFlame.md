# CGunFlame

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 36 | fields | 36 |
| nocturne | 36 | fields | 36 |
| bw1 | 36 | fields | 36 |
| blairwitch2 | 36 | fields | 36 |
| bw3 | 44 | fields | 44 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `lifetime` | `float` | 0x0 | 0x0 | 0x0 | 0x0 | 0xc |
| `position` | `CVector3f` | 0x4 | 0x4 | 0x4 | 0x4 | 0x0 |
| `velocity` | `CVector3f` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `anim_frame` | `float` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `flame_type` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `flame_style` | `int` |  |  |  |  | 0x24 |
| `frame_count` | `int` |  |  |  |  | 0x28 |
