# CIcePick

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130052 | fields | 130052 |
| nocturne | 129644 | fields | 129644 |
| bw1 | 131036 | fields | 131036 |
| blairwitch2 | 153200 | fields | 153200 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 | 0x0 | 0x0 |
| `guns_drawn` | `int` | 0x1fbd4 | 0x1fa3c | 0x1ffac | 0x25640 |
| `attack_count` | `int` | 0x1fbd8 | 0x1fa40 | 0x1ffb0 | 0x25644 |
| `sfx_handles` | `uint[2]` | 0x1fbdc | 0x1fa44 | 0x1ffb4 | 0x25648 |
| `head_look_euler` | `CVector3f` | 0x1fbe4 | 0x1fa4c | 0x1ffbc | 0x25650 |
| `head_look_blend_weight` | `float` | 0x1fbf0 | 0x1fa58 | 0x1ffc8 | 0x2565c |
| `is_armed` | `int` | 0x1fbf4 | 0x1fa5c | 0x1ffcc | 0x25660 |
| `pending_pickup_target` | `CDemonActor*` | 0x1fbf8 | 0x1fa60 | 0x1ffd0 | 0x25664 |
| `shoot_blend_weight` | `float` | 0x1fbfc | 0x1fa64 | 0x1ffd4 | 0x25668 |
| `aim_pitch` | `float` | 0x1fc00 | 0x1fa68 | 0x1ffd8 | 0x2566c |
