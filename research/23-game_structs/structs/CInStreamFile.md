# CInStreamFile

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 44 | fields | 44 |
| blairwitch2 | 40 | fields | 40 |
| bw3 | 44 | fields | 44 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `vtable` | `void*` | 0x0 | 0x0 | 0x0 |
| `file_handle` | `HANDLE` | 0x4 | 0x4 | 0x4 |
| `file_size` | `int` | 0x8 | 0x8 | 0x8 |
| `file_offset` | `int` | 0xc | 0xc | 0xc |
| `position` | `int` | 0x10 | 0x10 | 0x10 |
| `buffer_alloc` | `void*` | 0x14 | 0x14 | 0x14 |
| `buffer` | `char*` | 0x18 | 0x18 | 0x18 |
| `buffer_start` | `int` | 0x1c | 0x1c | 0x1c |
| `buffer_capacity` | `int` | 0x20 | 0x20 | 0x20 |
| `buffer_length` | `int` | 0x24 | 0x24 | 0x24 |
| `binary_mode` | `int` | 0x28 |  | 0x28 |
