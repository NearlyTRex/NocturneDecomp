# CStyler

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 296904 | fields | 296904 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `cloth` | `CCloth` | 0xd054 |
| `unknown_47b8c` | `int` | 0x47b8c |
| `is_morph_partner` | `int` | 0x47b90 |
| `demon` | `CDemonActor*` | 0x47b94 |
| `morph` | `CMorph` | 0x47b98 |
| `morph_time` | `float` | 0x487c4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x47b84+0x8
