# SMpegFrame

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | — |
| nocturne | 28 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `header` | `SMpegFrameHeader*` | 0x0 | 0x0 |  |  |  |
| `channel_mode` | `int` | 0x4 | 0x4 |  |  |  |
| `allocation_entries` | `SMpegAllocationEntry*` | 0x8 | 0x8 |  |  |  |
| `table_index` | `int` | 0xc | 0xc |  |  |  |
| `channel_count` | `int` | 0x10 | 0x10 |  |  |  |
| `js_bound` | `int` | 0x14 | 0x14 |  |  |  |
| `sblimit` | `int` | 0x18 | 0x18 |  |  |  |
