# SDynamicLight

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 76 | fields | 76 |
| blairwitch2 | 76 | fields | 76 |
| bw3 | 76 | fields | 76 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `position` | `CVector3f` | 0x0 | 0x0 | 0x0 |
| `orientation` | `CMatrix3x3f` | 0xc | 0xc | 0xc |
| `range` | `float` | 0x34 | 0x34 | 0x34 |
| `inverse_range` | `float` | 0x38 | 0x38 | 0x38 |
| `cone_scale` | `float` | 0x3c | 0x3c | 0x3c |
| `renderer_args` | `uint[3]` | 0x40 | 0x40 | 0x40 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x30+0x4
- **blairwitch2**: 0x30+0x4
- **bw3**: 0x30+0x4
