# CSampleInfo

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 288 | fields | — |
| nocturne | 288 | fields | — |
| bw1 | 288 | fields | — |
| blairwitch2 | 288 | fields | — |
| bw3 | 288 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `name` | `char[256]` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `streaming_flag` | `int` | 0x100 | 0x100 | 0x100 | 0x100 | 0x100 |
| `bit_depth` | `int` | 0x104 | 0x104 | 0x104 | 0x104 | 0x104 |
| `num_channels` | `int` | 0x108 | 0x108 | 0x108 | 0x108 | 0x108 |
| `sample_rate` | `int` | 0x10c | 0x10c | 0x10c | 0x10c | 0x10c |
| `sample_count` | `int` | 0x110 | 0x110 | 0x110 | 0x110 | 0x110 |
| `reference_distance` | `float` | 0x114 | 0x114 | 0x114 | 0x114 | 0x114 |
| `reference_volume_distance` | `float` | 0x118 | 0x118 | 0x118 | 0x118 | 0x118 |
| `max_distance` | `float` | 0x11c | 0x11c | 0x11c | 0x11c | 0x11c |
