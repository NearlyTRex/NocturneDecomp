# CPassenger

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 132168 | fields | 132168 |
| nocturne | 131760 | fields | 131760 |
| bw1 | 133112 | fields | 133112 |
| blairwitch2 | 151688 | fields | 151688 |
| bw3 | 136200 | fields | 136200 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CNPC` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `transform_event` | `char[100]` | 0x1f708 | 0x1f570 | 0x1fab8 | 0x24348 | 0x206c8 |
| `wolf_model_name` | `char[32]` | 0x1f76c | 0x1f5d4 | 0x1fb1c | 0x243ac | 0x2072c |
| `name_of_wolf` | `char[32]` | 0x1f78c | 0x1f5f4 | 0x1fb3c | 0x243cc | 0x2074c |
| `transform_wav` | `char[100]` | 0x1f7ac | 0x1f614 | 0x1fb5c | 0x243ec | 0x2076c |
| `werewolf_actor` | `CWerewolf*` | 0x1f810 | 0x1f678 | 0x1fbc0 | 0x24450 | 0x207d0 |
| `morph` | `CMorph` | 0x1f814 | 0x1f67c | 0x1fbc4 | 0x24454 | 0x207d4 |
| `morph_time` | `float` | 0x20440 | 0x202a8 | 0x207f0 | 0x25080 | 0x21400 |
| `wolf_size` | `float` | 0x20444 | 0x202ac | 0x207f4 | 0x25084 | 0x21404 |
