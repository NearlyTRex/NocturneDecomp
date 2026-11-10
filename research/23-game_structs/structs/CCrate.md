# CCrate

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 764 | fields | 764 |
| nocturne | 756 | fields | 756 |
| bw1 | 764 | fields | 764 |
| blairwitch2 | 1112 | fields | 1112 |
| bw3 | 764 | fields | 764 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `carrier` | `CDemonActor*` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `ground_check_radius` | `float` | 0x2d8 | 0x2d0 | 0x2d8 | 0x434 | 0x2d8 |
| `last_platform` | `CDemonActor*` | 0x2dc | 0x2d4 | 0x2dc | 0x438 | 0x2dc |
| `cached_position` | `CVector3f` | 0x2e0 | 0x2d8 | 0x2e0 | 0x43c | 0x2e0 |
| `cached_orientation` | `UOrientationVector` | 0x2ec | 0x2e4 | 0x2ec | 0x448 | 0x2ec |
| `cached_ground_height` | `float` | 0x2f8 | 0x2f0 | 0x2f8 | 0x454 | 0x2f8 |
