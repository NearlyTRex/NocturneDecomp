// Name: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004b0a90
// Address: 004b0a90
// Address Range: [[004b0a90, 004b0e75]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004b0a90(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004b0a90(CGabriella *this_ptr)

{
  CLocation *input_world_point;
  CLadder *this_ptr_00;
  byte bVar1;
  float afStackY_10e0 [1011];
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  float local_d4;
  float local_d0 [2];
  CVector3f local_c8;
  CVector3f local_bc;
  float local_b0;
  float local_ac [2];
  CVector3f local_a4;
  float local_98;
  float local_94 [4];
  float local_84;
  CVector3f local_80;
  float local_74;
  float local_70 [5];
  CVector3f local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  CVector3f local_38;
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
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                             g_CLadderClassInfo.name_hash);
    local_2c = this_ptr_00;
    if (this_ptr_00 != (CLadder *)0x0) {
      input_world_point = &(this_ptr_00->base).location;
      local_b0 = ((CVector3f *)&local_1c->x)->x - (input_world_point->position).x;
      local_ac[0] = local_1c->y - (this_ptr_00->base).location.position.y;
      local_ac[1] = local_1c->z - (this_ptr_00->base).location.position.z;
      local_98 = local_b0;
      local_94[(uint)bVar1 * -2] = local_ac[(uint)bVar1 * -2];
      local_94[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
           local_ac[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
      if ((ABS(local_94[0]) <= (float)5) &&
         (local_94[0] = 0.0,
         SQRT(local_94[1] * local_94[1] + local_98 * local_98) <= (float)3)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                  ((CDemonActor *)this_ptr,&input_world_point->position,&local_80);
        local_f8.x = local_80.x;
        *(uint *)((int)&local_f8 + (uint)bVar1 * -8 + 4) =
             *(uint *)((int)&local_80 + (uint)bVar1 * -8 + 4);
        *(uint *)((int)&local_f8 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
             *(uint *)((int)&local_80 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
        if ((ABS(local_f8.x) <= (float)0.29999999999999999) &&
           (((float)0.5 <= local_f8.z && ((double)local_f8.z <= 3))))
        {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_f8,&local_38);
          local_d4 = local_38.x;
          local_d0[(uint)bVar1 * -2] = *(float *)((int)&local_38 + (uint)bVar1 * -8 + 4);
          local_d0[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
               *(float *)((int)&local_38 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
          local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_d0[0]);
          if (ABS(local_18) <= (float)0.17453292519444399) {
            local_28 = 0;
            core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408de0
                      ((CDemonActor *)this_ptr_00,local_1c,&local_5c);
            local_ec.x = local_5c.x;
            *(uint *)((int)&local_ec + (uint)bVar1 * -8 + 4) =
                 *(uint *)((int)&local_5c + (uint)bVar1 * -8 + 4);
            *(uint *)((int)&local_ec + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
                 *(uint *)((int)&local_5c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
            if (&local_f8 != &local_ec) {
              local_f8.x = local_ec.x;
              local_f8.y = local_ec.y;
              local_f8.z = local_ec.z;
            }
            if (local_f8.z < 0.0) {
              local_28 = 1;
              local_f8.z = -local_f8.z;
            }
            if (((ABS(local_f8.x) <= (float)0.29999999999999999) &&
                ((float)0.5 <= local_f8.z)) &&
               ((double)local_f8.z <= 3)) {
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&local_f8,&local_44);
              local_50 = local_44.x;
              local_4c[(uint)bVar1 * -2] = *(float *)((int)&local_44 + (uint)bVar1 * -8 + 4);
              local_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
                   *(float *)((int)&local_44 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
              local_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(local_4c[0]);
              if (ABS(local_18) <= (float)0.17453292519444399) {
                (this_ptr->base).ladder_to_climb = local_2c;
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          (&(this_ptr->base).base.model.base,0x16,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                local_c8.z = 2.0;
                local_c8.x = 0.0;
                local_c8.y = 0.0;
                if (local_28 != 0) {
                  local_c8.z = -2.0;
                }
                core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
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
                local_bc.x = local_94[2];
                *(float *)((int)&local_bc + (uint)bVar1 * -8 + 4) = local_94[(uint)bVar1 * -2 + 3];
                *(float *)((int)&local_bc + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
                     local_94[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0
                          (&local_bc,&local_e0);
                local_70[2] = local_e0.x;
                local_70[(uint)bVar1 * -2 + 3] = *(float *)((int)&local_e0 + (uint)bVar1 * -8 + 4);
                local_70[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 4] =
                     *(float *)((int)&local_e0 + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8);
                (this_ptr->base).base.base.orient.vec.y = local_70[3];
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
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
