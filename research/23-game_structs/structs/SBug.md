# SBug

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 64 | fields | 64 |
| nocturne | 64 | fields | 64 |
| bw1 | 64 | placeholder | 64 |
| blairwitch2 | 64 | placeholder | 64 |
| bw3 | 64 | placeholder | 64 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `state` | `int` | 0x0 | 0x0 |  |  |  |
| `model_index` | `int` | 0x4 | 0x4 |  |  |  |
| `position` | `CVector3f` | 0x8 | 0x8 |  |  |  |
| `orientation` | `CVector3f` | 0x14 | 0x14 |  |  |  |
| `dest_position` | `CVector3f` | 0x20 | 0x20 |  |  |  |
| `current_vertex` | `int` | 0x2c | 0x2c |  |  |  |
| `dest_vertex` | `int` | 0x30 | 0x30 |  |  |  |
| `interp_t` | `float` | 0x34 | 0x34 |  |  |  |
| `crawl_duration` | `float` | 0x38 | 0x38 |  |  |  |
| `downward_bias` | `int` | 0x3c | 0x3c |  |  |  |
