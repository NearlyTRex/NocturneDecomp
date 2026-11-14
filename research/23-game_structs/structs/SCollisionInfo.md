# SCollisionInfo

Category `/Nocturne/Struct/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 40 | fields | 40 |
| nocturne | 40 | fields | 40 |
| bw1 | 40 | fields | 40 |
| blairwitch2 | 40 | fields | 40 |
| bw3 | 40 | fields | 40 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `ray_query` | `SRayQueryState` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `cylinder_bottom_y` | `float` | 0x14 | 0x14 | 0x14 | 0x14 | 0x14 |
| `cylinder_top_y` | `float` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `cylinder_radius` | `float` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `deformable_model` | `CDeformableModelInstance*` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
| `keyframed_model` | `CKeyFramedModelInstance*` | 0x24 | 0x24 | 0x24 | 0x24 | 0x24 |
