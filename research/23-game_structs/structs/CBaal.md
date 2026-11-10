# CBaal

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 53436 | fields | 53436 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `countdown_timer` | `float` | 0xd054 |
| `render_alpha` | `int` | 0xd060 |
| `fade_timer` | `float` | 0xd064 |
| `fading_in` | `int` | 0xd068 |
| `max_fade_time` | `float` | 0xd06c |
| `fade_out_opacity` | `int` | 0xd070 |
| `bone_indices` | `int[2]` | 0xd074 |
| `recombine_pending` | `int` | 0xd07c |
| `state_cooldown` | `float` | 0xd080 |
| `sfx_handles` | `uint[13]` | 0xd084 |
| `recombine_target` | `CBoneGuy*` | 0xd0b8 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd058+0x8
