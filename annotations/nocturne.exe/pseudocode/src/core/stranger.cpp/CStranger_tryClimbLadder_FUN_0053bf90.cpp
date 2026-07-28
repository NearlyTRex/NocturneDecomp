// Name: core_stranger.cpp_CStranger_tryClimbLadder_FUN_0053bf90
// Address: 0053bf90
// Address Range: [[0053bf90, 0053c3a2]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_0053bf90(CStranger *this_ptr)

{
  byte *puVar1;
  CLadder *this_ptr_00;
  CVector3f *pCVar2;
  int iVar3;
  float10 fVar4;
  CBoundingBox3D local_e0;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  byte auStack_80 [12];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  local_14 = (float)core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0(this_ptr,0);
  if ((((float)0.98999999999999999 <= local_14) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_20 = &(this_ptr->base).base.base.location.position;
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14cd6c) <= local_1c) break;
      this_ptr_00 = (CLadder *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)(0x01E57284 + local_18 + 0x14cd70),
                               g_CLadderActorType_01cc30e8.name_hash);
      if ((this_ptr_00 != (CLadder *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (this_ptr_00->base).location.position.y) <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  ((CDemonActor *)this_ptr_00,&local_a4,local_20);
        if ((ABS(local_a4.z) <= (float)4) && (0.0 <= local_a4.z)) {
          (*((this_ptr_00->base).vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr_00,&local_e0);
          if (local_e0.max.x < local_a4.x) {
            if (local_e0.max.x + 1.0 < local_a4.x) goto LAB_0053c018;
            local_a4.x = local_e0.max.x;
          }
          if (local_a4.x < local_e0.min.x) {
            if (local_a4.x < local_e0.min.x + (float)-1) goto LAB_0053c018;
            local_a4.x = local_e0.min.x;
          }
          fStack_bc = local_e0.min.x + local_e0.max.x;
          fStack_c8 = fStack_bc * 0.5f;
          fStack_b4 = local_e0.min.z + local_e0.max.z;
          fStack_b8 = local_e0.min.y + local_e0.max.y;
          fStack_c0 = fStack_b4 * 0.5f;
          fStack_c4 = fStack_b8 * 0.5f;
          local_a4.z = fStack_c0;
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr_00,&CStack_8c,&local_a4);
          if (&local_a4 != pCVar2) {
            local_a4.x = pCVar2->x;
            local_a4.y = pCVar2->y;
            local_a4.z = pCVar2->z;
          }
          fStack_b0 = (this_ptr->base).base.base.orient_matrix.m[0].z;
          fStack_ac = (this_ptr->base).base.base.orient_matrix.m[1].z;
          fStack_a8 = (this_ptr->base).base.base.orient_matrix.m[2].z;
          fStack_44 = (this_ptr_00->base).orient_matrix.m[0].z;
          fStack_40 = (this_ptr_00->base).orient_matrix.m[1].z;
          fStack_3c = (this_ptr_00->base).orient_matrix.m[2].z;
          fVar4 = (float10)fcos((float10)0.261799387791667);
          fStack_38 = fStack_b0;
          fStack_34 = fStack_ac;
          fStack_30 = fStack_a8;
          fStack_2c = fStack_44;
          fStack_28 = fStack_40;
          fStack_24 = fStack_3c;
          if (fVar4 <= ABS((float10)fStack_a8 * (float10)fStack_3c +
                           (float10)fStack_b0 * (float10)fStack_44 +
                           (float10)fStack_ac * (float10)fStack_40)) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               ((CDemonActor *)this_ptr,&CStack_98,
                                &(this_ptr_00->base).location.position);
            if (0.0 < pCVar2->z) {
              (this_ptr->base).ladder_to_climb = this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,0x2a,1);
              (this_ptr->base).player_input.action_state.fire = 0;
              CStack_5c.z = 2.0;
              CStack_5c.x = 0.0;
              CStack_5c.y = 0.0;
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)this_ptr_00,&CStack_50,&CStack_5c);
              fStack_68 = pCVar2->x - (this_ptr->base).base.base.location.position.x;
              fStack_64 = pCVar2->y - (this_ptr->base).base.base.location.position.y;
              fStack_60 = pCVar2->z - (this_ptr->base).base.base.location.position.z;
              if (&this_ptr->ladder_offset != (CVector3f *)&fStack_68) {
                (this_ptr->ladder_offset).x = fStack_68;
                (this_ptr->ladder_offset).y = fStack_64;
                (this_ptr->ladder_offset).z = fStack_60;
              }
              fStack_74 = local_a4.x - (this_ptr->base).base.base.location.position.x;
              fStack_70 = local_a4.y - (this_ptr->base).base.base.location.position.y;
              fStack_6c = local_a4.z - (this_ptr->base).base.base.location.position.z;
              iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                (auStack_80,&fStack_74);
              puVar1 = PTR_DAT_005ad350;
              this_ptr->ladder_facing_angle = *(float *)(iVar3 + 4);
              this_ptr->ladder_blend_time = 1.0;
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (puVar1,"Climbing ladder %s\n",this_ptr_00);
              return 1;
            }
          }
        }
      }
LAB_0053c018:
      local_1c = local_1c + 1;
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
