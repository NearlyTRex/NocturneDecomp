# CBulletHole

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 60 | fields | 60 |
| nocturne | 60 | fields | 60 |
| bw1 | 60 | placeholder | 60 |
| blairwitch2 | 60 | placeholder | 60 |
| bw3 | 64 | placeholder | 64 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `position` | `CVector3f` | 0x0 | 0x0 |  |  |  |
| `active` | `int` | 0xc | 0xc |  |  |  |
| `actor_ptr` | `CDemonActor*` | 0x10 | 0x10 |  |  |  |
| `euler_angles` | `CVector3f` | 0x14 | 0x14 |  |  |  |
| `texture_index` | `int` | 0x20 | 0x20 |  |  |  |
| `transformed_pos` | `CVector3f` | 0x24 | 0x24 |  |  |  |
| `actor_local_space` | `CVector3f` | 0x30 | 0x30 |  |  |  |
