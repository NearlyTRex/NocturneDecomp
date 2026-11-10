# CFrankenstienMachine

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1180 | fields | 1180 |
| nocturne | 1172 | fields | 1172 |
| bw1 | 1180 | fields | 1180 |
| blairwitch2 | 1528 | fields | 1528 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 |
| `which_part` | `int` | 0x158 | 0x150 | 0x158 | 0x2b4 |
| `master_frame` | `float` | 0x15c | 0x154 | 0x15c | 0x2b8 |
| `course_filename` | `char[32]` | 0x160 | 0x158 | 0x160 | 0x2bc |
| `part_frame` | `float` | 0x180 | 0x178 | 0x180 | 0x2dc |
| `bed_model` | `CKeyFramedModelInstance` | 0x184 | 0x17c | 0x184 | 0x2e0 |
| `course` | `CCourse` | 0x300 | 0x2f8 | 0x300 |  |
| `body_model` | `CKeyFramedModelInstance` | 0x30c | 0x304 | 0x30c | 0x468 |
| `anchor_vertex_index` | `int` | 0x488 | 0x480 | 0x488 | 0x5e4 |
| `particle_accumulator` | `float` | 0x48c | 0x484 | 0x48c | 0x5e8 |
| `anchor_world_position` | `CVector3f` | 0x490 | 0x488 | 0x490 | 0x5ec |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x45c+0xc
