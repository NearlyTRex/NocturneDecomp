# SCurtainMeshData

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 300012 | fields | — |
| nocturne | 300012 | fields | — |
| bw1 | 300012 | fields | — |
| bw3 | 300012 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | bw3 |
|---|---|---:|---:|---:|---:|
| `inv_delta_time` | `float` | 0x0 | 0x0 | 0x0 | 0x0 |
| `grid_cols` | `int` | 0x4 | 0x4 | 0x4 | 0x4 |
| `grid_rows` | `int` | 0x8 | 0x8 | 0x8 | 0x8 |
| `vertex_positions_fixed` | `int[3000]` | 0xc | 0xc | 0xc | 0xc |
| `front_faces` | `SMRGLPrimitiveQuad[2000]` | 0x2eec | 0x2eec | 0x2eec | 0x2eec |
| `back_faces` | `SMRGLPrimitiveQuad[2000]` | 0x2616c | 0x2616c | 0x2616c | 0x2616c |
