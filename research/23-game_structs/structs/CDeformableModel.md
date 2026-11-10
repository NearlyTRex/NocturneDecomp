# CDeformableModel

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 36864 | fields | 36864 |
| nocturne | 10944 | fields | 10944 |
| bw1 | 13824 | fields | 13824 |
| blairwitch2 | 10944 | fields | 10944 |
| bw3 | 13824 | fields | 13824 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `num_lods` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `lod_info` | `SLod[5]` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `vertex_count` | `int[5]` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `vertex_data_ptr` | `SVert*[5]` | 0x40 | 0x40 | 0x40 | 0x40 | 0x40 |
| `tri_count` | `int[5]` | 0x54 | 0x54 | 0x54 | 0x54 | 0x54 |
| `cap_tri_count` | `int[5]` | 0x68 | 0x68 | 0x68 | 0x68 | 0x68 |
| `tri_data_ptr` | `SInputFace*[5]` | 0x7c | 0x7c | 0x7c | 0x7c | 0x7c |
| `index_data_ptr` | `int*[5]` | 0x90 | 0x90 | 0x90 | 0x90 | 0x90 |
| `cap_index_ptr` | `int*[5]` | 0xa4 | 0xa4 | 0xa4 | 0xa4 | 0xa4 |
| `num_texture_sets` | `int` | 0xb8 | 0xb8 | 0xb8 | 0xb8 | 0xb8 |
| `num_textures` | `int` | 0xbc | 0xbc | 0xbc | 0xbc | 0xbc |
| `texture_sets` | `STextureSet[5]` | 0xc0 | 0xc0 |  |  |  |
| `num_parts` | `int` | 0x7140 | 0xc00 | 0xc00 | 0xc00 | 0xc00 |
| `parts` | `SPart[30]` | 0x7144 | 0xc04 |  |  |  |
| `model_scale` | `CVector3f` | 0x7c84 | 0x1744 |  | 0x1744 |  |
| `bone_origins` | `CVector3f[100]` | 0x7c90 |  |  | 0x1750 |  |
| `bias_used` | `CVector3f` | 0x8140 |  |  | 0x1c00 |  |
| `bone_bounds` | `CBoundingBox3D[100]` | 0x814c |  |  | 0x1c0c |  |
| `bone_flags` | `int[100]` | 0x8aac | 0x256c |  | 0x256c |  |
| `bone_to_part_map` | `int[100]` | 0x8c3c | 0x26fc | 0x323c | 0x26fc | 0x323c |
| `farthest_child_bone` | `int[100]` | 0x8dcc | 0x288c | 0x33cc | 0x288c | 0x33cc |
| `model_name` | `char[80]` | 0x8f5c | 0x2a1c | 0x355c | 0x2a1c | 0x355c |
| `skeleton_ptr` | `CSkeleton*` | 0x8fac | 0x2a6c | 0x35ac | 0x2a6c | 0x35ac |
| `model_filename` | `char[80]` | 0x8fb0 | 0x2a70 | 0x35b0 | 0x2a70 | 0x35b0 |
| `vertex_pool` | `CVector3f[100]` |  | 0x1750 |  |  |  |
| `bbox_pool` | `CBoundingBox3D[100]` |  | 0x1c00 |  |  |  |
| `dead` | `char[12]` |  | 0x2560 |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x9+0x23, 0xc0+0xb40, 0xc04+0x2638
- **blairwitch2**: 0x9+0x23, 0xc0+0xb40, 0xc04+0xb40
- **bw3**: 0x9+0x23, 0xc0+0xb40, 0xc04+0x2638
