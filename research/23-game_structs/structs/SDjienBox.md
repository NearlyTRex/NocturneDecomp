# SDjienBox

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 72 | fields | 72 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 |
|---|---|---:|
| `position` | `CVector3f` | 0x0 |
| `orientation` | `UOrientationVector` | 0xc |
| `rotation` | `CQuaternion4f` | 0x28 |
| `body_part` | `CBodyPart*` | 0x44 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x18+0x10, 0x38+0xc
