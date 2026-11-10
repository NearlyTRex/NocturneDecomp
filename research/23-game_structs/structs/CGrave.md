# CGrave

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 944 | fields | 944 |
| nocturne | 936 | fields | 936 |
| bw1 | 944 | fields | 944 |
| blairwitch2 | 1292 | fields | 1292 |
| bw3 | 944 | fields | 944 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `cur_frame` | `float` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `fps` | `float` | 0x2d8 | 0x2d0 | 0x2d8 | 0x434 | 0x2d8 |
| `animation_started` | `int` | 0x2dc | 0x2d4 | 0x2dc | 0x438 | 0x2dc |
| `grave_state` | `int` | 0x2e0 | 0x2d8 | 0x2e0 | 0x43c | 0x2e0 |
| `hide_on_first_frame` | `int` | 0x2e4 | 0x2dc | 0x2e4 | 0x440 | 0x2e4 |
| `start_condition` | `char[100]` | 0x2e8 | 0x2e0 | 0x2e8 | 0x444 | 0x2e8 |
| `start_sound` | `char[100]` | 0x34c | 0x344 | 0x34c | 0x4a8 | 0x34c |
