# CVampireBoss

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 846112 | fields | 846112 |
| nocturne | 781768 | fields | 781768 |
| bw1 | 783356 | fields | 783356 |
| blairwitch2 | 801692 | fields | 801692 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `model` | `CDeformableModelInstance` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `wing_cloth` | `CCloth` | 0xe170 | 0xdfd8 | 0xe60c | 0x12dac |
| `cape_cloth` | `CCloth` | 0x4dfe0 | 0x48b08 | 0x4913c | 0x4d8dc |
| `skirt_cloth` | `CCloth` | 0x8de50 | 0x83638 | 0x83c6c | 0x8840c |
| `form` | `int` | 0xcdcc0 | 0xbe168 | 0xbe79c | 0xc2f3c |
| `morph` | `CMorph` | 0xcdcc4 | 0xbe16c | 0xbe7a0 | 0xc2f40 |
| `morph_t` | `float` | 0xce8f0 | 0xbed98 | 0xbf3cc | 0xc3b6c |
| `action_timer` | `float` | 0xce8f4 | 0xbed9c | 0xbf3d0 | 0xc3b70 |
| `flee_timer` | `float` | 0xce8f8 | 0xbeda0 | 0xbf3d4 | 0xc3b74 |
| `has_attacked` | `int` | 0xce8fc | 0xbeda4 | 0xbf3d8 | 0xc3b78 |
| `sfx_handle` | `uint` | 0xce900 | 0xbeda8 | 0xbf3dc | 0xc3b7c |
| `bat_ai_state` | `int` | 0xce904 | 0xbedac | 0xbf3e0 | 0xc3b80 |
| `waypoint_index` | `int` | 0xce908 | 0xbedb0 | 0xbf3e4 | 0xc3b84 |
| `way_point_0` | `CDemonActor*` | 0xce90c | 0xbedb4 | 0xbf3e8 | 0xc3b88 |
| `way_point_1` | `CDemonActor*` | 0xce910 | 0xbedb8 | 0xbf3ec | 0xc3b8c |
| `way_point_2` | `CDemonActor*` | 0xce914 | 0xbedbc | 0xbf3f0 | 0xc3b90 |
| `way_point_3` | `CDemonActor*` | 0xce918 | 0xbedc0 | 0xbf3f4 | 0xc3b94 |
| `follow_result` | `int` | 0xce91c | 0xbedc4 | 0xbf3f8 | 0xc3b98 |
