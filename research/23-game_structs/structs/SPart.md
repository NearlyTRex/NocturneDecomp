# SPart

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 96 | fields | — |
| nocturne | 96 | fields | — |
| bw1 | unsized | placeholder | — |
| blairwitch2 | 96 | fields | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `part_name` | `char[32]` | 0x0 | 0x0 |  | 0x0 |  |
| `tri_counts` | `int[5]` | 0x20 | 0x20 |  | 0x20 |  |
| `cap_tri_counts` | `int[5]` | 0x34 | 0x34 |  | 0x34 |  |
| `adj_part_count` | `int` | 0x48 | 0x48 |  | 0x48 |  |
| `adj_part_list` | `int[4]` | 0x4c | 0x4c |  | 0x4c |  |
| `dominant_bone` | `int` | 0x5c | 0x5c |  | 0x5c |  |
