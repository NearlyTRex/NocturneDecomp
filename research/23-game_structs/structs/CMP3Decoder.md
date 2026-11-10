# CMP3Decoder

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 34352 | fields | 34352 |
| nocturne | 34352 | fields | 34352 |
| bw1 | 34352 | fields | 34352 |
| blairwitch2 | 34352 | fields | 34352 |
| bw3 | 34352 | fields | 34352 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `filename` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `sample_rate` | `int` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `num_channels` | `int` | 0x104 | 0x104 | 0x104 | 0x104 | 0x104 |
| `available_samples` | `int` | 0x108 | 0x108 | 0x108 | 0x108 | 0x108 |
| `decode_buffer_pos` | `short*` | 0x10c | 0x10c | 0x10c | 0x10c | 0x10c |
| `decode_buffer` | `short[2304]` | 0x110 | 0x110 | 0x110 | 0x110 | 0x110 |
| `memory_bitstream` | `CMemoryBitStream` | 0x1310 | 0x1310 | 0x1310 | 0x1310 | 0x1310 |
| `file_bitstream` | `CFileBitStream` | 0x5320 | 0x5320 | 0x5320 | 0x5320 | 0x5320 |
| `main_data_offset` | `int` | 0x534c | 0x534c | 0x534c | 0x534c | 0x534c |
| `synthesis_v_buffer` | `float[2][1024]` | 0x5350 | 0x5350 | 0x5350 | 0x5350 | 0x5350 |
| `synthesis_buffer_index` | `int[2]` | 0x7350 | 0x7350 | 0x7350 | 0x7350 | 0x7350 |
| `layer3_scalefactors` | `int[54]` | 0x7358 | 0x7358 | 0x7358 | 0x7358 | 0x7358 |
| `synthesis_history` | `float[2][32][18]` | 0x7430 | 0x7430 | 0x7430 | 0x7430 | 0x7430 |
