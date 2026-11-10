# SNetPacket_PlayerAnnounce

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 41 | fields | — |
| nocturne | 41 | fields | — |
| bw1 | 41 | fields | — |
| blairwitch2 | 41 | fields | — |
| bw3 | 41 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `addr` | `SNetworkAddr` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `name` | `char[20]` | 0xd | 0xd | 0xd | 0xd | 0xd |
| `hero_number` | `EHeroType` | 0x21 | 0x21 | 0x21 | 0x21 | 0x21 |
| `aim_mode` | `int` | 0x25 | 0x25 | 0x25 | 0x25 | 0x25 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4, 0x6+0x7
- **blairwitch2**: 0x1+0x4, 0x6+0x7
- **bw3**: 0x1+0x4, 0x6+0x7
