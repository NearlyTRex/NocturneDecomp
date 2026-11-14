# CInStreamPipe

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 36 | fields | 36 |
| blairwitch2 | 36 | fields | 36 |
| bw3 | 36 | fields | 36 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `base` | `CInStream` | 0x0 | 0x0 | 0x0 |
| `codec` | `CCodec*` | 0x4 | 0x4 | 0x4 |
| `source` | `void*` | 0x8 | 0x8 | 0x8 |
| `owns_streams` | `int` | 0xc | 0xc | 0xc |
| `buffer` | `char*` | 0x10 | 0x10 | 0x10 |
| `buffer_size` | `int` | 0x14 | 0x14 | 0x14 |
| `buffer_length` | `int` | 0x18 | 0x18 | 0x18 |
| `position` | `int` | 0x1c | 0x1c | 0x1c |
| `codec_finished` | `int` | 0x20 | 0x20 | 0x20 |
