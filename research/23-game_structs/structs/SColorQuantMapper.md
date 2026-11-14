# SColorQuantMapper

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 33544 | fields | — |
| nocturne | 33544 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `num_palette_entries` | `int` | 0x0 | 0x0 |
| `sort_keys` | `double[256][4]` | 0x4 | 0x4 |
| `color_data` | `char*` | 0x2004 | 0x2004 |
| `centroids` | `SColorQuantCentroid[256]` | 0x2008 | 0x2008 |
| `boxes` | `SColorQuantBox[256]` | 0x4008 | 0x4008 |
| `output_palette` | `char[768]` | 0x8008 | 0x8008 |
