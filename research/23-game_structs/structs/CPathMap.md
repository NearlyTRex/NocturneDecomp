# CPathMap

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 80092 | fields | 80092 |
| nocturne | 80092 | fields | 80092 |
| bw1 | 80092 | fields | 80092 |
| blairwitch2 | 80092 | fields | 80092 |
| bw3 | 80092 | fields | 80092 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `current_position` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `voxel_coords` | `CVector3i` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `dest_voxel_coords` | `CVector3i` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `grid_origin` | `CVector3i` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `height_cache` | `int[100][100]` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `height_cache_tags` | `int[100][100]` | 0x9c70 | 0x9c70 | 0x9c70 | 0x9c70 | 0x9c70 |
| `cached_voxel_coords` | `CVector3i` | 0x138b0 | 0x138b0 | 0x138b0 | 0x138b0 | 0x138b0 |
| `last_pathfinding_result` | `int` | 0x138bc | 0x138bc | 0x138bc | 0x138bc | 0x138bc |
| `cached_world_position` | `CVector3f` | 0x138c0 | 0x138c0 | 0x138c0 | 0x138c0 | 0x138c0 |
| `path_heading` | `CVector3f` | 0x138cc | 0x138cc | 0x138cc | 0x138cc | 0x138cc |
| `update_timer` | `int` | 0x138d8 | 0x138d8 | 0x138d8 | 0x138d8 | 0x138d8 |
