# CParticle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 56 | fields | — |
| nocturne | 56 | fields | — |
| bw1 | 64 | fields | — |
| blairwitch2 | 64 | fields | — |
| bw3 | 64 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `position` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `velocity` | `CVector3f` | 0xc | 0xc |  |  |  |
| `lifetime_remaining` | `float` | 0x18 | 0x18 | 0x24 | 0x24 | 0x24 |
| `gravity_acceleration` | `float` | 0x1c | 0x1c |  |  |  |
| `is_in_solid` | `int` | 0x20 | 0x20 |  |  |  |
| `previous_position` | `CVector3f` | 0x24 | 0x24 |  |  |  |
| `was_in_solid` | `int` | 0x30 | 0x30 |  |  |  |
| `vtable` | `CParticle_vtable*` | 0x34 | 0x34 | 0x3c | 0x3c | 0x3c |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0xc+0x18, 0x28+0x14
- **blairwitch2**: 0xc+0x18, 0x28+0x14
- **bw3**: 0xc+0x18, 0x28+0x14
