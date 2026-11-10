# CLodMesh

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 116 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `vertex_count` | `int` | 0x0 |
| `vertex_data` | `CLodVert*` | 0x4 |
| `tri_count` | `int` | 0x8 |
| `tri_data` | `CLodFace*` | 0xc |
| `lod_texture_count` | `int` | 0x10 |
| `lod_textures` | `SMRGLTextureModel*` | 0x14 |
| `active_attribute_count` | `int` | 0x18 |
| `sort_attribute_count` | `int` | 0x1c |
| `extra_attribute_count` | `int` | 0x20 |
| `attribute_enabled_flags` | `int[4]` | 0x24 |
| `next_lod` | `CLodMesh*` | 0x34 |
| `precompute_file` | `_FILE*` | 0x38 |
| `max_vertex_count` | `int` | 0x3c |
| `max_tri_count` | `int` | 0x40 |
| `edge_count` | `int` | 0x44 |
| `edges_ptr` | `CLodEdge*` | 0x48 |
| `lod_level_count` | `int` | 0x4c |
| `lod_levels_ptr` | `CLodEdge*` | 0x50 |
| `spatial_grid_ptr` | `SSpatialGrid*` | 0x54 |
| `spatial_grid_data` | `int*` | 0x58 |
| `sample_point_count` | `int` | 0x5c |
| `sample_points_ptr` | `SLodSamplePoint*` | 0x60 |
| `center_offset` | `CVector3f` | 0x64 |
| `scale_factor` | `float` | 0x70 |
