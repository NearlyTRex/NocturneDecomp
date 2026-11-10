# CSfxSlot

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 296 | fields | — |
| nocturne | 288 | fields | — |
| bw1 | 284 | fields | — |
| blairwitch2 | 284 | fields | — |
| bw3 | 284 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `options` | `CSfxOptions` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `hardware_buffer_handle` | `int` | 0x70 | 0x6c | 0x60 | 0x60 | 0x60 |
| `playback_state` | `int` | 0x74 | 0x70 | 0x64 | 0x64 | 0x64 |
| `sample` | `CSfxSample*` | 0x78 | 0x74 | 0x68 | 0x68 | 0x68 |
| `effective_frequency` | `float` | 0x7c | 0x78 | 0x6c | 0x6c | 0x6c |
| `distance_to_speakers` | `float[8]` | 0x80 | 0x7c |  |  |  |
| `channel_volumes` | `float[8]` | 0xa0 | 0x9c |  |  |  |
| `channel_target_buffer_offsets` | `int[8]` | 0xc0 | 0xbc |  |  |  |
| `channel_current_buffer_offsets` | `int[8]` | 0xe0 | 0xdc |  |  |  |
| `reference_distance` | `float` | 0x100 | 0xfc |  |  |  |
| `min_distance` | `float` | 0x104 | 0x100 |  |  |  |
| `max_distance` | `float` | 0x108 | 0x104 |  |  |  |
| `fade_target_volume` | `float` | 0x10c | 0x108 |  |  |  |
| `fade_time_remaining` | `float` | 0x110 | 0x10c | 0x110 | 0x110 | 0x110 |
| `stop_after_fade` | `float` | 0x114 | 0x110 |  |  |  |
| `is_active` | `int` | 0x118 | 0x114 |  |  |  |
| `prev_hardware_playback_pos` | `double` | 0x11c | 0x118 |  |  |  |
| `loop_marker_index` | `int` | 0x124 |  |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x70+0xa0, 0x114+0x8
- **blairwitch2**: 0x70+0xa0, 0x114+0x8
- **bw3**: 0x70+0xa0, 0x114+0x8
