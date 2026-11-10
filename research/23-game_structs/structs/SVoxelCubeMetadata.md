# SVoxelCubeMetadata

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 88 | fields | — |
| nocturne | 88 | fields | — |
| bw1 | 88 | fields | — |
| blairwitch2 | 88 | fields | — |
| bw3 | 88 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `triangle_count` | `int` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `triangle_list` | `CDemonTriangle*` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `dead1` | `int` | 0x8 | 0x8 |  |  |  |
| `part_ptr` | `CDemonPart*` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `dead2` | `int` | 0x10 | 0x10 |  |  |  |
| `voxel_data` | `uint[16]` | 0x14 | 0x14 |  |  |  |
| `triangle_flags` | `uchar*` | 0x54 | 0x54 | 0x54 | 0x54 | 0x54 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x8+0x4, 0x10+0x44
- **blairwitch2**: 0x8+0x4, 0x10+0x44
- **bw3**: 0x8+0x4, 0x10+0x44
