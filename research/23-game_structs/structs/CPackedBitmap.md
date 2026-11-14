# CPackedBitmap

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 36 | fields | 36 |
| nocturne | 36 | fields | 36 |
| bw1 | 36 | fields | 36 |
| blairwitch2 | 36 | fields | 36 |
| bw3 | 36 | fields | 36 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `filename` | `char[20]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `packed_data` | `ushort*` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `width` | `int` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `height` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `row_offsets` | `int*` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
