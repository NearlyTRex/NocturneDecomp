# CCloth

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 261744 | fields | — |
| nocturne | 240432 | fields | — |
| bw1 | 240432 | fields | — |
| blairwitch2 | 240432 | fields | — |
| bw3 | 240432 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `model` | `CKeyFramedModel` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `vertices` | `SClothVertex[800]` | 0x56d8 | 0x398 |  |  |  |
| `weight` | `float` | 0x3ce58 | 0x37b18 |  |  |  |
| `gravity` | `float` | 0x3ce5c | 0x37b1c |  |  |  |
| `dampen` | `float` | 0x3ce60 | 0x37b20 |  |  |  |
| `spring` | `float` | 0x3ce64 | 0x37b24 |  |  |  |
| `body_friction` | `float` | 0x3ce68 | 0x37b28 |  |  |  |
| `floor_friction` | `float` | 0x3ce6c | 0x37b2c |  |  |  |
| `wind_area` | `float` | 0x3ce70 | 0x37b30 |  |  |  |
| `mom_inert` | `float` | 0x3ce74 | 0x37b34 |  |  |  |
| `dead` | `char[12]` | 0x3ce78 | 0x37b38 |  |  |  |
| `double_sided` | `int` | 0x3ce84 | 0x37b44 |  |  |  |
| `transparency` | `float` | 0x3ce88 | 0x37b48 |  |  |  |
| `collide_bone_count` | `int` | 0x3ce8c | 0x37b4c | 0x37b4c | 0x37b4c | 0x37b4c |
| `collide_bones` | `SClothBone[50]` | 0x3ce90 | 0x37b50 |  |  |  |
| `locked_vertex_count` | `int` | 0x3f028 | 0x39ce8 | 0x39ce8 | 0x39ce8 | 0x39ce8 |
| `locked_vertex_indices` | `int[900]` | 0x3f02c | 0x39cec | 0x39cec | 0x39cec | 0x39cec |
| `vertex_sort_buffer` | `int*` | 0x3fe3c | 0x3aafc | 0x3aafc | 0x3aafc | 0x3aafc |
| `inv_delta_time` | `float` | 0x3fe40 | 0x3ab00 | 0x3ab00 | 0x3ab00 | 0x3ab00 |
| `floor_y` | `float` | 0x3fe44 | 0x3ab04 | 0x3ab04 | 0x3ab04 | 0x3ab04 |
| `last_position` | `CVector3f` | 0x3fe48 | 0x3ab08 | 0x3ab08 | 0x3ab08 | 0x3ab08 |
| `last_euler` | `CVector3f` | 0x3fe54 | 0x3ab14 | 0x3ab14 | 0x3ab14 | 0x3ab14 |
| `version_num` | `int` | 0x3fe60 | 0x3ab20 | 0x3ab20 | 0x3ab20 | 0x3ab20 |
| `wind_velocity` | `CVector3f` | 0x3fe64 | 0x3ab24 | 0x3ab24 | 0x3ab24 | 0x3ab24 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x398+0x377b4, 0x37b50+0x2198
- **blairwitch2**: 0x398+0x377b4, 0x37b50+0x2198
- **bw3**: 0x398+0x377b4, 0x37b50+0x2198
