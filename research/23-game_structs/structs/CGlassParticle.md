# CGlassParticle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 156 | fields | 156 |
| nocturne | 156 | fields | 156 |
| bw1 | 164 | fields | 164 |
| blairwitch2 | 164 | fields | 164 |
| bw3 | 212 | fields | 212 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CParticle` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `lifetime` | `int` | 0x38 | 0x38 | 0x40 | 0x40 | 0x40 |
| `texture` | `SMRGLTextureBasic` | 0x3c | 0x3c | 0x44 | 0x44 | 0x44 |
| `euler_angles` | `CVector3f` | 0x54 | 0x54 | 0x5c | 0x5c | 0x8c |
| `uv_u_per_vertex` | `CVector3i` | 0x60 | 0x60 | 0x68 | 0x68 | 0x98 |
| `uv_v_per_vertex` | `CVector3i` | 0x6c | 0x6c | 0x74 | 0x74 | 0xa4 |
| `triangle_delta` | `STriangleVertices` | 0x78 | 0x78 | 0x80 | 0x80 | 0xb0 |
