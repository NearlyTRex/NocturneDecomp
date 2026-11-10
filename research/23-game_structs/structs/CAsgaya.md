# CAsgaya

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 212948 | fields | 212948 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CNPC` | 0x0 |
| `path_map` | `CPathMap` | 0x206c8 |
| `shoot_me` | `int` | 0x33fa4 |
| `pool_me` | `int` | 0x33fa8 |
| `speed` | `float` | 0x33fac |
| `bible_spawned` | `int` | 0x33fb4 |
| `bone_indices` | `int[2]` | 0x33fb8 |
| `cast_count` | `int` | 0x33fc0 |
| `appear_state` | `int` | 0x33fc4 |
| `fade_timer` | `float` | 0x33fc8 |
| `render_alpha` | `int` | 0x33fcc |
| `bible` | `CExorcism*` | 0x33fd0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x33fb0+0x4
