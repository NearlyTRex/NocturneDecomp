# SNetPacket_Simple

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 9 | fields | — |
| nocturne | 9 | fields | — |
| bw1 | 9 | fields | — |
| blairwitch2 | 9 | fields | — |
| bw3 | 9 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `value` | `int` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1+0x4
- **blairwitch2**: 0x1+0x4
- **bw3**: 0x1+0x4
