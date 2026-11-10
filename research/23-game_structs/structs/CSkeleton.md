# CSkeleton

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 170028 | fields | 170028 |
| nocturne | 168828 | fields | 168828 |
| bw1 | 126108 | fields | 126108 |
| blairwitch2 | 122908 | fields | 122908 |
| bw3 | 126108 | fields | 126108 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `motion_list` | `CMotionList` | 0x0 | 0x0 |  |  |  |
| `loaded_filename` | `char[80]` | 0x28508 | 0x28508 |  |  |  |
| `bone_count` | `int` | 0x28558 | 0x28558 | 0x1de78 | 0x1d1f8 | 0x1de78 |
| `bone_list` | `SBone[100]` | 0x2855c | 0x2855c | 0x1de7c | 0x1d1fc | 0x1de7c |
| `frame_count` | `int` | 0x2936c | 0x2936c | 0x1ec8c | 0x1e00c | 0x1ec8c |
| `bone_angle_frames` | `CQuaternion4f*` | 0x29370 | 0x29370 | 0x1ec90 | 0x1e010 | 0x1ec90 |
| `frame_positions_1` | `CVector3f*` | 0x29374 | 0x29374 |  |  |  |
| `frame_positions_2` | `CVector3f*` | 0x29378 | 0x29378 |  |  |  |
| `reference_bone_origins` | `CVector3f[100]` | 0x2937c |  |  |  |  |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x0+0x1de78, 0x1dee0+0xdac, 0x1ec94+0x8
- **blairwitch2**: 0x0+0x1d1f8, 0x1d260+0xdac, 0x1e014+0x8
- **bw3**: 0x0+0x1de78, 0x1dee0+0xdac, 0x1ec94+0x8
