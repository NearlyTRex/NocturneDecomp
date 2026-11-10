# CTheHand

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 49888 | fields | 49888 |
| bw3 | 53452 | fields | 53452 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 |
| `wait_timer` | `float` | 0xc268 | 0xd054 |
| `chase_timer` | `float` | 0xc26c | 0xd058 |
| `target_blend` | `float` | 0xc270 | 0xd05c |
| `target_matrix` | `CMatrix3x4f` | 0xc274 | 0xd060 |
| `prev_target_matrix` | `CMatrix3x4f` | 0xc2a4 | 0xd090 |
| `target_point` | `CVector3f` | 0xc2d4 | 0xd0c0 |
