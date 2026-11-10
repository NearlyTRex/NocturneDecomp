# CSfxOptions

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 112 | fields | — |
| nocturne | 108 | fields | — |
| bw1 | 96 | placeholder | — |
| blairwitch2 | 96 | placeholder | — |
| bw3 | 96 | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `channel_index` | `int` | 0x0 | 0x0 |  |  |  |
| `position` | `CVector3d` | 0x4 | 0x4 |  |  |  |
| `position_source_ptr` | `void*` | 0x1c | 0x1c |  |  |  |
| `position_format` | `int` | 0x20 | 0x20 |  |  |  |
| `velocity` | `CVector3d` | 0x24 | 0x24 |  |  |  |
| `velocity_source_ptr` | `void*` | 0x3c | 0x3c |  |  |  |
| `velocity_format` | `int` | 0x40 | 0x40 |  |  |  |
| `current_volume` | `float` | 0x44 | 0x44 |  |  |  |
| `base_frequency` | `float` | 0x48 | 0x48 |  |  |  |
| `delay_remaining` | `double` | 0x4c | 0x4c |  |  |  |
| `userdata` | `void*[2]` | 0x54 | 0x54 |  |  |  |
| `flags` | `uint` | 0x5c | 0x5c |  |  |  |
| `playback_position` | `double` | 0x60 | 0x60 |  |  |  |
| `playback_position_type` | `int` | 0x68 | 0x68 |  |  |  |
| `dead` | `int` | 0x6c |  |  |  |  |
