// Name: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004c99e0
// Address: 004c99e0
// Address Range: [[004c99e0, 004c9dc5]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(CGabriella *this_ptr)

{
  CLocation *input_world_point;
  CLadder *this_ptr_00;
  byte bVar1;
  float afStackY_10e0 [1011];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  uint local_d4;
  float local_d0;
  CVector3f local_c8;
  float local_bc;
  float afStack_b8 [4];
  float local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94 [4];
  float local_84;
  CVector3f local_80;
  float local_74;
  float local_70 [5];
  CVector3f local_5c;
  uint local_50;
  float local_4c [5];
  uint local_38;
  CLadder *local_2c;
  int local_28;
  int local_24;
  int local_20;
  CVector3f *local_1c;
  float local_18;
  
  bVar1 = 0;
  local_1c = &(this_ptr->base).base.base.location.position;
  local_24 = 0;
  local_20 = 0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  do {
    if (g_CDemonSetPtr->actor_count <= local_24) {
      return 0;
    }
    this_ptr_00 = (CLadder *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                             g_CLadderClassInfo.name_hash);
    local_2c = this_ptr_00;
    if (this_ptr_00 != (CLadder *)0x0) {
      input_world_point = &(this_ptr_00->base).location;
      afStack_b8[2] = ((CVector3f *)&local_1c->x)->x - (input_world_point->position).x;
      afStack_b8[3] = local_1c->y - (this_ptr_00->base).location.position.y;
      local_a8 = local_1c->z - (this_ptr_00->base).location.position.z;
      local_98 = afStack_b8[2];
      local_94[(uint)bVar1 * -2] = afStack_b8[(uint)bVar1 * -2 + 3];
      local_94[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
           afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
      if ((ABS(local_94[0]) <= (float)_DAT_005e113c) &&
         (local_94[0] = 0.0,
         SQRT(local_94[1] * local_94[1] + local_98 * local_98) <= (float)_DAT_005e1144)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                  ((CDemonActor *)this_ptr,&input_world_point->position,&local_80);
        local_f8 = local_80.x;
        (&stack0xffffff0c)[(uint)bVar1 * 0xfffffffe] =
             (float)*(uint *)((int)&local_80 + (uint)bVar1 * -8 + 4);
        *(uint *)((int)&stack0xffffff10 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
             *(uint *)((int)&local_80 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
        if ((ABS(local_f8) <= (float)_DAT_005e114c) &&
           (((float)_DAT_005e1154 <= local_f0 && ((double)local_f0 <= _DAT_005e1144)))) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff08);
          local_d4 = local_38;
          afStack_b8[(uint)bVar1 * -2 + -6] = local_4c[(uint)bVar1 * -2 + 6];
          afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -5] =
               local_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 7];
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_d0);
          if (ABS(local_18) <= (float)_DAT_005e115c) {
            local_28 = 0;
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
                      ((CDemonActor *)this_ptr_00,local_1c,&local_5c);
            local_ec = local_5c.x;
            (&stack0xffffff18)[(uint)bVar1 * 0xfffffffe] =
                 (float)*(uint *)((int)&local_5c + (uint)bVar1 * -8 + 4);
            *(uint *)((int)&stack0xffffff1c + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
                 *(uint *)((int)&local_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
            if (&stack0xffffff08 != &stack0xffffff14) {
              local_f8 = local_ec;
              local_f4 = local_e8;
              local_f0 = local_e4;
            }
            if (local_f0 < 0.0) {
              local_28 = 1;
              local_f0 = -local_f0;
            }
            if (((ABS(local_f8) <= (float)_DAT_005e114c) && ((float)_DAT_005e1154 <= local_f0)) &&
               ((double)local_f0 <= _DAT_005e1144)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&stack0xffffff08);
              local_50 = local_4c[2];
              local_4c[(uint)bVar1 * -2] = local_4c[(uint)bVar1 * -2 + 3];
              local_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
                   local_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
              local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(local_4c[0]);
              if (ABS(local_18) <= (float)_DAT_005e115c) {
                (this_ptr->base).ladder_to_climb = local_2c;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          (&(this_ptr->base).base.model.base,0x16,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                local_c8.z = 2.0;
                local_c8.x = 0.0;
                local_c8.y = 0.0;
                if (local_28 != 0) {
                  local_c8.z = -2.0;
                }
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                          (&local_2c->base,&local_c8,&local_a4);
                local_74 = local_a4.x;
                local_70[(uint)bVar1 * -2] = *(float *)((int)&local_a4 + (uint)bVar1 * -8 + 4);
                local_70[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
                     *(float *)((int)&local_a4 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
                (this_ptr->base).base.base.location.position.x = local_74;
                (this_ptr->base).base.base.location.position.y = local_70[0];
                (this_ptr->base).base.base.location.position.z = local_70[1];
                local_94[2] = (local_2c->base).location.position.x -
                              (this_ptr->base).base.base.location.position.x;
                local_94[3] = (local_2c->base).location.position.y -
                              (this_ptr->base).base.base.location.position.y;
                local_84 = (local_2c->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
                local_bc = local_94[2];
                afStack_b8[(uint)bVar1 * -2] = local_94[(uint)bVar1 * -2 + 3];
                afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
                     local_94[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(&local_bc);
                local_70[2] = (float)local_e0;
                local_70[(uint)bVar1 * -2 + 3] = *(float *)(&stack0xffffff24 + (uint)bVar1 * -8);
                local_70[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
                     afStack_b8[(uint)bVar1 * -2 + (uint)bVar1 * -2 + -8];
                (this_ptr->base).base.base.orient.vec.y = local_70[3];
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
                          ((CDemonActor *)this_ptr);
                return 1;
              }
            }
          }
        }
      }
    }
    local_24 = local_24 + 1;
    local_20 = local_20 + 4;
  } while( true );
}
