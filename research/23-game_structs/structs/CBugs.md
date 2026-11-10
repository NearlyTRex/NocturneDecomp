# CBugs

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 104952 | fields | 104952 |
| nocturne | 104544 | fields | 104544 |
| bw1 | 105892 | fields | 105892 |
| blairwitch2 | 124468 | fields | 124468 |
| bw3 | 114340 | fields | 114340 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `state` | `EBugsState` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 | 0xd054 |
| `count` | `int` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc | 0xd058 |
| `bugs` | `SBug[400]` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 | 0xd05c |
| `model_count` | `int` | 0x122c4 | 0x1212c | 0x12670 | 0x16f00 | 0x1345c |
| `models` | `CKeyFramedModelInstance[4]` | 0x122c8 | 0x12130 | 0x12674 | 0x16f04 | 0x13460 |
| `ground_heights` | `float[12][12]` | 0x128b8 | 0x12720 | 0x12c64 | 0x174f4 | 0x135dc |
| `swarm_target` | `CDemonActor*` | 0x12af8 | 0x12960 | 0x12ea4 | 0x17734 | 0x1381c |
| `deformable_model_ptr` | `CDeformableModelInstance*` | 0x12afc | 0x12964 | 0x12ea8 | 0x17738 | 0x13820 |
| `model_world_matrix` | `CMatrix3x4f` | 0x12b00 | 0x12968 | 0x12eac | 0x1773c | 0x13824 |
| `lod_index` | `int` | 0x12b30 | 0x12998 | 0x12edc | 0x1776c | 0x13854 |
| `swarm_vertex_count` | `int` | 0x12b34 | 0x1299c | 0x12ee0 | 0x17770 | 0x13858 |
| `swarm_vertices` | `SSwarmVertex[700]` | 0x12b38 | 0x129a0 | 0x12ee4 | 0x17774 | 0x1385c |
| `allow_chase` | `int` | 0x19898 | 0x19700 | 0x19c44 | 0x1e4d4 | 0x1bd2c |
| `allow_swarm` | `int` | 0x1989c | 0x19704 | 0x19c48 | 0x1e4d8 | 0x1bd30 |
| `allow_chase_event` | `char[100]` | 0x198a0 | 0x19708 | 0x19c4c | 0x1e4dc | 0x1bd3c |
| `allow_swarm_event` | `char[100]` | 0x19904 | 0x1976c | 0x19cb0 | 0x1e540 | 0x1bda0 |
| `animate_event` | `char[100]` | 0x19968 | 0x197d0 | 0x19d14 | 0x1e5a4 | 0x1be04 |
| `bounds` | `CBoundingBox3D` | 0x199cc | 0x19834 | 0x19d78 | 0x1e608 | 0x1be68 |
| `grid_cell_x` | `int` | 0x199e4 | 0x1984c | 0x19d90 | 0x1e620 | 0x1be80 |
| `grid_cell_z` | `int` | 0x199e8 | 0x19850 | 0x19d94 | 0x1e624 | 0x1be84 |
| `grid_origin_x` | `float` | 0x199ec | 0x19854 | 0x19d98 | 0x1e628 | 0x1be88 |
| `grid_origin_z` | `float` | 0x199f0 | 0x19858 | 0x19d9c | 0x1e62c | 0x1be8c |
| `damage_timer` | `float` | 0x199f4 | 0x1985c | 0x19da0 | 0x1e630 | 0x1be90 |
| `remove_bug_timer` | `float` |  |  |  |  | 0x1bd34 |
| `max_life_timer` | `float` |  |  |  |  | 0x1bd38 |
| `has_attacked` | `int` |  |  |  |  | 0x1be94 |
| `attack_timer` | `float` |  |  |  |  | 0x1be98 |
| `loop_sfx_handle` | `uint` |  |  |  |  | 0x1be9c |
| `munch_sfx_handle` | `uint` |  |  |  |  | 0x1bea0 |
