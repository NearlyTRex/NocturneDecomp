# CLadder

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 768 | fields | 768 |
| nocturne | 760 | fields | 760 |
| bw1 | 768 | fields | 768 |
| blairwitch2 | 1116 | fields | 1116 |
| bw3 | 768 | fields | 768 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CDemonActor` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x158 | 0x150 | 0x158 | 0x2b4 | 0x158 |
| `ladder_size` | `CVector3f` | 0x2d4 | 0x2cc | 0x2d4 | 0x430 | 0x2d4 |
| `master_actor` | `CDemonActor*` | 0x2e0 | 0x2d8 | 0x2e0 | 0x43c | 0x2e0 |
| `relative_position` | `CVector3f` | 0x2e4 | 0x2dc | 0x2e4 | 0x440 | 0x2e4 |
| `cached_euler_angles` | `CVector3f` | 0x2f0 | 0x2e8 | 0x2f0 | 0x44c | 0x2f0 |
| `ground_type` | `EGroundType` | 0x2fc | 0x2f4 | 0x2fc | 0x458 | 0x2fc |
