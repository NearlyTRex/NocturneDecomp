# CDoc

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw1 | 131300 | fields | 131300 |
| blairwitch2 | 156040 | fields | 156040 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw1 | blairwitch2 |
|---|---|---:|---:|
| `base` | `CHero` | 0x0 | 0x0 |
| `guns_drawn` | `int` | 0x1ffac | 0x25640 |
| `guns_drawn_blend` | `float` | 0x1ffb0 | 0x25644 |
| `frame_cleared` | `float` | 0x1ffb4 | 0x25648 |
| `aim_pitch` | `float` | 0x1ffb8 | 0x2564c |
| `aim_speed_factor` | `float` | 0x1ffbc | 0x25650 |
| `right_arm_aim` | `SArmAimData` | 0x1ffc0 | 0x25654 |
| `left_arm_aim` | `SArmAimData` | 0x1ffe0 | 0x25674 |
| `ladder_to_descend` | `CLadder*` | 0x20000 | 0x25694 |
| `weapon` | `CWeapon*` | 0x20004 | 0x25698 |
| `dual_wield_side` | `int` | 0x20008 | 0x2569c |
| `can_grab_weapon` | `int` | 0x2000c | 0x256a0 |
| `melee_attack_index` | `int` | 0x20010 | 0x256a8 |
| `interact_blend` | `float` | 0x20014 | 0x256ac |
| `goggle_sfx_handles` | `uint[2]` | 0x20018 | 0x256b0 |
| `action_timer` | `float` | 0x20020 |  |
| `turn_angle` | `float` | 0x20024 | 0x256b8 |
| `turn_blend_weight` | `float` | 0x20028 | 0x256bc |
| `turn_blend_timer` | `float` | 0x2002c | 0x256c0 |
| `turn_elapsed` | `float` | 0x20030 | 0x256c4 |
| `pending_velocity` | `CVector3f` | 0x2004c | 0x256e0 |
| `turn_motion_index` | `int` | 0x20058 | 0x256ec |
| `pickup_facing_reversed` | `int` | 0x2005c | 0x256f0 |
| `arm_recoil_blend` | `float` | 0x20060 | 0x256f4 |
| `airborne_timer` | `float` | 0x20064 | 0x256f8 |
| `carry_object_world_center` | `CVector3f` | 0x2006c | 0x25700 |
| `carry_object_bbox` | `CBoundingBox3D` | 0x20078 | 0x2570c |
| `ref_r_hand_bone_pos` | `CVector3f` | 0x20090 | 0x25724 |
| `ref_r_upperarm_bone_pos` | `CVector3f` | 0x2009c | 0x25730 |
| `grab_timer` | `float` | 0x200a8 | 0x2573c |
| `ladder_offset` | `CVector3f` | 0x200ac | 0x25740 |
| `ladder_facing_angle` | `float` | 0x200b8 | 0x2574c |
| `ladder_blend_time` | `float` | 0x200bc | 0x25750 |
| `door_align_offset` | `CVector3f` | 0x200c0 |  |
| `door_align_yaw` | `float` | 0x200cc |  |
| `door_align_timer` | `float` | 0x200d0 |  |
| `sfx_handle` | `uint` | 0x200d4 | 0x25754 |
| `quick_turn_active` | `int` | 0x200d8 |  |
| `quick_turn_angle` | `float` | 0x200dc |  |
| `fall_velocity_snapshot` | `float` | 0x200e0 | 0x257a8 |
| `action_pending` | `int` |  | 0x256a4 |
| `jump_speed` | `float` |  | 0x256fc |
| `lantern_mode` | `int` |  | 0x25758 |
| `lantern_transform` | `CMatrix3x4f` |  | 0x2575c |
| `lantern_light_position` | `CVector3f` |  | 0x25790 |
| `lantern_light_direction` | `CVector3f` |  | 0x2579c |
| `model_name` | `char[256]` |  | 0x257b0 |
| `cloth_name` | `char[256]` |  | 0x258b0 |
| `lantern_tween_pct` | `float` |  | 0x259b0 |
| `lantern_box` | `CBoxActor` |  | 0x259b4 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw1**: 0x20034+0x18, 0x20068+0x4
- **blairwitch2**: 0x256c8+0x18, 0x2578c+0x4, 0x257ac+0x4
