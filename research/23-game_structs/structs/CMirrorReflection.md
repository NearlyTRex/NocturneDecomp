# CMirrorReflection

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 148 | fields | — |
| nocturne | 148 | fields | — |
| bw1 | 148 | fields | — |
| blairwitch2 | 148 | fields | — |
| bw3 | 148 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `corner1` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `corner2` | `CVector3f` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `corner3` | `CVector3f` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `corner4` | `CVector3f` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `mirror_transform_matrix` | `CMatrix3x4f` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `camera_origin` | `CVector3f` | 0x60 | 0x60 | 0x60 | 0x60 | 0x60 |
| `projection_scale` | `float` | 0x6c | 0x6c | 0x6c | 0x6c | 0x6c |
| `reflection_matrix` | `CMatrix3x3f` | 0x70 | 0x70 | 0x70 | 0x70 | 0x70 |
