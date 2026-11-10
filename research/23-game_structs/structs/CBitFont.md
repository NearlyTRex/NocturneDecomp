# CBitFont

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 12696 | fields | — |
| nocturne | 12696 | fields | — |
| bw1 | 16928 | fields | — |
| blairwitch2 | 16928 | fields | — |
| bw3 | 16928 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `bitmap_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `bitmap_files` | `char[4][80]` | 0x4 | 0x4 |  |  |  |
| `bitmap_data` | `void*[4]` | 0x144 | 0x144 |  |  |  |
| `bitmap_widths` | `int[4]` | 0x154 | 0x154 |  |  |  |
| `palette_data` | `char[3072]` | 0x164 | 0x164 | 0x1b4 | 0x1b4 | 0x1b4 |
| `palettes_display` | `uint[4][256]` | 0xd64 | 0xd64 | 0xdb4 | 0xdb4 | 0xdb4 |
| `is_initialized` | `int` | 0x1d64 | 0x1d64 |  |  |  |
| `char_positions` | `uchar*[256]` | 0x1d68 | 0x1d68 |  |  |  |
| `char_bitmap_index` | `int[256]` | 0x2168 | 0x2168 |  |  |  |
| `char_widths` | `int[256]` | 0x2568 | 0x2568 |  |  |  |
| `char_heights` | `int[256]` | 0x2968 | 0x2968 | 0x39e8 | 0x39e8 | 0x39e8 |
| `char_y_offsets` | `int[256]` | 0x2d68 | 0x2d68 | 0x3de8 | 0x3de8 | 0x3de8 |
| `max_char_width` | `int` | 0x3168 | 0x3168 | 0x41e8 | 0x41e8 | 0x41e8 |
| `max_char_height` | `int` | 0x316c | 0x316c | 0x41ec | 0x41ec | 0x41ec |
| `current_line_height` | `int` | 0x3170 | 0x3170 | 0x41f0 | 0x41f0 | 0x41f0 |
| `char_spacing` | `int` | 0x3174 | 0x3174 | 0x41f4 | 0x41f4 | 0x41f4 |
| `line_spacing` | `int` | 0x3178 | 0x3178 | 0x41f8 | 0x41f8 | 0x41f8 |
| `shadow_offset_x` | `int` | 0x317c | 0x317c | 0x41fc | 0x41fc | 0x41fc |
| `shadow_offset_y` | `int` | 0x3180 | 0x3180 | 0x4200 | 0x4200 | 0x4200 |
| `rendering_ready` | `int` | 0x3184 | 0x3184 | 0x4204 | 0x4204 | 0x4204 |
| `load_flags` | `int` | 0x3188 | 0x3188 | 0x4208 | 0x4208 | 0x4208 |
| `use_3d_rendering` | `int` | 0x318c | 0x318c | 0x420c | 0x420c | 0x420c |
| `win_font_enabled` | `int` | 0x3190 | 0x3190 | 0x4210 | 0x4210 | 0x4210 |
| `win_font_helper` | `CWinFont*` | 0x3194 | 0x3194 | 0x4214 | 0x4214 | 0x4214 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x4+0x1b0, 0x1db4+0x1c34, 0x4218+0x8
- **blairwitch2**: 0x4+0x1b0, 0x1db4+0x1c34, 0x4218+0x8
- **bw3**: 0x4+0x1b0, 0x1db4+0x1c34, 0x4218+0x8
