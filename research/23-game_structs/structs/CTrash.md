# CTrash

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 808 | fields | 808 |
| nocturne | 800 | fields | 800 |
| bw1 | 808 | fields | 808 |
| blairwitch2 | 1156 | fields | 1156 |
| bw3 | 808 | fields | 808 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `home_pos` | `CVector3f` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `collision_bottom_y` | `float` | 0x2e0 | 0x2d8 | 0x2e0 | 0x43c | 0x2e0 |
| `collision_top_y` | `float` | 0x2e4 | 0x2dc | 0x2e4 | 0x440 | 0x2e4 |
| `velocity` | `CVector3f` | 0x2e8 | 0x2e0 | 0x2e8 | 0x444 | 0x2e8 |
| `acceleration` | `CVector3f` | 0x2f4 | 0x2ec | 0x2f4 | 0x450 | 0x2f4 |
| `drift` | `CVector3f` | 0x300 | 0x2f8 | 0x300 | 0x45c | 0x300 |
| `damping_factor` | `float` | 0x30c | 0x304 | 0x30c | 0x468 | 0x30c |
| `collision_radius` | `float` | 0x310 | 0x308 | 0x310 | 0x46c | 0x310 |
| `animation_timer` | `float` | 0x314 | 0x30c | 0x314 | 0x470 | 0x314 |
| `drift_target` | `CVector3f` | 0x318 | 0x310 | 0x318 | 0x474 | 0x318 |
| `gravity` | `float` | 0x324 | 0x31c | 0x324 | 0x480 | 0x324 |
