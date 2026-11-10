# STextView

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 584 | fields | — |
| blairwitch2 | 584 | fields | — |
| bw3 | 584 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `rect_left` | `int` | 0x0 | 0x0 | 0x0 |
| `rect_top` | `int` | 0x4 | 0x4 | 0x4 |
| `rect_right` | `int` | 0x8 | 0x8 | 0x8 |
| `rect_bottom` | `int` | 0xc | 0xc | 0xc |
| `page_index` | `int` | 0x10 | 0x10 | 0x10 |
| `cursor_x` | `int` | 0x14 | 0x14 | 0x14 |
| `cursor_y` | `int` | 0x18 | 0x18 | 0x18 |
| `margin_left` | `int` | 0x1c | 0x1c | 0x1c |
| `margin_top` | `int` | 0x20 | 0x20 | 0x20 |
| `margin_right` | `int` | 0x24 | 0x24 | 0x24 |
| `margin_bottom` | `int` | 0x28 | 0x28 | 0x28 |
| `font` | `CBitFont*` | 0x2c | 0x2c | 0x2c |
| `unknown_0x30` | `int` | 0x30 | 0x30 | 0x30 |
| `underline` | `int` | 0x34 | 0x34 | 0x34 |
| `page_count` | `int` | 0x38 | 0x38 | 0x38 |
| `pages` | `STextPage*` | 0x3c | 0x3c | 0x3c |
| `word_x` | `int` | 0x40 | 0x40 | 0x40 |
| `word_y` | `int` | 0x44 | 0x44 | 0x44 |
| `word` | `char[256]` | 0x48 | 0x48 | 0x48 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x148+0x100
- **blairwitch2**: 0x148+0x100
- **bw3**: 0x148+0x100
