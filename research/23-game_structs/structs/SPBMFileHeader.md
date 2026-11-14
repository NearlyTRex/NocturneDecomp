# SPBMFileHeader

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 28 | fields | — |
| nocturne | 28 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `magic` | `char[4]` | 0x0 | 0x0 |
| `width` | `int` | 0x4 | 0x4 |
| `height` | `int` | 0x8 | 0x8 |
| `reserved1` | `int` | 0xc | 0xc |
| `reserved2` | `int` | 0x10 | 0x10 |
| `right_max` | `int` | 0x14 | 0x14 |
| `bottom_max` | `int` | 0x18 | 0x18 |
