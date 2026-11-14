# CSfxSample

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 384 | fields | — |
| nocturne | 360 | fields | — |
| bw1 | 432 | fields | — |
| blairwitch2 | 428 | fields | — |
| bw3 | 432 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `sample_info` | `CSampleInfo` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `sample_data` | `short*` | 0x120 | 0x120 | 0x120 | 0x120 | 0x120 |
| `loop_marker_count` | `int` | 0x124 |  | 0x124 | 0x124 | 0x124 |
| `loop_endpoints` | `int[5]` | 0x128 |  | 0x128 | 0x128 | 0x128 |
| `loop_destinations` | `int[5]` | 0x13c |  | 0x13c | 0x13c | 0x13c |
| `taken` | `int` | 0x150 | 0x128 | 0x150 | 0x150 | 0x150 |
| `ref_count` | `int` | 0x154 | 0x12c | 0x154 | 0x154 | 0x154 |
| `buffer_id` | `int` | 0x158 | 0x130 | 0x158 | 0x158 | 0x158 |
| `streaming_slot_index` | `int` | 0x15c | 0x134 | 0x160 | 0x160 | 0x160 |
| `streaming_buffer_size` | `int` | 0x160 | 0x138 | 0x164 | 0x164 | 0x164 |
| `stream_read_position` | `int` | 0x164 | 0x13c | 0x16c | 0x16c | 0x16c |
| `stream_write_position` | `int` | 0x168 | 0x140 | 0x170 | 0x170 | 0x170 |
| `mp3_data` | `CMP3Decoder*` | 0x16c | 0x144 | 0x174 | 0x174 | 0x174 |
| `file_offset` | `int` | 0x170 | 0x148 | 0x178 | 0x178 | 0x178 |
| `file_handle` | `_FILE*` | 0x174 | 0x14c |  |  |  |
| `locked_offset` | `int` | 0x178 | 0x150 | 0x1a8 | 0x1a4 | 0x1a8 |
| `locked_length` | `int` | 0x17c | 0x154 | 0x1ac | 0x1a8 | 0x1ac |
| `loops` | `int` |  | 0x124 |  |  |  |
| `locked_bytes1` | `uint` |  | 0x158 |  |  |  |
| `locked_bytes2` | `uint` |  | 0x15c |  |  |  |
| `locked_ptr1` | `void*` |  | 0x160 |  |  |  |
| `locked_ptr2` | `void*` |  | 0x164 |  |  |  |
| `is_user_sample` | `int` |  |  | 0x15c | 0x15c | 0x15c |
| `data_size_bytes` | `int` |  |  | 0x168 | 0x168 | 0x168 |
| `file_stream` | `CInStreamFile` |  |  | 0x17c | 0x17c | 0x17c |
