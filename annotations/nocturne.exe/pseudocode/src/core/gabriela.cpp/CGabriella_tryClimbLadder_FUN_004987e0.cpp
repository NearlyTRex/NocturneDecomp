// Name: core_gabriela.cpp_CGabriella_tryClimbLadder_FUN_004987e0
// Address: 004987e0
// Address Range: [[004987e0, 00498ae3]]
// Convention: __cdecl
// Signature: int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(CGabriella *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004987e0(CGabriella *this_ptr)

{
  CLocation *input_world_point;
  CLocation *input_world_point_00;
  CLadder *this_ptr_00;
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_90;
  CVector3f local_84;
  CVector3f local_78;
  CVector3f local_6c;
  float local_60;
  float local_5c;
  float local_58;
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  byte local_30 [12];
  CLadder *local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  iVar3 = 0;
  input_world_point = &(this_ptr->base).base.base.location;
  local_1c = 0;
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  do {
    if (*(int *)(0x01E57284 + 0x14cd6c) <= iVar3) {
      return 0;
    }
    this_ptr_00 = (CLadder *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)(0x01E57284 + local_1c + 0x14cd70),
                             g_CLadderActorType_01cc30e8.name_hash);
    local_24 = this_ptr_00;
    if (this_ptr_00 != (CLadder *)0x0) {
      input_world_point_00 = &(this_ptr_00->base).location;
      local_60 = (input_world_point->position).x - (input_world_point_00->position).x;
      local_5c = (this_ptr->base).base.base.location.position.y -
                 (this_ptr_00->base).location.position.y;
      local_58 = (this_ptr->base).base.base.location.position.z -
                 (this_ptr_00->base).location.position.z;
      if ((ABS(local_5c) <= (float)5) &&
         (local_5c = 0.0, SQRT(local_58 * local_58 + local_60 * local_60) <= (float)3)
         ) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  ((CDemonActor *)this_ptr,&local_90,&input_world_point_00->position);
        if ((ABS(local_90.x) <= (float)0.29999999999999999) &&
           (((float)0.5 <= local_90.z && ((double)local_90.z <= 3)))) {
          iVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                            (local_54,&local_90);
          local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (*(uint *)(iVar1 + 4));
          if (ABS(local_18) <= (float)0.17453292519444399) {
            local_20 = 0;
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               ((CDemonActor *)this_ptr_00,&local_78,&input_world_point->position);
            if (&local_90 != pCVar2) {
              local_90.x = pCVar2->x;
              local_90.y = pCVar2->y;
              local_90.z = pCVar2->z;
            }
            if (local_90.z < 0.0) {
              local_20 = 1;
              local_90.z = -local_90.z;
            }
            if (((ABS(local_90.x) <= (float)0.29999999999999999) &&
                ((float)0.5 <= local_90.z)) && ((double)local_90.z <= 3))
            {
              iVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (local_30,&local_90);
              local_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                          (*(uint *)(iVar1 + 4));
              if (ABS(local_18) <= (float)0.17453292519444399) {
                (this_ptr->base).ladder_to_climb = local_24;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (&(this_ptr->base).base.model.motion_controller,0x16,1);
                (this_ptr->base).player_input.action_state.fire = 0;
                local_84.x = 0.0;
                local_84.y = 0.0;
                local_84.z = 2.0;
                if (local_20 != 0) {
                  local_84.z = -2.0;
                }
                pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                   (&local_24->base,&local_6c,&local_84);
                (this_ptr->base).base.base.location.position.x = pCVar2->x;
                (this_ptr->base).base.base.location.position.y = pCVar2->y;
                (this_ptr->base).base.base.location.position.z = pCVar2->z;
                local_48 = (local_24->base).location.position.x -
                           (this_ptr->base).base.base.location.position.x;
                local_44 = (local_24->base).location.position.y -
                           (this_ptr->base).base.base.location.position.y;
                local_40 = (local_24->base).location.position.z -
                           (this_ptr->base).base.base.location.position.z;
                iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                  (local_3c,&local_48);
                (this_ptr->base).base.base.orient.vec.y = *(float *)(iVar3 + 4);
                core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000
                          ((CDemonActor *)this_ptr);
                return 1;
              }
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}
