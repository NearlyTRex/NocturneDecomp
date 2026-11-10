# SChatOutMessage

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 276 | fields | — |
| nocturne | 276 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `timestamp` | `uint` | 0x0 | 0x0 |
| `sequence_number` | `uint` | 0x4 | 0x4 |
| `ack_flags` | `_BIT_INTEGER32` | 0x8 | 0x8 |
| `player_timestamps` | `uint[2]` | 0xc | 0xc |
| `message` | `char[256]` | 0x14 | 0x14 |
