# CLodEdge

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 240 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `vertex_idx_1` | `int` | 0x0 |
| `vertex_idx_2` | `int` | 0x4 |
| `collapse_cost` | `double` | 0x8 |
| `collapse_error` | `float` | 0x10 |
| `deletion_flag` | `int` | 0x14 |
| `collapse_viability` | `int` | 0x18 |
| `collapse_curvature` | `int` | 0x1c |
| `needs_recalc_flag` | `int` | 0x20 |
| `adjacent_tri_count` | `int` | 0x24 |
| `adjacent_tri_indices` | `int[50]` | 0x28 |
