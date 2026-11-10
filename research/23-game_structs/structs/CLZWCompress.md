# CLZWCompress

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 56 | fields | 56 |
| nocturne | 56 | fields | 56 |
| bw1 | 64 | fields | 64 |
| blairwitch2 | 64 | fields | 64 |
| bw3 | 64 | fields | 64 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CCodec` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `dictionary` | `CLZWDictionary` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `buffer_size` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `num_bits` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `char_mask` | `_BIT_INTEGER32` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `prev_char_code` | `int` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `current_code` | `int` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `prev_code` | `int` | 0x34 | 0x34 | 0x38 | 0x38 | 0x38 |
| `pending_code` | `int` |  |  | 0x34 | 0x34 | 0x34 |
| `pending_char_code` | `int` |  |  | 0x3c | 0x3c | 0x3c |
