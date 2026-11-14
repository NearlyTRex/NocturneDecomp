# SShapeEditorPolygon

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 388 | fields | — |
| nocturne | 388 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `polygon_type` | `uint` | 0x0 | 0x0 |
| `texture_name` | `char[80]` | 0x4 | 0x4 |
| `lightmap_name` | `char[80]` | 0x54 | 0x54 |
| `vertex_indices_count` | `uint` | 0xa4 | 0xa4 |
| `normal` | `CVector3f` | 0xa8 | 0xa8 |
| `plane_distance` | `float` | 0xb4 | 0xb4 |
| `vertex_indices` | `uint[16]` | 0xb8 | 0xb8 |
| `uv_u` | `float[16]` | 0xf8 | 0xf8 |
| `uv_v` | `float[16]` | 0x138 | 0x138 |
| `part_assignment` | `uint` | 0x178 | 0x178 |
| `material_id` | `uint` | 0x17c | 0x17c |
| `material_id_backup` | `uint` | 0x180 | 0x180 |
