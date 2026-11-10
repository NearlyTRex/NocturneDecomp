# CComplexPolygon

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 52 | fields | — |
| blairwitch2 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | blairwitch2 |
|---|---|---:|---:|
| `polygon_count` | `int` | 0x0 |  |
| `polygon_list` | `CPoly**` | 0x4 |  |
| `edge_count` | `int` | 0x8 |  |
| `edge_array` | `SEdgeChainEntry*` | 0xc |  |
| `material_id` | `int` | 0x10 |  |
| `normal` | `CVector3d` | 0x14 |  |
| `expanded_edge_count` | `int` | 0x2c |  |
| `expanded_edges` | `SExpandedEdge*` | 0x30 |  |
