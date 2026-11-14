# CStranger

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| nocedit | 130672 | fields | 130672 |
| nocturne | 130264 | fields | 130264 |
| bw1 | 131652 | fields | 131652 |
| blairwitch2 | 153820 | fields | 153820 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | nocedit | nocturne | bw1 | blairwitch2 |
|---|---|---:|---:|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 | 0x0 | 0x0 |
| `guns_drawn` | `int` | 0x1fbd4 | 0x1fa3c | 0x1ffac | 0x25640 |
| `guns_drawn_blend` | `float` | 0x1fbd8 | 0x1fa40 | 0x1ffb0 | 0x25644 |
| `frame_cleared` | `float` | 0x1fbdc | 0x1fa44 | 0x1ffb4 | 0x25648 |
| `aim_pitch` | `float` | 0x1fbe0 | 0x1fa48 | 0x1ffb8 | 0x2564c |
| `aim_speed_factor` | `float` | 0x1fbe4 | 0x1fa4c | 0x1ffbc | 0x25650 |
| `right_arm_aim` | `SArmAimData` | 0x1fbe8 | 0x1fa50 | 0x1ffc0 | 0x25654 |
| `left_arm_aim` | `SArmAimData` | 0x1fc08 | 0x1fa70 | 0x1ffe0 | 0x25674 |
| `ladder_to_descend` | `CLadder*` | 0x1fc28 | 0x1fa90 | 0x20000 | 0x25694 |
| `weapon` | `CWeapon*` | 0x1fc2c | 0x1fa94 | 0x20004 | 0x25698 |
| `dual_wield_side` | `int` | 0x1fc30 | 0x1fa98 | 0x20008 | 0x2569c |
| `can_grab_weapon` | `int` | 0x1fc34 | 0x1fa9c | 0x2000c | 0x256a0 |
| `action_pending` | `int` | 0x1fc38 | 0x1faa0 |  | 0x256a4 |
| `melee_attack_index` | `int` | 0x1fc3c | 0x1faa4 | 0x20010 | 0x256a8 |
| `action_timer` | `float` | 0x1fc40 | 0x1faa8 | 0x20014 | 0x256ac |
| `interact_blend` | `float` | 0x1fc44 | 0x1faac | 0x20018 | 0x256b0 |
| `goggle_sfx_handles` | `uint[2]` | 0x1fc48 | 0x1fab0 | 0x2001c | 0x256b4 |
| `turn_angle` | `float` | 0x1fc50 | 0x1fab8 | 0x20024 | 0x256bc |
| `turn_blend_weight` | `float` | 0x1fc54 | 0x1fabc | 0x20028 | 0x256c0 |
| `turn_blend_timer` | `float` | 0x1fc58 | 0x1fac0 | 0x2002c | 0x256c4 |
| `turn_elapsed` | `float` | 0x1fc5c | 0x1fac4 | 0x20030 | 0x256c8 |
| `dead` | `char[24]` | 0x1fc60 | 0x1fac8 | 0x20034 | 0x256cc |
| `pending_velocity` | `CVector3f` | 0x1fc78 | 0x1fae0 | 0x2004c | 0x256e4 |
| `turn_motion_index` | `int` | 0x1fc84 | 0x1faec | 0x20058 | 0x256f0 |
| `pickup_facing_reversed` | `int` | 0x1fc88 | 0x1faf0 | 0x2005c | 0x256f4 |
| `arm_recoil_blend` | `float` | 0x1fc8c | 0x1faf4 | 0x20060 | 0x256f8 |
| `airborne_timer` | `float` | 0x1fc90 | 0x1faf8 | 0x20064 | 0x256fc |
| `jump_speed` | `float` | 0x1fc94 | 0x1fafc | 0x20068 | 0x25700 |
| `carry_object_world_center` | `CVector3f` | 0x1fc98 | 0x1fb00 | 0x2006c | 0x25704 |
| `carry_object_bbox` | `CBoundingBox3D` | 0x1fca4 | 0x1fb0c | 0x20078 | 0x25710 |
| `ref_r_hand_bone_pos` | `CVector3f` | 0x1fcbc | 0x1fb24 | 0x20090 | 0x25728 |
| `ref_r_upperarm_bone_pos` | `CVector3f` | 0x1fcc8 | 0x1fb30 | 0x2009c | 0x25734 |
| `grab_timer` | `float` | 0x1fcd4 | 0x1fb3c | 0x200a8 | 0x25740 |
| `model` | `CKeyFramedModelInstance` | 0x1fcd8 | 0x1fb40 | 0x200ac | 0x25744 |
| `ladder_offset` | `CVector3f` | 0x1fe54 | 0x1fcbc | 0x20228 | 0x258c0 |
| `ladder_facing_angle` | `float` | 0x1fe60 | 0x1fcc8 | 0x20234 | 0x258cc |
| `ladder_blend_time` | `float` | 0x1fe64 | 0x1fccc | 0x20238 | 0x258d0 |
| `sfx_handle` | `uint` | 0x1fe68 | 0x1fcd0 | 0x2023c | 0x258d4 |
| `fall_velocity_snapshot` | `float` | 0x1fe6c | 0x1fcd4 | 0x20240 | 0x258d8 |
