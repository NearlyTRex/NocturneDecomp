# CMemoryBitStream

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 16400 | fields | — |
| nocturne | 16400 | fields | — |
| bw1 | 16400 | fields | — |
| blairwitch2 | 16400 | fields | — |
| bw3 | 16400 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `buffer_size_limit` | `uint` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `total_bits_read` | `uint` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `current_dword_index` | `uint` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `frame_buffer` | `uint[4096]` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `bits_available` | `uint` | 0x400c | 0x400c | 0x400c | 0x400c | 0x400c |
