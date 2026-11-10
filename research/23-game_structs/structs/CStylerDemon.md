# CStylerDemon

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 56600 | fields | 56600 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `sfx_handle` | `uint` | 0xd054 |
| `is_morph_partner` | `int` | 0xd05c |
| `styler` | `CDemonActor*` | 0xd060 |
| `morph` | `CMorph` | 0xd064 |
| `spell_index` | `int` | 0xdc90 |
| `summon_cooldown` | `float` | 0xdc94 |
| `morph_time` | `float` | 0xdc98 |
| `state_timer` | `float` | 0xdc9c |
| `exorcism_spawned` | `int` | 0xdca0 |
| `sfx_handles` | `uint[26]` | 0xdca4 |
| `exorcism` | `CDemonActor*` | 0xdd14 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd058+0x4, 0xdd0c+0x8
