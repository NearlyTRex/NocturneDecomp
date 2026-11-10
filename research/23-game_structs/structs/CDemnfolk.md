# CDemnfolk

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 50032 | fields | 50032 |
| bw3 | 53580 | fields | 53580 |

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
| `grave_actor` | `CDemonActor*` | 0xc280 | 0xd06c |
| `target_door` | `CDoor*` | 0xc284 | 0xd070 |
| `rise_from_grave_condition` | `char[100]` | 0xc288 | 0xd074 |
| `is_miner_zombie` | `int` | 0xc2ec | 0xd0d8 |
| `is_indoor_demon` | `int` | 0xc2f0 | 0xd0dc |
| `always_chase_fast` | `int` | 0xc2f4 | 0xd0e0 |
| `is_female` | `int` | 0xc2f8 | 0xd0e4 |
| `bone_indices` | `int[11]` | 0xc2fc | 0xd0e8 |
| `part_indices` | `int[7]` | 0xc328 | 0xd114 |
| `pain_cooldown` | `float` | 0xc344 | 0xd130 |
| `bleedout_timer` | `float` | 0xc348 | 0xd134 |
| `sfx_handles` | `uint[4]` | 0xc34c | 0xd138 |
| `rise_delay` | `float` | 0xc35c | 0xd140 |
| `buried_timer` | `float` | 0xc360 | 0xd144 |
| `unknown_0xc364` | `int` | 0xc364 |  |
| `difficulty_speed_scale` | `float` | 0xc368 | 0xd148 |
| `voice_prefix` | `char[4]` | 0xc36c |  |
