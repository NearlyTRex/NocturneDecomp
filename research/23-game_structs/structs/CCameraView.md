# CCameraView

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 64 | fields | 64 |
| nocturne | 64 | fields | — |
| bw1 | 64 | fields | 64 |
| blairwitch2 | 64 | fields | 64 |
| bw3 | 64 | fields | 64 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `fixed_point_scale` | `float` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `position` | `UVector3` | 0x4 | 0x4 | 0x4 | 0x4 | 0x4 |
| `rotation_matrix` | `CMatrix3x3f` | 0x10 | 0x10 | 0x10 | 0x10 | 0x10 |
| `dead` | `int` | 0x34 | 0x34 | 0x34 | 0x34 | 0x34 |
| `focal_length` | `float` | 0x38 | 0x38 | 0x38 | 0x38 | 0x38 |
| `vtable` | `CCameraView_vtable*` | 0x3c | 0x3c | 0x3c | 0x3c | 0x3c |
