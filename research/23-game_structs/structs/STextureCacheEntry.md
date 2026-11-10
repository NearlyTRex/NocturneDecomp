# STextureCacheEntry

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 96 | fields | — |
| blairwitch2 | 96 | fields | — |
| bw3 | 96 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `dimension` | `int` | 0x0 | 0x0 | 0x0 |
| `texture_name` | `char[64]` | 0x4 | 0x4 | 0x4 |
| `texture_data` | `uchar*` | 0x44 | 0x44 | 0x44 |
| `opacity_data` | `uchar*` | 0x48 | 0x48 | 0x48 |
| `palette_data` | `uchar*` | 0x4c | 0x4c | 0x4c |
| `true_color_data` | `uchar*` | 0x50 | 0x50 | 0x50 |
| `use_stamp` | `uint` | 0x54 | 0x54 | 0x54 |
| `is_locked` | `int` | 0x58 | 0x58 | 0x58 |
| `hw_texture_handle` | `uint` | 0x5c | 0x5c | 0x5c |
