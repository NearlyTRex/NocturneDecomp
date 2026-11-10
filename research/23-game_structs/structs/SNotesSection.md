# SNotesSection

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 740 | fields | — |
| blairwitch2 | 740 | fields | — |
| bw3 | 740 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|
| `name` | `char[64]` | 0x0 | 0x0 | 0x0 |
| `title` | `char[256]` | 0x40 | 0x40 | 0x40 |
| `first_page` | `int` | 0x140 | 0x140 | 0x140 |
| `page_count` | `int` | 0x144 | 0x144 | 0x144 |
| `tab_x` | `int` | 0x148 | 0x148 | 0x148 |
| `tab_y` | `int` | 0x14c | 0x14c | 0x14c |
| `entry_count` | `int` | 0x150 | 0x150 | 0x150 |
| `entries` | `SNotesEntry*[100]` | 0x154 | 0x154 | 0x154 |
