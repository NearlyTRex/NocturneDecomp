# CBasicEnemy

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| blairwitch2 | 71760 | fields | — |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | blairwitch2 |
|---|---|---:|
| `base` | `CEnemy` | 0x0 |
| `state_machine` | `SStateMachine` | 0x10af8 |
| `is_grabbable` | `int` | 0x11344 |
| `can_burn` | `int` | 0x11348 |
| `anim_speed_scale` | `float` | 0x1134c |
| `move_velocity` | `CVector3f` | 0x11354 |
| `initial_location` | `CLocation` | 0x11360 |
| `alert_distance` | `float` | 0x11370 |
| `giveup_distance` | `float` | 0x11374 |
| `mad_timer` | `float` | 0x11378 |
| `head_bone` | `int` | 0x1137c |
| `walk_state_3_motion` | `int` | 0x11380 |
| `idle_motion` | `int` | 0x11384 |
| `walk_motion` | `int` | 0x11388 |
| `run_motion` | `int` | 0x1138c |
| `animation_state` | `int` | 0x11390 |
| `attack_range` | `float` | 0x11394 |
| `run_distance` | `float` | 0x11398 |
| `unused_113a0` | `float` | 0x113a0 |
| `patrol_goal` | `CDemonActor*` | 0x113a4 |
| `patrol_next` | `CDemonActor*` | 0x113a8 |
| `patrol_direction` | `int` | 0x113ac |
| `skeleton` | `CSkeleton*` | 0x113b0 |
| `fade_direction` | `int` | 0x113b4 |
| `fade_state` | `int` | 0x113b8 |
| `fade_start` | `float` | 0x113bc |
| `fade_end` | `float` | 0x113c0 |
| `fade_val` | `float` | 0x113c4 |
| `fade_time` | `float` | 0x113c8 |
| `fade_timer` | `float` | 0x113cc |
| `flinch_active` | `int` | 0x113d0 |
| `flinch_motion_name` | `char[32]` | 0x113d4 |
| `flinch_motion_index` | `int` | 0x113f4 |
| `flinch_frame_count` | `int` | 0x113f8 |
| `flinch_bone` | `int` | 0x113fc |
| `flinch_duration` | `float` | 0x11400 |
| `flinch_timer` | `float` | 0x11404 |
| `unused_1140c` | `float[3]` | 0x1140c |
| `can_flinch` | `int` | 0x11418 |
| `character_processed` | `int` | 0x1141c |
| `unused_11420` | `int` | 0x11420 |
| `walk_direction` | `CVector3f` | 0x11424 |
| `burn_timer` | `float` | 0x11430 |
| `burn_direction` | `CVector3f` | 0x11434 |
| `burn_damage_rate` | `float` | 0x11440 |
| `hit_sound` | `char[255]` | 0x11444 |
| `death_sound` | `char[255]` | 0x11543 |
| `bodyfall_sound` | `char[255]` | 0x11642 |
| `idle_sound` | `char[255]` | 0x11741 |
| `idle_sound_timer` | `float` | 0x11840 |
| `idle_sound_interval` | `float` | 0x11844 |
| `idle_sfx_handle` | `uint` | 0x11848 |
| `hit_sfx_handle` | `uint` | 0x1184c |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **blairwitch2**: 0x11350+0x4, 0x1139c+0x4, 0x11408+0x4
