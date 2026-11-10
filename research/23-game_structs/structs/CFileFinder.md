# CFileFinder

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 276 | fields | 276 |
| nocturne | 276 | fields | 276 |
| bw1 | 276 | fields | 276 |
| blairwitch2 | 276 | fields | 276 |
| bw3 | 276 | fields | 276 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `filename` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `attributes` | `uint` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `file_size` | `uint` | 0x104 | 0x104 | 0x104 | 0x104 | 0x104 |
| `timestamp` | `uint` | 0x108 | 0x108 | 0x108 | 0x108 | 0x108 |
| `has_results` | `int` | 0x10c | 0x10c | 0x10c | 0x10c | 0x10c |
| `search_handle` | `HANDLE` | 0x110 | 0x110 | 0x110 | 0x110 | 0x110 |
