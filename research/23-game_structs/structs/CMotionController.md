# CMotionController

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 84 | fields | — |
| nocturne | 84 | fields | 84 |
| bw1 | 84 | fields | 84 |
| blairwitch2 | 84 | fields | 84 |
| bw3 | 84 | fields | 84 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `motion_list_ptr` | `CMotionList*` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `current_motion_index` | `int` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `current_frame_number` | `float` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `tween_type` | `EMotionTransitionCmd` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `tween_speed` | `float` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `tween_progress` | `float` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `tween_target_motion` | `int` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `tween_target_frame` | `float` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `tween_direction` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `tween_set_new_state` | `int` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
| `state_index` | `int` | 0x28 | 0x28 | 0x28 | 0x28 | 0x28 |
| `in_transition` | `SMotionTransition*` | 0x2c | 0x2c | 0x2c | 0x2c | 0x2c |
| `current_motion_name` | `char[32]` | 0x30 | 0x30 | 0x30 | 0x30 | 0x30 |
| `vtable` | `CMotionController_vtable*` | 0x50 | 0x50 | 0x50 | 0x50 | 0x50 |
