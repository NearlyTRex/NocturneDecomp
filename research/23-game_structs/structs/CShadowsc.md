# CShadowsc

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 49820 | fields | 49820 |
| bw3 | 53356 | fields | 53356 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 |
| `bone_indices` | `int[5]` | 0xc268 | 0xd054 |
| `sfx_handle` | `uint` | 0xc27c | 0xd064 |
| `sound_cooldown` | `float` | 0xc284 |  |
| `difficulty_speed_scale` | `float` | 0xc288 | 0xd068 |
| `render_mode` | `int` | 0xc28c |  |
| `unknown_0xc290` | `int` | 0xc290 |  |
| `fade_alpha` | `int` | 0xc294 |  |
| `is_opaque` | `int` | 0xc298 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc280+0x4
