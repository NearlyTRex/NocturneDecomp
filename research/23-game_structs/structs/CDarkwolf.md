# CDarkwolf

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 56472 | fields | 56472 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `is_morph_partner` | `int` | 0xd05c |
| `morph_target` | `CDemonActor*` | 0xd060 |
| `morph` | `CMorph` | 0xd064 |
| `morph_time` | `float` | 0xdc90 |
| `sfx_handle` | `uint` | 0xdc94 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0xd054+0x8
