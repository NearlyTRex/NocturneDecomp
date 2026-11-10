# SChatHistory

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 288 | fields | 288 |
| nocturne | 288 | fields | 288 |
| bw1 | 288 | placeholder | 288 |
| blairwitch2 | 288 | placeholder | 288 |
| bw3 | 288 | placeholder | 288 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `sender_addr` | `SNetworkAddr` | 0x0 | 0x0 |  |  |  |
| `message_id` | `int` | 0x8 | 0x8 |  |  |  |
| `sender_name` | `char[20]` | 0xc | 0xc |  |  |  |
| `message` | `char[256]` | 0x20 | 0x20 |  |  |  |
