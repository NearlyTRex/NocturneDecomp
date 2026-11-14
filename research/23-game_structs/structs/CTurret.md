# CTurret

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 2236 | fields | 2236 |
| nocturne | 2228 | fields | 2228 |
| bw1 | 2236 | fields | 2236 |
| blairwitch2 | 2584 | fields | 2584 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CWeapon` | 0x0 | 0x0 | 0x0 | 0x0 |
| `home_orient` | `UOrientationVector` | 0x578 | 0x570 | 0x578 | 0x6d4 |
| `model` | `CKeyFramedModelInstance` | 0x584 | 0x57c | 0x584 | 0x6e0 |
| `state` | `ETurretState` | 0x700 | 0x6f8 | 0x700 | 0x85c |
| `activate_event` | `char[100]` | 0x704 | 0x6fc | 0x704 | 0x860 |
| `charge_time` | `float` | 0x768 | 0x760 | 0x768 | 0x8c4 |
| `patrol_time` | `float` | 0x76c | 0x764 | 0x76c | 0x8c8 |
| `power_down_time` | `float` | 0x770 | 0x768 | 0x770 | 0x8cc |
| `fire_delay_time` | `float` | 0x774 | 0x76c | 0x774 | 0x8d0 |
| `rotate_deg_per_sec` | `float` | 0x778 | 0x770 | 0x778 | 0x8d4 |
| `timer` | `float` | 0x77c | 0x774 | 0x77c | 0x8d8 |
| `guard_zone_box_trigger` | `CDemonActor*` | 0x780 | 0x778 | 0x780 | 0x8dc |
| `allowed_victim_types` | `char[200]` | 0x784 | 0x77c | 0x784 | 0x8e0 |
| `patrol_target` | `CVector3f` | 0x84c | 0x844 | 0x84c | 0x9a8 |
| `can_manual_aim` | `int` | 0x858 | 0x850 | 0x858 | 0x9b4 |
| `user` | `CDemonActor*` | 0x85c | 0x854 | 0x85c | 0x9b8 |
| `barrel_tip_pos` | `CVector3f` | 0x860 | 0x858 | 0x860 | 0x9bc |
| `fire_sound_timer` | `float` | 0x86c | 0x864 | 0x86c | 0x9c8 |
| `dead` | `char[64]` | 0x870 | 0x868 | 0x870 | 0x9cc |
| `fire_sound_frames` | `int` | 0x8b0 | 0x8a8 | 0x8b0 | 0xa0c |
| `sfx_handles` | `uint[2]` | 0x8b4 | 0x8ac | 0x8b4 | 0xa10 |
