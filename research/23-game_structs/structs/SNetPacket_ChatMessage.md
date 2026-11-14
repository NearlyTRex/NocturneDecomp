# SNetPacket_ChatMessage

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 265 | fields | — |
| nocturne | 265 | fields | — |
| bw1 | 265 | fields | — |
| blairwitch2 | 265 | fields | — |
| bw3 | 265 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SNetPacketHeader` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `message_id` | `int` | 0x5 | 0x5 | 0x5 | 0x5 | 0x5 |
| `message` | `char[256]` | 0x9 | 0x9 | 0x9 | 0x9 | 0x9 |
