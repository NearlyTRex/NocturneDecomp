# CBoneGuy

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 50404 | fields | 50404 |
| nocturne | 49996 | fields | 49996 |
| bw1 | 51344 | fields | 51344 |
| blairwitch2 | 69920 | fields | 69920 |
| bw3 | 54936 | fields | 54936 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `pickup_attempt_count` | `int` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 | 0xd054 |
| `search_timer` | `float` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc | 0xd05c |
| `pickup_cooldown` | `float` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 | 0xd060 |
| `pickup_target` | `CDemonActor*` | 0xbec8 | 0xbd30 | 0xc274 | 0x10b04 | 0xd064 |
| `sfx_handle` | `uint` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 | 0xd078 |
| `death_event` | `char[100]` | 0xbed0 | 0xbd38 | 0xc27c | 0x10b0c | 0xd07c |
| `recombine_time` | `float` | 0xbf34 | 0xbd9c | 0xc2e0 | 0x10b70 | 0xd0e0 |
| `box_count` | `int` | 0xbf38 | 0xbda0 | 0xc2e4 | 0x10b74 | 0xd0e8 |
| `boxes` | `SBoneGuyBox[20]` | 0xbf3c | 0xbda4 | 0xc2e8 | 0x10b78 | 0xd0f0 |
| `blown_up` | `int` | 0xc4dc | 0xc344 | 0xc888 | 0x11118 | 0xd0e4 |
| `recombine_interpolation` | `float` | 0xc4e0 | 0xc348 | 0xc88c | 0x1111c | 0xd694 |
| `start_hit_points` | `float` |  |  |  |  | 0xd058 |
| `explode_position` | `CVector3f` |  |  |  |  | 0xd068 |
| `skeleton_variant` | `int` |  |  |  |  | 0xd074 |
| `explode_count` | `int` |  |  |  |  | 0xd0ec |
| `guard_idle` | `int` |  |  |  |  | 0xd690 |
