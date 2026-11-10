# SFollowFormation

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| blairwitch2 | 980 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | blairwitch2 |
|---|---|---:|
| `leader` | `CCharacter*` | 0x0 |
| `slots` | `SFollowSlotStruct[16]` | 0x4 |
| `slot_count` | `int` | 0x3c4 |
| `update_timer` | `float` | 0x3c8 |
| `update_interval` | `float` | 0x3cc |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x3d0+0x4
