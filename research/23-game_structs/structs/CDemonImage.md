# CDemonImage

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1548 | fields | — |
| nocturne | 1548 | fields | — |
| bw1 | 1548 | fields | — |
| blairwitch2 | 1548 | fields | — |
| bw3 | 1548 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `color_cube_lookup` | `uchar[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `color_values` | `ushort[256]` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `data` | `void*` | 0x300 | 0x300 | 0x300 | 0x300 | 0x300 |
| `width` | `int` | 0x304 | 0x304 | 0x304 | 0x304 | 0x304 |
| `height` | `int` | 0x308 | 0x308 | 0x308 | 0x308 | 0x308 |
| `palette` | `SRGBColorPalette` | 0x30c | 0x30c | 0x30c | 0x30c | 0x30c |
