# SMRGLKeyframe

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 20 | fields | — |
| nocturne | 20 | fields | — |
| bw1 | 20 | fields | — |
| blairwitch2 | 20 | fields | — |
| bw3 | 20 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SMRGLHeaderExtended` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `vertex_header` | `SMRGLHeaderBasic` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `vertices` | `CVector3i[0]` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
