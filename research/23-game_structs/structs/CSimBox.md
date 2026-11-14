# CSimBox

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 1484 | fields | 1484 |
| nocturne | 1476 | fields | 1476 |
| bw1 | 1484 | fields | 1484 |
| blairwitch2 | 1832 | fields | 1832 |
| bw3 | 1484 | fields | 1484 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `type` | `int` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `weight` | `float` | 0x2d8 | 0x2d0 | 0x2d8 | 0x434 | 0x2d8 |
| `trigger_event` | `char[100]` | 0x2dc | 0x2d4 | 0x2dc | 0x438 | 0x2dc |
| `initial_velocity` | `CVector3f` | 0x340 | 0x338 | 0x340 | 0x49c | 0x340 |
| `init_rot_vel` | `CVector3f` | 0x34c | 0x344 | 0x34c | 0x4a8 | 0x34c |
| `physics_box` | `CBox` | 0x358 | 0x350 | 0x358 | 0x4b4 | 0x358 |
| `ground_height` | `float` | 0x5b0 | 0x5a8 | 0x5b0 | 0x70c | 0x5b0 |
| `spawn_position` | `CVector3f` | 0x5b4 | 0x5ac | 0x5b4 | 0x710 | 0x5b4 |
| `spawn_orientation` | `CVector3f` | 0x5c0 | 0x5b8 | 0x5c0 | 0x71c | 0x5c0 |
