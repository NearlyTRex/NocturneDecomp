# CBitFont

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 12696 | fields | — |
| nocturne | 12696 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `bitmap_count` | `int` | 0x0 | 0x0 |  |  |  |
| `bitmap_files` | `char[4][80]` | 0x4 | 0x4 |  |  |  |
| `bitmap_data` | `void*[4]` | 0x144 | 0x144 |  |  |  |
| `bitmap_widths` | `int[4]` | 0x154 | 0x154 |  |  |  |
| `palette_data` | `char[3072]` | 0x164 | 0x164 |  |  |  |
| `palettes_display` | `uint[4][256]` | 0xd64 | 0xd64 |  |  |  |
| `is_initialized` | `int` | 0x1d64 | 0x1d64 |  |  |  |
| `char_positions` | `uchar*[256]` | 0x1d68 | 0x1d68 |  |  |  |
| `char_bitmap_index` | `int[256]` | 0x2168 | 0x2168 |  |  |  |
| `char_widths` | `int[256]` | 0x2568 | 0x2568 |  |  |  |
| `char_heights` | `int[256]` | 0x2968 | 0x2968 |  |  |  |
| `char_y_offsets` | `int[256]` | 0x2d68 | 0x2d68 |  |  |  |
| `max_char_width` | `int` | 0x3168 | 0x3168 |  |  |  |
| `max_char_height` | `int` | 0x316c | 0x316c |  |  |  |
| `current_line_height` | `int` | 0x3170 | 0x3170 |  |  |  |
| `char_spacing` | `int` | 0x3174 | 0x3174 |  |  |  |
| `line_spacing` | `int` | 0x3178 | 0x3178 |  |  |  |
| `shadow_offset_x` | `int` | 0x317c | 0x317c |  |  |  |
| `shadow_offset_y` | `int` | 0x3180 | 0x3180 |  |  |  |
| `rendering_ready` | `int` | 0x3184 | 0x3184 |  |  |  |
| `load_flags` | `int` | 0x3188 | 0x3188 |  |  |  |
| `use_3d_rendering` | `int` | 0x318c | 0x318c |  |  |  |
| `win_font_enabled` | `int` | 0x3190 | 0x3190 |  |  |  |
| `win_font_helper` | `CWinFont*` | 0x3194 | 0x3194 |  |  |  |
