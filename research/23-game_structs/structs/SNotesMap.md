# SNotesMap

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 2416 | fields | — |
| blairwitch2 | 2416 | fields | — |
| bw3 | 4716 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `entry` | `SNotesEntry*` | 0x0 | 0x0 | 0x0 |
| `image_name` | `char[100]` | 0x4 | 0x4 | 0x4 |
| `width` | `int` | 0x68 | 0x68 | 0x68 |
| `height` | `int` | 0x6c | 0x6c | 0x6c |
| `image` | `CAlphaBitmap` | 0x70 | 0x70 | 0x70 |
| `saved_alpha` | `void*` | 0x84 | 0x84 | 0x84 |
| `reveal_mask` | `CAlphaBitmap` | 0x88 | 0x88 | 0x88 |
| `set_count` | `int` | 0x9c | 0x9c | 0x9c |
| `sets` | `SNotesMapSet[4]` | 0xa0 | 0xa0 | 0xa0 |
| `annotation_count` | `int` | 0x2c0 | 0x2c0 | 0x5f0 |
| `annotations` | `SNotesMapAnnotation[8]` | 0x2c4 | 0x2c4 | 0x5f4 |
| `last_reveal_x` | `int` | 0x964 | 0x964 | 0x1260 |
| `last_reveal_y` | `int` | 0x968 | 0x968 | 0x1264 |
| `reveal_dirty` | `int` | 0x96c | 0x96c | 0x1268 |
