# CColorQuantizer

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 19268 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `progress_callback` | `CColorQuantizer_ProgressCallback*` | 0x0 |
| `pixel_data` | `void*` | 0x4 |
| `flags_buffer` | `uchar*` | 0x8 |
| `scanline_buffer` | `void*` | 0xc |
| `error_buffer_r` | `float*` | 0x10 |
| `error_buffer_g` | `float*` | 0x14 |
| `error_buffer_b` | `float*` | 0x18 |
| `error_buffer_i` | `float*` | 0x1c |
| `current_r` | `float` | 0x20 |
| `current_g` | `float` | 0x24 |
| `current_b` | `float` | 0x28 |
| `current_i` | `float` | 0x2c |
| `palette_workspace` | `SPaletteEntry[256]` | 0x30 |
| `palette` | `SPaletteEntry[256]` | 0x1030 |
| `boxes` | `SColorBox[256]` | 0x2030 |
| `output_region` | `char[768]` | 0x4830 |
| `serpentine_toggle` | `int` | 0x4b30 |
| `status` | `int` | 0x4b34 |
| `pixel_count` | `int` | 0x4b38 |
| `current_pixel_index` | `int` | 0x4b3c |
| `num_colors` | `int` | 0x4b40 |
