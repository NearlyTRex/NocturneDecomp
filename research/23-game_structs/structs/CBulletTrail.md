# CBulletTrail

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 36 | fields | 36 |
| nocturne | 36 | fields | 36 |
| bw1 | 36 | fields | 36 |
| blairwitch2 | 36 | fields | 36 |
| bw3 | 36 | fields | 36 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `start_position` | `CVector3f` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `end_position` | `CVector3f` | 0xc | 0xc | 0xc | 0xc | 0xc |
| `model_ptr` | `CKeyFramedModel*` | 0x18 | 0x18 | 0x18 | 0x18 | 0x18 |
| `segment_length` | `float` | 0x1c | 0x1c | 0x1c | 0x1c | 0x1c |
| `frames_remaining` | `int` | 0x20 | 0x20 | 0x20 | 0x20 | 0x20 |
