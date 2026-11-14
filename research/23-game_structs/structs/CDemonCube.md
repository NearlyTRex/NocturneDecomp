# CDemonCube

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 52 | fields | 52 |
| nocturne | 52 | fields | 52 |
| bw1 | 52 | fields | 52 |
| blairwitch2 | 52 | fields | 52 |
| bw3 | 52 | fields | 52 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `voxel_buffer1` | `SVoxelGrid*` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `voxel_buffer2` | `SVoxelGrid*` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `min_bounds` | `CVector3f` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `max_bounds` | `CVector3f` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `vertex_count` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `vertex_buffer` | `CVector3f*` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `triangle_count` | `int` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `triangle_buffer` | `CDemonCubeTriangle*` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `ground_type_memory` | `void*` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
