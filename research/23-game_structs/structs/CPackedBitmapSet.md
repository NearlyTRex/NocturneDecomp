# CPackedBitmapSet

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | — |
| nocturne | 40 | fields | — |
| bw1 | 40 | fields | — |
| blairwitch2 | 40 | fields | — |
| bw3 | 40 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `bitmap_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `bitmap_array` | `CPackedBitmap*` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `filename` | `char[20]` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `width` | `int` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `height` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `frames_per_bitmap` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
