# CFileBitStream

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 44 | fields | — |
| nocturne | 44 | fields | — |
| bw1 | 44 | fields | — |
| blairwitch2 | 44 | fields | — |
| bw3 | 44 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `file_handle` | `_FILE*` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `buffer` | `char*` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `buffer_size` | `int` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `total_bits_read` | `int` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `current_byte_index` | `int` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `bits_available` | `int` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `end_of_stream_flag` | `int` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `error_flag` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `stream_start_position` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `stream_length` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `bytes_remaining` | `int` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
