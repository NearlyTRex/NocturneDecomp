# CScat

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130048 | fields | 130048 |
| nocturne | 129640 | fields | 129640 |
| bw1 | 131032 | fields | 131032 |
| blairwitch2 | 153196 | fields | 153196 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 | 0x0 | 0x0 |
| `guns_drawn` | `int` | 0x1fbd4 | 0x1fa3c | 0x1ffac | 0x25640 |
| `head_euler_angles` | `CVector3f` | 0x1fbd8 | 0x1fa40 | 0x1ffb0 | 0x25644 |
| `head_blend_weight` | `float` | 0x1fbe4 | 0x1fa4c | 0x1ffbc | 0x25650 |
| `weapon_actor` | `CWeapon*` | 0x1fbe8 | 0x1fa50 | 0x1ffc0 | 0x25654 |
| `aim_pitch` | `float` | 0x1fbec | 0x1fa54 | 0x1ffc4 | 0x25658 |
| `aim_yaw` | `float` | 0x1fbf0 | 0x1fa58 | 0x1ffc8 | 0x2565c |
| `dead` | `int` | 0x1fbf4 | 0x1fa5c | 0x1ffcc | 0x25660 |
| `aim_target` | `CDemonActor*` | 0x1fbf8 | 0x1fa60 | 0x1ffd0 | 0x25664 |
| `aim_converged` | `int` | 0x1fbfc | 0x1fa64 | 0x1ffd4 | 0x25668 |
