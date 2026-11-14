# SFollowSlotStruct

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| blairwitch2 | 60 | fields | 60 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | blairwitch2 |
|---|---|---:|
| `follower` | `CCharacter*` | 0x0 |
| `follow_distance` | `float` | 0x4 |
| `offset` | `CVector3f` | 0x8 |
| `target_position` | `CVector3f` | 0x14 |
| `heading` | `float` | 0x20 |
| `spread_angle` | `float` | 0x24 |
| `follower_radius` | `float` | 0x28 |
| `next` | `SFollowSlotStruct*` | 0x38 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x2c+0xc
