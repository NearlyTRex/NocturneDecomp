# SNetPacket_PlayerInput

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 53 | fields | — |
| nocturne | 53 | fields | — |
| bw1 | 53 | fields | — |
| blairwitch2 | 53 | fields | — |
| bw3 | 53 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `sim_frame_index` | `int` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `player_input` | `SPlayerInput` | 0x9 | 0x9 | 0x9 | 0x9 | 0x9 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4, 0xa+0x2b
- **blairwitch2**: 0x1+0x4, 0xa+0x2b
- **bw3**: 0x1+0x4, 0xa+0x2b
