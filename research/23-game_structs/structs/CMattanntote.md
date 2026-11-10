# CMattanntote

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 61596 | fields | 61596 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `pain_cooldown` | `float` | 0xd054 |
| `opacity` | `int` | 0xd060 |
| `fade_timer` | `float` | 0xd064 |
| `fading_out` | `int` | 0xd068 |
| `max_fade_time` | `float` | 0xd06c |
| `fade_out_opacity` | `int` | 0xd070 |
| `bone_r_hand` | `int` | 0xd074 |
| `bone_l_hand` | `int` | 0xd078 |
| `bone_l_foot` | `int` | 0xd07c |
| `bone_r_foot` | `int` | 0xd080 |
| `bone_l_toe` | `int` | 0xd084 |
| `bone_r_toe` | `int` | 0xd088 |
| `wander_mode` | `int` | 0xd08c |
| `wander_timer` | `float` | 0xd090 |
| `wander_retarget_timer` | `float` | 0xd094 |
| `run_mode` | `int` | 0xd098 |
| `speed_boosted` | `int` | 0xd09c |
| `fade_done` | `int` | 0xd0a0 |
| `alerted` | `int` | 0xd0a4 |
| `attack_committed` | `int` | 0xd0a8 |
| `wander_target` | `CVector3f` | 0xd0ac |
| `flames` | `CFlame[12]` | 0xd0b8 |
| `sfx_handles` | `uint[13]` | 0xf068 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd058+0x8
