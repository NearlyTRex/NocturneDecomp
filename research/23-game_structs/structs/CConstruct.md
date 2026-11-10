# CConstruct

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 51820 | fields | 51820 |
| blairwitch2 | 70372 | fields | 70372 |
| bw3 | 55392 | fields | 55392 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 |
| `fall_event` | `char[100]` | 0xc268 | 0x10af8 | 0xd054 |
| `part_indices` | `int[12]` | 0xc2cc | 0x10b60 | 0xd0b8 |
| `sfx_handles` | `uint[8]` | 0xc304 | 0x10b98 | 0xd0f0 |
| `unknown_0xc324` | `int` | 0xc324 |  |  |
| `death_event` | `char[100]` | 0xc328 | 0x10ba8 | 0xd114 |
| `recombine_time` | `float` | 0xc38c | 0x10c0c | 0xd178 |
| `initial_hit_points` | `int` | 0xc390 | 0x10c10 | 0xd17c |
| `box_count` | `int` | 0xc394 | 0x10c14 | 0xd180 |
| `boxes` | `SBoneGuyBox[24]` | 0xc398 | 0x10c18 | 0xd184 |
| `blown_up` | `int` | 0xca58 | 0x112d8 | 0xd844 |
| `recombine_interpolation` | `float` | 0xca5c | 0x112dc | 0xd850 |
| `pickable_box_index` | `int` | 0xca60 | 0x112e0 | 0xd848 |
| `death_sound_played` | `int` | 0xca64 |  | 0xd854 |
| `difficulty_speed_scale` | `float` | 0xca68 |  | 0xd858 |
| `sfx_handle` | `uint` |  | 0x10b5c |  |
| `unknown_0xd110` | `int` |  |  | 0xd110 |
| `construct_variant` | `int` |  |  | 0xd84c |
| `trail_texture_type` | `int` |  |  | 0xd85c |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc2fc+0x8
- **blairwitch2**: 0x10b90+0x8, 0x10ba4+0x4
- **bw3**: 0xd0e8+0x8
