# SRaytraceState

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 160 | fields | 160 |
| nocturne | 160 | fields | 160 |
| bw1 | 160 | placeholder | 160 |
| blairwitch2 | 160 | placeholder | 160 |
| bw3 | 160 | placeholder | 160 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `ray_query` | `SRayQueryState` | 0x0 | 0x0 |  |  |  |
| `ignore_list_count` | `int` | 0x14 | 0x14 |  |  |  |
| `collision_flag` | `int` | 0x18 | 0x18 |  |  |  |
| `ignore_list` | `CDemonActor*[10]` | 0x1c | 0x1c |  |  |  |
| `saved_ray_origin` | `CVector3f` | 0x44 | 0x44 |  |  |  |
| `saved_ray_target` | `CVector3f` | 0x50 | 0x50 |  |  |  |
| `raycast_distance` | `float` | 0x5c | 0x5c |  |  |  |
| `voxel_distance` | `float` | 0x60 | 0x60 |  |  |  |
| `voxel_hit_point` | `CVector3f` | 0x64 | 0x64 |  |  |  |
| `voxel_surface_type` | `int` | 0x70 | 0x70 |  |  |  |
| `saved_skip_exact_collision` | `int` | 0x74 | 0x74 |  |  |  |
| `saved_collision_normal` | `CVector3f` | 0x78 | 0x78 |  |  |  |
| `saved_ground_type` | `int` | 0x84 | 0x84 |  |  |  |
| `saved_collision_point` | `CVector3f` | 0x88 | 0x88 |  |  |  |
| `saved_collision_actor` | `CDemonActor*` | 0x94 | 0x94 |  |  |  |
| `saved_collision_part_index` | `int` | 0x98 | 0x98 |  |  |  |
| `saved_collision_bone_index` | `int` | 0x9c | 0x9c |  |  |  |
