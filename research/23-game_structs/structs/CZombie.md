# CZombie

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 49068 | fields | 49068 |
| nocturne | 48660 | fields | 48660 |
| bw1 | 50008 | fields | 50008 |
| blairwitch2 | 68584 | fields | 68584 |
| bw3 | 53580 | fields | 53580 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 | bw3 |
|---|---|---:|---:|---:|---:|---:|
| `base` | `CEnemy` | 0x0 | 0x0 | 0x0 | 0x0 | 0x0 |
| `pickup_range_factor` | `float` | 0xbebc | 0xbd24 | 0xc268 | 0x10af8 | 0xd054 |
| `pickup_seed` | `int` | 0xbec0 | 0xbd28 | 0xc26c | 0x10afc | 0xd058 |
| `pickup_scan_timer` | `float` | 0xbec4 | 0xbd2c | 0xc270 | 0x10b00 | 0xd05c |
| `pickup_approach_progress` | `float` | 0xbec8 | 0xbd30 | 0xc274 | 0x10b04 | 0xd060 |
| `pickup_target` | `CDemonActor*` | 0xbecc | 0xbd34 | 0xc278 | 0x10b08 | 0xd064 |
| `object_shape_class` | `int` | 0xbed0 | 0xbd38 | 0xc27c | 0x10b0c | 0xd068 |
| `grave_actor` | `CDemonActor*` | 0xbed4 | 0xbd3c | 0xc280 | 0x10b10 | 0xd06c |
| `target_door` | `CDoor*` | 0xbed8 | 0xbd40 | 0xc284 | 0x10b14 | 0xd070 |
| `rise_from_grave_condition` | `char[100]` | 0xbedc | 0xbd44 | 0xc288 | 0x10b18 | 0xd074 |
| `is_miner_zombie` | `int` | 0xbf40 | 0xbda8 | 0xc2ec | 0x10b7c | 0xd0d8 |
| `always_chase_fast` | `int` | 0xbf44 | 0xbdac | 0xc2f0 | 0x10b80 | 0xd0dc |
| `is_female` | `int` | 0xbf48 | 0xbdb0 | 0xc2f4 | 0x10b84 | 0xd0e0 |
| `bone_indices` | `int[11]` | 0xbf4c | 0xbdb4 | 0xc2f8 | 0x10b88 | 0xd0e8 |
| `part_indices` | `int[7]` | 0xbf78 | 0xbde0 | 0xc324 | 0x10bb4 | 0xd114 |
| `pain_cooldown` | `float` | 0xbf94 | 0xbdfc | 0xc340 | 0x10bd0 | 0xd130 |
| `bleedout_timer` | `float` | 0xbf98 | 0xbe00 | 0xc344 | 0x10bd4 | 0xd134 |
| `sfx_handles` | `uint[2]` | 0xbf9c | 0xbe04 | 0xc348 | 0x10bd8 | 0xd138 |
| `rise_delay` | `float` | 0xbfa4 | 0xbe0c | 0xc350 | 0x10be0 | 0xd144 |
| `buried_timer` | `float` | 0xbfa8 | 0xbe10 | 0xc354 | 0x10be4 | 0xd148 |
| `start_guard_dist` | `float` |  |  |  |  | 0xd0e4 |
| `zombie_variant` | `int` |  |  |  |  | 0xd140 |
