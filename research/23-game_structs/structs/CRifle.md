# CRifle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 1412 | fields | 1412 |
| bw3 | 1440 | fields | 1440 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 |
| `spread_angle` | `float` | 0x578 | 0x594 |
| `processed` | `int` | 0x57c | 0x598 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x580+0x4
- **bw3**: 0x59c+0x4
