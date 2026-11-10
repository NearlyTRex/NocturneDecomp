# CVehicle

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 4216 | fields | 4216 |
| nocturne | 4208 | fields | 4208 |
| bw1 | 4216 | fields | 4216 |
| blairwitch2 | 4564 | fields | 4564 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 |
| `extra_models` | `CKeyFramedModelInstance[4]` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 |
| `world_velocity` | `CVector3f` | 0x8c4 | 0x8bc | 0x8c4 | 0xa20 |
| `local_velocity` | `CVector3f` | 0x8d0 | 0x8c8 | 0x8d0 | 0xa2c |
| `unused_physics_vectors` | `CVector3f[5]` | 0x8dc | 0x8d4 | 0x8dc | 0xa38 |
| `mass` | `float` | 0x918 | 0x910 | 0x918 | 0xa74 |
| `scaled_mass` | `float` | 0x91c | 0x914 | 0x91c | 0xa78 |
| `inertia_yz` | `float` | 0x920 | 0x918 | 0x920 | 0xa7c |
| `inertia_xz` | `float` | 0x924 | 0x91c | 0x924 | 0xa80 |
| `inertia_xy` | `float` | 0x928 | 0x920 | 0x928 | 0xa84 |
| `bound_size` | `CVector3f` | 0x92c | 0x924 | 0x92c | 0xa88 |
| `tire_count` | `int` | 0x938 | 0x930 | 0x938 | 0xa94 |
| `tires` | `CTire[4]` | 0x93c | 0x934 | 0x93c | 0xa98 |
| `ground_normal` | `CVector3f` | 0x100c | 0x1004 | 0x100c | 0x1168 |
| `ground_offset` | `float` | 0x1018 | 0x1010 | 0x1018 | 0x1174 |
| `dead` | `int` | 0x101c | 0x1014 | 0x101c | 0x1178 |
| `course` | `CCourse` | 0x1020 | 0x1018 | 0x1020 |  |
| `cur_time` | `float` | 0x102c | 0x1024 | 0x102c | 0x1188 |
| `total_time` | `float` | 0x1030 | 0x1028 | 0x1030 | 0x118c |
| `course_name` | `char[32]` | 0x1034 | 0x102c | 0x1034 | 0x1190 |
| `sfx_handles` | `uint[3]` | 0x1054 | 0x104c | 0x1054 | 0x11b0 |
| `sound_velocity` | `CVector3f` | 0x1060 | 0x1058 | 0x1060 | 0x11bc |
| `is_visible` | `int` | 0x106c | 0x1064 | 0x106c | 0x11c8 |
| `last_mobster_left` | `CDemonActor*` | 0x1070 | 0x1068 | 0x1070 | 0x11cc |
| `last_mobster_right` | `CDemonActor*` | 0x1074 | 0x106c | 0x1074 | 0x11d0 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x117c+0xc
