# CMimic

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 313944 | fields | 313944 |
| nocturne | 292224 | fields | 292224 |
| bw1 | 293572 | fields | 293572 |
| blairwitch2 | 312148 | fields | 312148 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 |
| `mirror_condition` | `char[100]` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 |
| `attack_condition` | `char[100]` | 0xbf20 | 0xbd88 | 0xc2cc | 0x10b5c |
| `cloth` | `CCloth` | 0xbf84 | 0xbdec | 0xc330 | 0x10bc0 |
| `attack_mode` | `int` | 0x4bdf4 | 0x4691c | 0x46e60 | 0x4b6f0 |
| `mirror_plane_actor` | `CDemonActor*` | 0x4bdf8 | 0x46920 | 0x46e64 | 0x4b6f4 |
| `morph_actor_type` | `char[40]` | 0x4bdfc | 0x46924 | 0x46e68 | 0x4b6f8 |
| `morph` | `CMorph` | 0x4be24 | 0x4694c | 0x46e90 | 0x4b720 |
| `morph_blend` | `float` | 0x4ca50 | 0x47578 | 0x47abc | 0x4c34c |
| `morph_target_actor` | `CDemonActor*` | 0x4ca54 | 0x4757c | 0x47ac0 | 0x4c350 |
