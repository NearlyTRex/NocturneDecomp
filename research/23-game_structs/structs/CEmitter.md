# CEmitter

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1172 | fields | 1172 |
| nocturne | 1164 | fields | 1164 |
| bw1 | 1216 | placeholder | 1216 |
| blairwitch2 | 1564 | placeholder | 1564 |
| bw3 | 1216 | placeholder | 1216 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 |  |  |  |
| `emitter_type` | `EEmitterType` | 0x158 | 0x150 |  |  |  |
| `emitter_size` | `CVector3f` | 0x15c | 0x154 |  |  |  |
| `emitter_state` | `int` | 0x168 | 0x160 |  |  |  |
| `event_on` | `char[100]` | 0x16c | 0x164 |  |  |  |
| `event_off` | `char[100]` | 0x1d0 | 0x1c8 |  |  |  |
| `max_emit_time` | `float` | 0x234 | 0x22c |  |  |  |
| `laser_type` | `int` | 0x238 | 0x230 |  |  |  |
| `laser_color` | `CColor3i` | 0x23c | 0x234 |  |  |  |
| `model` | `CKeyFramedModelInstance` | 0x248 | 0x240 |  |  |  |
| `rock_speed` | `float` | 0x3c4 | 0x3bc |  |  |  |
| `periodic_flag` | `int` | 0x3c8 | 0x3c0 |  |  |  |
| `max_wait_time` | `float` | 0x3cc | 0x3c4 |  |  |  |
| `dest_actor` | `CDemonActor*` | 0x3d0 | 0x3c8 |  |  |  |
| `wav_name` | `char[100]` | 0x3d4 | 0x3cc |  |  |  |
| `sfx_handle` | `uint` | 0x438 | 0x430 |  |  |  |
| `sfx_type` | `EEmitterSoundType` | 0x43c | 0x434 |  |  |  |
| `emit_timer` | `float` | 0x440 | 0x438 |  |  |  |
| `emit_period` | `float` | 0x444 | 0x43c |  |  |  |
| `state_timer` | `float` | 0x448 | 0x440 |  |  |  |
| `globe` | `CDemonGlobe` | 0x44c | 0x444 |  |  |  |
| `was_on_screen` | `int` | 0x48c | 0x484 |  |  |  |
| `prev_emitter_state` | `int` | 0x490 | 0x488 |  |  |  |
