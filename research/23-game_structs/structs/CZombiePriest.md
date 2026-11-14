# CZombiePriest

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 53524 | fields | 53524 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `ai_idle_counter` | `int` | 0xd054 |
| `idle_timer` | `float` | 0xd058 |
| `weapon_approach_timer` | `float` | 0xd05c |
| `target_weapon` | `CDemonActor*` | 0xd060 |
| `post_mode` | `int` | 0xd064 |
| `our_post` | `CDemonActor*` | 0xd068 |
| `hold_pos_flag` | `int` | 0xd06c |
| `hold_pos_condition` | `char[100]` | 0xd070 |
| `death_sfx_handle` | `uint` | 0xd0d4 |
| `death_sound_played` | `int` | 0xd0d8 |
| `sfx_handle` | `uint` | 0xd0dc |
| `part_indices` | `int[11]` | 0xd0e0 |
| `firing_blend` | `float` | 0xd10c |
| `firing_cooldown` | `float` | 0xd110 |
