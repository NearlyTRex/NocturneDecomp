# SMotionTransition

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 24 | fields | — |
| nocturne | 24 | fields | — |
| bw1 | 24 | fields | — |
| blairwitch2 | 24 | fields | — |
| bw3 | 24 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `desired_state` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `cmd` | `EMotionTransitionCmd` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `to_motion_number` | `int` | 0x8 | 0x8 | 0x8 | 0x8 | 0x8 |
| `to_frame_number` | `float` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `tween_time` | `float` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `set_new_state_as_desired` | `int` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
