# SVert

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 52 | fields | 52 |
| nocturne | 52 | fields | 52 |
| bw1 | 52 | placeholder | 52 |
| blairwitch2 | 52 | placeholder | 52 |
| bw3 | 52 | placeholder | 52 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `num_bone_influences` | `uchar` | 0x0 | 0x0 |  |  |  |
| `bone_indices` | `uchar[3]` | 0x1 | 0x1 |  |  |  |
| `bone_weights` | `float[3]` | 0x4 | 0x4 |  |  |  |
| `bone_offsets` | `CVector3f[3]` | 0x10 |  |  |  |  |
| `position` | `CVector3f` |  | 0x10 |  |  |  |
| `normal` | `CVector3f` |  | 0x1c |  |  |  |
| `tangent` | `CVector3f` |  | 0x28 |  |  |  |
