# CSpiritEagle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 136364 | fields | 136364 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CCharacter` | 0x0 |
| `path_map` | `CPathMap` | 0xcdcc |
| `cloth_list` | `CClothList` | 0x206a8 |
| `shoot_me` | `int` | 0x20864 |
| `pool_me` | `int` | 0x20868 |
| `speed` | `float` | 0x2086c |
| `morph_actor` | `CPryeMorph*` | 0x20870 |
| `morph` | `CMorph` | 0x20874 |
| `morph_time` | `float` | 0x214a0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x214a4+0x8
