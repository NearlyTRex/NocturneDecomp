# SPose

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 6812 | fields | 6812 |
| nocturne | 6812 | fields | 6812 |
| bw1 | unsized | placeholder | — |
| blairwitch2 | unsized | placeholder | — |
| bw3 | unsized | placeholder | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `pose_data` | `SPoseData` | 0x0 | 0x0 |  |  |  |
| `bone_scales` | `float[100]` | 0x64c | 0x64c |  |  |  |
| `bone_model_matrices` | `CMatrix3x4f[100]` | 0x7dc | 0x7dc |  |  |  |
