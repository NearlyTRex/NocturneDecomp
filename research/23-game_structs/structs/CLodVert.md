# CLodVert

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1220 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `position` | `CVector3f` | 0x0 |
| `material_id` | `int` | 0xc |
| `lod_workspace` | `char[980]` | 0x10 |
| `deletion_flag` | `int` | 0x3e4 |
| `optimized_position` | `CVector3f` | 0x3e8 |
| `vertex_remapping_index` | `int` | 0x3f4 |
| `adjacent_edge_count` | `int` | 0x3f8 |
| `adjacent_edge_indices` | `int[50]` | 0x3fc |
