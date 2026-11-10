# SFoundFileInfo

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 532 | fields | — |
| nocturne | 532 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `found_path` | `char[256]` | 0x0 | 0x0 |  |  |  |
| `target_path` | `char[256]` | 0x100 | 0x100 |  |  |  |
| `file_offset` | `uint` | 0x200 | 0x200 |  |  |  |
| `file_size` | `uint` | 0x204 | 0x204 |  |  |  |
| `is_archive` | `int` | 0x208 | 0x208 |  |  |  |
| `timestamp` | `uint` | 0x20c | 0x20c |  |  |  |
| `container_timestamp` | `uint` | 0x210 | 0x210 |  |  |  |
