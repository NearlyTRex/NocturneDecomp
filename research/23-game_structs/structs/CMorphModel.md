# CMorphModel

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1544 | fields | 1544 |
| nocturne | 1544 | fields | 1544 |
| bw1 | 1544 | placeholder | 1544 |
| blairwitch2 | 1544 | fields | 1544 |
| bw3 | 1544 | placeholder | 1544 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `part_count` | `int` | 0x0 | 0x0 |  | 0x0 |  |
| `parts` | `SMorphPart[5]` | 0x4 | 0x4 |  | 0x4 |  |
| `num_points` | `int` | 0x54 | 0x54 |  | 0x54 |  |
| `points` | `SMorphPoint*` | 0x58 | 0x58 |  | 0x58 |  |
| `num_faces` | `int` | 0x5c | 0x5c |  | 0x5c |  |
| `faces` | `SMRGLPrimitiveTriangle*` | 0x60 | 0x60 |  | 0x60 |  |
| `num_textures` | `int` | 0x64 | 0x64 |  | 0x64 |  |
| `textures` | `SMRGLTextureModel[20]` | 0x68 | 0x68 |  | 0x68 |  |
