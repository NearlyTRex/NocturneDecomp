# CBitmap

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit |
|---|---|---:|
| `name` | `char[20]` | 0x0 |
| `width` | `short` | 0x14 |
| `height` | `short` | 0x16 |
| `bytes_per_row` | `short` | 0x18 |
| `bit_depth` | `char` | 0x1a |
| `bytes_per_pixel` | `char` | 0x1b |
| `pixel_data` | `void*` | 0x1c |
| `row_table` | `void**` | 0x20 |
| `palette` | `void*` | 0x24 |
