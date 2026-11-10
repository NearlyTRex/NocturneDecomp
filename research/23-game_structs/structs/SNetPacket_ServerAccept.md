# SNetPacket_ServerAccept

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 113 | fields | — |
| nocturne | 113 | fields | — |
| bw1 | 113 | fields | — |
| blairwitch2 | 113 | fields | — |
| bw3 | 113 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `player_name` | `char[20]` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `mission_name` | `char[80]` | 0x19 | 0x19 | 0x19 | 0x19 | 0x19 |
| `client_addr` | `SNetworkAddr` | 0x69 | 0x69 | 0x69 | 0x69 | 0x69 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4
- **blairwitch2**: 0x1+0x4
- **bw3**: 0x1+0x4
