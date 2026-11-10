# SHuffmanTable

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2088 | fields | — |
| nocturne | 2088 | fields | — |
| bw1 | 2088 | fields | — |
| blairwitch2 | 2088 | fields | — |
| bw3 | 2088 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `table_id` | `char[4]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `xlen` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `ylen` | `int` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `linbits` | `int` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `max_value` | `int` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `reference_index` | `int` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `xlen2` | `int` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `ylen2` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `huffman_data` | `char[2052]` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `table_size` | `int` | 0x824 | 0x824 | 0x824 | 0x824 | 0x824 |
