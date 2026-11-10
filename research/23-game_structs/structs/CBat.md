# CBat

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 904 | fields | 904 |
| nocturne | 896 | fields | 896 |
| bw1 | 904 | fields | 904 |
| blairwitch2 | 1252 | fields | 1252 |
| bw3 | 904 | fields | 904 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `course_filename` | `char[32]` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `course` | `CCourse` | 0x178 | 0x170 | 0x178 | 0x2d4 | 0x178 |
| `anim_frame` | `float` | 0x184 | 0x17c | 0x184 | 0x2e0 | 0x184 |
| `model` | `CKeyFramedModelInstance` | 0x188 | 0x180 | 0x188 | 0x2e4 | 0x188 |
| `param` | `float` | 0x304 | 0x2fc | 0x304 | 0x460 | 0x304 |
| `course_speed` | `float` | 0x308 | 0x300 | 0x308 | 0x464 | 0x308 |
| `speed` | `float` | 0x30c | 0x304 | 0x30c | 0x468 | 0x30c |
| `flap_speed` | `float` | 0x310 | 0x308 | 0x310 | 0x46c | 0x310 |
| `periodic_sound` | `char[100]` | 0x314 | 0x30c | 0x314 | 0x470 | 0x314 |
| `periodic_sound_timer_min` | `float` | 0x378 | 0x370 | 0x378 | 0x4d4 | 0x378 |
| `periodic_sound_timer_max` | `float` | 0x37c | 0x374 | 0x37c | 0x4d8 | 0x37c |
| `sfx_handle` | `uint` | 0x380 | 0x378 | 0x380 | 0x4dc | 0x380 |
| `sound_timer` | `float` | 0x384 | 0x37c | 0x384 | 0x4e0 | 0x384 |
