# CHino

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 53424 | fields | 53424 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `sfx_handle` | `uint` | 0xd054 |
| `unknown_0xd058` | `int` | 0xd058 |
| `render_alpha` | `int` | 0xd05c |
| `action_timer` | `float` | 0xd060 |
| `attack_cooldown` | `float` | 0xd064 |
| `vanish_timer` | `float` | 0xd068 |
| `vanishing` | `int` | 0xd06c |
| `platform_check_done` | `int` | 0xd070 |
| `near_platform` | `int` | 0xd074 |
| `sfx_handles` | `uint[13]` | 0xd07c |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd078+0x4
