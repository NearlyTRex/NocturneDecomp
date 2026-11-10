# SSpatialTreeNode

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 32 | fields | — |
| nocturne | 32 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `child1` | `SSpatialTreeNode*` | 0x0 | 0x0 |
| `child2` | `SSpatialTreeNode*` | 0x4 | 0x4 |
| `children_present` | `int` | 0x8 | 0x8 |
| `part_id` | `int` | 0xc | 0xc |
| `plane_normal_x` | `float` | 0x10 | 0x10 |
| `plane_normal_y` | `float` | 0x14 | 0x14 |
| `plane_normal_z` | `float` | 0x18 | 0x18 |
| `plane_distance` | `float` | 0x1c | 0x1c |
