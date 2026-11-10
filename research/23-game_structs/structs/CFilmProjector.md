# CFilmProjector

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 996 | fields | 996 |
| nocturne | 988 | fields | 988 |
| bw1 | 996 | fields | 996 |
| blairwitch2 | 1344 | fields | 1344 |
| bw3 | 996 | fields | 996 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CActorDestination` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CKeyFramedModelInstance` | 0x1f4 | 0x1ec | 0x1f4 | 0x350 | 0x1f4 |
| `key_reel` | `CDemonActor*` | 0x370 | 0x368 | 0x370 | 0x4cc | 0x370 |
| `key_event` | `char[100]` | 0x374 | 0x36c | 0x374 | 0x4d0 | 0x374 |
| `reel_rotation` | `float` | 0x3d8 | 0x3d0 | 0x3d8 | 0x534 | 0x3d8 |
| `prev_dest_state` | `int` | 0x3dc | 0x3d4 | 0x3dc | 0x538 | 0x3dc |
| `sfx_handle` | `uint` | 0x3e0 | 0x3d8 | 0x3e0 | 0x53c | 0x3e0 |
