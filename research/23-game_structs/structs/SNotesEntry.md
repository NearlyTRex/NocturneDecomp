# SNotesEntry

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 348 | fields | — |
| blairwitch2 | 348 | fields | — |
| bw3 | 348 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `name` | `char[64]` | 0x0 | 0x0 | 0x0 |
| `title` | `char[256]` | 0x40 | 0x40 | 0x40 |
| `kind` | `int` | 0x140 | 0x140 | 0x140 |
| `page` | `int` | 0x144 | 0x144 | 0x144 |
| `lines` | `CStrList` | 0x148 | 0x148 | 0x148 |
| `map_index` | `int` | 0x158 | 0x158 | 0x158 |
