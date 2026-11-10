# CTextureCache

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 81932 | fields | — |
| nocturne | 81932 | fields | — |
| bw1 | 98316 | fields | — |
| blairwitch2 | 98316 | fields | — |
| bw3 | 98316 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `wrap_indicator` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `max_texture_count` | `int` | 0x4 | 0x4 |  |  |  |
| `texture_dimensions` | `int[1024]` | 0x8 | 0x8 | 0x4 | 0x4 | 0x4 |
| `texture_data_ptrs` | `uchar*[1024]` | 0x1008 | 0x1008 |  |  |  |
| `texture_opacity_ptrs` | `uchar*[1024]` | 0x2008 | 0x2008 |  |  |  |
| `texture_names` | `char[1024][64]` | 0x3008 | 0x3008 |  |  |  |
| `texture_palette_ptrs` | `uchar*[1024]` | 0x13008 | 0x13008 |  |  |  |
| `current_texture_count` | `int` | 0x14008 | 0x14008 | 0x18004 | 0x18004 | 0x18004 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x1004+0x17000, 0x18008+0x4
- **blairwitch2**: 0x1004+0x17000, 0x18008+0x4
- **bw3**: 0x1004+0x17000, 0x18008+0x4
