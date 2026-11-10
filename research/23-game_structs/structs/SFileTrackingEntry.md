# SFileTrackingEntry

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 808 | fields | — |
| nocturne | 808 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `filename` | `char[260]` | 0x0 | 0x0 |
| `directory` | `char[260]` | 0x104 | 0x104 |
| `mode` | `char[20]` | 0x208 | 0x208 |
| `source_file` | `char[260]` | 0x21c | 0x21c |
| `line_number` | `int` | 0x320 | 0x320 |
| `file_ptr` | `_FILE*` | 0x324 | 0x324 |
