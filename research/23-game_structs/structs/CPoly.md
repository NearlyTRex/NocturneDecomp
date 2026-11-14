# CPoly

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 104 | fields | 104 |
| nocturne | 104 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne |
|---|---|---:|---:|
| `parent_obj` | `CObj*` | 0x0 | 0x0 |
| `vertex_idx_0` | `int` | 0x4 | 0x4 |
| `vertex_idx_1` | `int` | 0x8 | 0x8 |
| `vertex_idx_2` | `int` | 0xc | 0xc |
| `uv_coords` | `CP2D[3]` | 0x10 | 0x10 |
| `normal` | `CP3D` | 0x40 | 0x40 |
| `adjacency_flags` | `int` | 0x58 | 0x58 |
| `material_id` | `int` | 0x5c | 0x5c |
| `flags` | `uint` | 0x60 | 0x60 |
| `vtable` | `CPoly_vtable*` | 0x64 | 0x64 |
