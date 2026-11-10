# CWinFont

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 316 | fields | 316 |
| nocturne | 316 | fields | — |
| bw1 | 27520 | fields | 27520 |
| blairwitch2 | 27520 | fields | 27520 |
| bw3 | 27520 | fields | 27520 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CFont` | 0x0 | 0x0 |  |  |  |
| `device_context_handle` | `HDC` | 0x4 | 0x4 | 0x6a48 | 0x6a48 | 0x6a48 |
| `dib_handle` | `HBITMAP` | 0x8 | 0x8 | 0x6a4c | 0x6a4c | 0x6a4c |
| `font_handle` | `HFONT` | 0xc | 0xc | 0x6a50 | 0x6a50 | 0x6a50 |
| `object_handle` | `HGDIOBJ` | 0x10 | 0x10 | 0x6a54 | 0x6a54 | 0x6a54 |
| `ppv_bits` | `void*` | 0x14 | 0x14 | 0x6a58 | 0x6a58 | 0x6a58 |
| `text_cache` | `char[256]` | 0x18 | 0x18 | 0x6a5c | 0x6a5c | 0x6a5c |
| `cached_string_width` | `int` | 0x118 | 0x118 | 0x6b5c | 0x6b5c | 0x6b5c |
| `cached_string_height` | `int` | 0x11c | 0x11c | 0x6b60 | 0x6b60 | 0x6b60 |
| `right` | `int` | 0x120 | 0x120 | 0x6b64 | 0x6b64 | 0x6b64 |
| `top` | `int` | 0x124 | 0x124 | 0x6b68 | 0x6b68 | 0x6b68 |
| `bpp` | `int` | 0x128 | 0x128 | 0x6b6c | 0x6b6c | 0x6b6c |
| `cached_foreground_color` | `int` | 0x12c | 0x12c | 0x6b70 | 0x6b70 | 0x6b70 |
| `cached_background_color` | `int` | 0x130 | 0x130 | 0x6b74 | 0x6b74 | 0x6b74 |
| `y_offset1` | `int` | 0x134 | 0x134 | 0x6b78 | 0x6b78 | 0x6b78 |
| `y_offset2` | `int` | 0x138 | 0x138 | 0x6b7c | 0x6b7c | 0x6b7c |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x0+0x6a48
- **blairwitch2**: 0x0+0x6a48
- **bw3**: 0x0+0x6a48
