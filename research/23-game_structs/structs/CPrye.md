# CPrye

Category `/Nocturne/Class/Game`.

| build | size | state | RTTI size |
|---|---:|---|---:|
| bw3 | 134404 | fields | 134404 |

## Fields

Offsets in hex; blank where the build's layout does not have the field.

| field | type | bw3 |
|---|---|---:|
| `base` | `CHero` | 0x0 |
| `guns_drawn` | `int` | 0x20bcc |
| `guns_drawn_blend` | `float` | 0x20bd0 |
| `frame_cleared` | `float` | 0x20bd4 |
| `aim_pitch` | `float` | 0x20bd8 |
| `aim_speed_factor` | `float` | 0x20bdc |
| `right_arm_aim` | `SArmAimData` | 0x20be0 |
| `left_arm_aim` | `SArmAimData` | 0x20c00 |
| `ladder_to_descend` | `CLadder*` | 0x20c20 |
| `weapon` | `CWeapon*` | 0x20c24 |
| `dual_wield_side` | `int` | 0x20c28 |
| `can_grab_weapon` | `int` | 0x20c2c |
| `melee_attack_index` | `int` | 0x20c30 |
| `interact_blend` | `float` | 0x20c34 |
| `goggle_sfx_handles` | `uint[2]` | 0x20c38 |
| `action_timer` | `float` | 0x20c40 |
| `turn_angle` | `float` | 0x20c44 |
| `turn_blend_weight` | `float` | 0x20c48 |
| `turn_blend_timer` | `float` | 0x20c4c |
| `turn_elapsed` | `float` | 0x20c50 |
| `pending_velocity` | `CVector3f` | 0x20c6c |
| `turn_motion_index` | `int` | 0x20c78 |
| `pickup_facing_reversed` | `int` | 0x20c7c |
| `arm_recoil_blend` | `float` | 0x20c80 |
| `airborne_timer` | `float` | 0x20c84 |
| `carry_object_world_center` | `CVector3f` | 0x20c8c |
| `carry_object_bbox` | `CBoundingBox3D` | 0x20c98 |
| `ref_r_hand_bone_pos` | `CVector3f` | 0x20cb0 |
| `ref_r_upperarm_bone_pos` | `CVector3f` | 0x20cbc |
| `grab_timer` | `float` | 0x20cc8 |
| `ladder_offset` | `CVector3f` | 0x20ccc |
| `ladder_facing_angle` | `float` | 0x20cd8 |
| `ladder_blend_time` | `float` | 0x20cdc |
| `door_align_offset` | `CVector3f` | 0x20ce0 |
| `door_align_yaw` | `float` | 0x20cec |
| `door_align_timer` | `float` | 0x20cf0 |
| `sfx_handle` | `uint` | 0x20cf4 |
| `quick_turn_active` | `int` | 0x20cf8 |
| `quick_turn_angle` | `float` | 0x20cfc |
| `fall_velocity_snapshot` | `float` | 0x20d00 |

## Undefined bytes

Ranges a build's layout leaves undefined: members it added, or ones not yet placed.

- **bw3**: 0x20c54+0x18, 0x20c88+0x4
