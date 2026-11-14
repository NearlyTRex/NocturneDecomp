# CLZWDecompress

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 48 | fields | 48 |
| nocturne | 48 | fields | 48 |
| bw1 | 52 | fields | 52 |
| blairwitch2 | 52 | fields | 52 |
| bw3 | 52 | fields | 52 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCodec` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `lzw_dict` | `CLZWDictionary` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `buffer_size` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `num_bits` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `previous_code` | `int` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `current_code` | `int` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `pending_sequence_index` | `int` |  |  | 0x30 | 0x30 | 0x30 |
