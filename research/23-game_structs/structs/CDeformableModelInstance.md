# CDeformableModelInstance

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 8884 | fields | 8884 |
| nocturne | 8884 | fields | 8884 |
| bw1 | 9124 | fields | 9124 |
| blairwitch2 | 8884 | fields | 8884 |
| bw3 | 9124 | fields | 9124 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CMotionController` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `scale_factor` | `float` | 0x54 | 0x54 | 0x54 | 0x54 | 0x54 |
| `bone_origins` | `CVector3f[100]` | 0x58 | 0x58 | 0x58 | 0x58 | 0x58 |
| `root_offset_scale` | `CVector3f` | 0x508 | 0x508 | 0x508 | 0x508 | 0x508 |
| `rest_bone_scales` | `float[100]` | 0x514 | 0x514 | 0x514 | 0x514 | 0x514 |
| `bone_transform` | `SPose` | 0x6a4 | 0x6a4 |  | 0x6a4 |  |
| `part_data` | `SPartInstanceData` | 0x2140 | 0x2140 |  | 0x2140 |  |
| `cached_skinned_lod_index` | `int` | 0x2230 | 0x2230 | 0x2320 | 0x2230 | 0x2320 |
| `skinned_vertices_buffer` | `CVector3i*` | 0x2234 | 0x2234 | 0x2324 | 0x2234 | 0x2324 |
| `bounding_box` | `CBoundingBox3D` | 0x2238 | 0x2238 | 0x2328 | 0x2238 | 0x2328 |
| `bone_update_mode` | `int` | 0x2250 | 0x2250 | 0x2340 | 0x2250 | 0x2340 |
| `accumulated_root_motion` | `CVector3f` | 0x2254 | 0x2254 | 0x2344 | 0x2254 | 0x2344 |
| `model_name` | `char[80]` | 0x2260 | 0x2260 | 0x2350 | 0x2260 | 0x2350 |
| `model_ptr` | `CDeformableModel*` | 0x22b0 | 0x22b0 | 0x23a0 | 0x22b0 | 0x23a0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x6a4+0x1c7c
- **bw3**: 0x6a4+0x1c7c
