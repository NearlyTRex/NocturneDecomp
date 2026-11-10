# CShell

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 88 | fields | 88 |
| nocturne | 88 | fields | 88 |
| bw1 | 96 | fields | 96 |
| blairwitch2 | 96 | fields | 96 |
| bw3 | 96 | fields | 96 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CParticle` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `euler_angles` | `CVector3f` | 0x38 | 0x38 | 0x40 | 0x40 | 0x40 |
| `angular_velocity` | `CVector3f` | 0x44 | 0x44 | 0x4c | 0x4c | 0x4c |
| `bounce_count` | `int` | 0x50 | 0x50 | 0x58 | 0x58 | 0x58 |
| `model_ptr` | `CKeyFramedModel*` | 0x54 | 0x54 | 0x5c | 0x5c | 0x5c |
