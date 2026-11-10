# CToss

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 996 | fields | 996 |
| nocturne | 996 | fields | 996 |
| bw1 | 996 | fields | 996 |
| blairwitch2 | 996 | fields | 996 |
| bw3 | 1000 | fields | 1000 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `toss_type` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x4 | 0x4 | 0x4 | 0x4 |  |
| `physics_box` | `CBox` | 0x180 | 0x180 | 0x180 | 0x180 |  |
| `ground_height` | `float` | 0x3d8 | 0x3d8 | 0x3d8 | 0x3d8 |  |
| `fuse_timer` | `float` | 0x3dc | 0x3dc | 0x3dc | 0x3dc |  |
| `sfx_handle` | `uint` | 0x3e0 | 0x3e0 | 0x3e0 | 0x3e0 |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x4+0x3e4
