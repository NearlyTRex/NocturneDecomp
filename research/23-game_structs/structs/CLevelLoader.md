# CLevelLoader

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 304 | fields | — |
| nocturne | 304 | fields | — |
| bw1 | 304 | fields | — |
| blairwitch2 | 304 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `current_frame` | `int` | 0x0 | 0x0 | 0x0 | 0x0 |
| `total_frames` | `int` | 0x4 | 0x4 | 0x4 | 0x4 |
| `version` | `int` | 0x8 | 0x8 | 0x8 | 0x8 |
| `enabled` | `int` | 0xc | 0xc | 0xc | 0xc |
| `dead` | `char[256]` | 0x10 | 0x10 | 0x10 | 0x10 |
| `use_custom_viewport` | `int` | 0x110 | 0x110 | 0x110 | 0x110 |
| `viewport_x` | `int` | 0x114 | 0x114 | 0x114 | 0x114 |
| `viewport_y` | `int` | 0x118 | 0x118 | 0x118 | 0x118 |
| `viewport_width` | `int` | 0x11c | 0x11c | 0x11c | 0x11c |
| `viewport_height` | `int` | 0x120 | 0x120 | 0x120 | 0x120 |
| `color` | `CColor3i` | 0x124 | 0x124 | 0x124 | 0x124 |
