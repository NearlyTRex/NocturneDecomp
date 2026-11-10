# CCarved

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 49908 | fields | 49908 |
| bw3 | 53468 | fields | 53468 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | bw3 |
|---|---|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 |
| `pickup_range_factor` | `float` | 0xc268 | 0xd054 |
| `pickup_seed` | `int` | 0xc26c | 0xd058 |
| `pickup_scan_timer` | `float` | 0xc270 | 0xd05c |
| `pickup_approach_progress` | `float` | 0xc274 | 0xd060 |
| `pickup_target` | `CDemonActor*` | 0xc278 | 0xd064 |
| `object_shape_class` | `int` | 0xc27c | 0xd068 |
| `target_door` | `CDoor*` | 0xc280 | 0xd06c |
| `always_chase_fast` | `int` | 0xc284 | 0xd070 |
| `is_female` | `int` | 0xc288 | 0xd074 |
| `bone_indices` | `int[11]` | 0xc28c | 0xd078 |
| `part_indices` | `int[7]` | 0xc2b8 | 0xd0a4 |
| `pain_cooldown` | `float` | 0xc2d4 | 0xd0c0 |
| `bleedout_timer` | `float` | 0xc2d8 | 0xd0c4 |
| `sfx_handles` | `uint[2]` | 0xc2dc | 0xd0c8 |
| `rise_delay` | `float` | 0xc2e4 | 0xd0d0 |
| `buried_timer` | `float` | 0xc2e8 | 0xd0d4 |
| `groan_timer` | `float` | 0xc2ec |  |
| `difficulty_speed_scale` | `float` | 0xc2f0 | 0xd0d8 |
