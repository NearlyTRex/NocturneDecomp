# CPodAuditRecord

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 312 | fields | — |
| nocturne | 312 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `user_path` | `char[32]` | 0x0 | 0x0 |
| `timestamp` | `uint` | 0x20 | 0x20 |
| `operation_type` | `int` | 0x24 | 0x24 |
| `filename` | `char[256]` | 0x28 | 0x28 |
| `original_timestamp` | `int` | 0x128 | 0x128 |
| `original_file_size` | `int` | 0x12c | 0x12c |
| `file_offset` | `int` | 0x130 | 0x130 |
| `compressed_size` | `int` | 0x134 | 0x134 |
