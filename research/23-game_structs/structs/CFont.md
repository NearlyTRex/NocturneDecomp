# CFont

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 4 | fields | — |
| nocturne | 4 | fields | — |
| bw1 | 27208 | fields | — |
| blairwitch2 | 27208 | fields | — |
| bw3 | 27208 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `vtable` | `CFont_vtable*` | 0x0 | 0x0 | 0x6a44 | 0x6a44 | 0x6a44 |
| `queued_text_count` | `int` |  |  | 0x0 | 0x0 | 0x0 |
| `queued_x` | `int[100]` |  |  | 0x4 | 0x4 | 0x4 |
| `queued_y` | `int[100]` |  |  | 0x194 | 0x194 | 0x194 |
| `queued_text` | `char[100][256]` |  |  | 0x324 | 0x324 | 0x324 |
| `queued_foreground_color` | `int[100]` |  |  | 0x6724 | 0x6724 | 0x6724 |
| `queued_background_color` | `int[100]` |  |  | 0x68b4 | 0x68b4 | 0x68b4 |
