# SNetPacket_PlayerState

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
| `timestamp` | `int` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `name` | `char[20]` | 0x9 | 0x9 | 0x9 | 0x9 | 0x9 |
| `ready_flag` | `int` | 0x1d | 0x1d | 0x1d | 0x1d | 0x1d |
| `hero_number` | `EHeroType` | 0x21 | 0x21 | 0x21 | 0x21 | 0x21 |
| `aim_mode` | `int` | 0x25 | 0x25 | 0x25 | 0x25 | 0x25 |
