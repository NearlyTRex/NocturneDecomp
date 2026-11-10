# SNetPacket_SimFrame

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 105 | fields | — |
| nocturne | 105 | fields | — |
| bw1 | 105 | fields | — |
| blairwitch2 | 105 | fields | — |
| bw3 | 105 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `frame` | `SSimFrame` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4, 0x6+0x63
- **blairwitch2**: 0x1+0x4, 0x6+0x63
- **bw3**: 0x1+0x4, 0x6+0x63
