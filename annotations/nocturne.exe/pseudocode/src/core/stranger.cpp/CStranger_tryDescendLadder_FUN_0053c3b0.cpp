// Name: core_stranger.cpp_CStranger_tryDescendLadder_FUN_0053c3b0
// Address: 0053c3b0
// Address Range: [[0053c3b0, 0053c7f6]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_0053c3b0(CStranger *this_ptr)

{
  double dVar1;
  float fVar2;
  CLadder *this_ptr_00;
  CVector3f *pCVar3;
  float10 fVar4;
  uint uStack_f8;
  uint uStack_f4;
  CBoundingBox3D local_e8;
  CVector3f local_d0;
  CVector3f CStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *local_28;
  float fStack_24;
  int local_20;
  int local_1c;
  float local_18;
  
  this_ptr->ladder_to_descend = (CLadder *)0x0;
  local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042a9d0
                       ((CCharacter *)this_ptr,0);
  if ((((float)0.98999999999999999 <= local_18) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_28 = &(this_ptr->base).base.base.location.position;
    local_20 = 0;
    for (local_1c = 0; local_1c < g_CDemonSet_PTR_005be368->actor_count; local_1c = local_1c + 1) {
      this_ptr_00 = (CLadder *)
                    core_actor_cpp_castToClassHash_FUN_0040d890
                              (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + local_20),
                               g_CLadderActorType_01cc30e8.name_hash);
      if ((this_ptr_00 != (CLadder *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              ((this_ptr_00->base).location.position.y + (this_ptr_00->ladder_size).y)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                  ((CDemonActor *)this_ptr_00,&local_d0,local_28);
        if ((ABS(local_d0.z) <= (float)4) && (local_d0.z <= 0.0)) {
          (*((this_ptr_00->base).vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr_00,&local_e8);
          if (local_e8.max.x < local_d0.x) {
            if (local_e8.max.x + 1.0 < local_d0.x) goto LAB_0053c438;
            local_d0.x = local_e8.max.x;
          }
          if (local_d0.x < local_e8.min.x) {
            if (local_d0.x < local_e8.min.x + (float)-1) goto LAB_0053c438;
            local_d0.x = local_e8.min.x;
          }
          fStack_7c = local_e8.min.x + local_e8.max.x;
          fStack_94 = fStack_7c * 0.5f;
          fStack_74 = local_e8.min.z + local_e8.max.z;
          fStack_78 = local_e8.min.y + local_e8.max.y;
          local_d0.z = fStack_74 * 0.5f;
          fStack_90 = fStack_78 * 0.5f;
          fStack_8c = local_d0.z;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             ((CDemonActor *)this_ptr_00,&CStack_88,&local_d0);
          if (&local_d0 != pCVar3) {
            local_d0.x = pCVar3->x;
            local_d0.y = pCVar3->y;
            local_d0.z = pCVar3->z;
          }
          local_d0.y = local_d0.y + (this_ptr_00->ladder_size).y;
          fStack_ac = (this_ptr->base).base.base.orient_matrix.m[0].z;
          fStack_a8 = (this_ptr->base).base.base.orient_matrix.m[1].z;
          fStack_a4 = (this_ptr->base).base.base.orient_matrix.m[2].z;
          fStack_b8 = (this_ptr_00->base).orient_matrix.m[0].z;
          fStack_b4 = (this_ptr_00->base).orient_matrix.m[1].z;
          fStack_b0 = (this_ptr_00->base).orient_matrix.m[2].z;
          fVar4 = (float10)fcos((float10)0.261799387791667);
          fVar2 = ABS(fStack_a4 * fStack_b0 + fStack_ac * fStack_b8 + fStack_a8 * fStack_b4);
          dVar1 = (double)fVar2;
          fStack_40 = fStack_a8;
          fStack_3c = fStack_b8;
          fStack_38 = fStack_b4;
          fStack_34 = fStack_b0;
          fStack_30 = fStack_a4;
          fStack_24 = fStack_ac;
          if (fVar4 <= (float10)fVar2) {
            pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               ((CDemonActor *)this_ptr,&CStack_70,
                                &(this_ptr_00->base).location.position);
            if (0.0 < pCVar3->z) {
              uStack_f4 = (uint)((ulonglong)dVar1 >> 0x20);
              uStack_f8 = SUB84(__BITCAST_UINT64(dVar1),0);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (g_CConsole_PTR_005ad350,"Ladder dot : %f\n",uStack_f8,uStack_f4);
              this_ptr->ladder_to_descend = this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (&(this_ptr->base).base.model.motion_controller,0x2b,1);
              (this_ptr->base).player_input.action_state.fire = 0;
              CStack_a0.y = (this_ptr_00->ladder_size).y;
              CStack_a0.x = 0.0;
              CStack_a0.z = -1.5;
              fStack_2c = CStack_a0.y;
              pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                 ((CDemonActor *)this_ptr_00,&CStack_58,&CStack_a0);
              fStack_64 = pCVar3->x - (this_ptr->base).base.base.location.position.x;
              fStack_60 = pCVar3->y - (this_ptr->base).base.base.location.position.y;
              fStack_5c = pCVar3->z - (this_ptr->base).base.base.location.position.z;
              if (&this_ptr->ladder_offset != (CVector3f *)&fStack_64) {
                (this_ptr->ladder_offset).x = fStack_64;
                (this_ptr->ladder_offset).y = fStack_60;
                (this_ptr->ladder_offset).z = fStack_5c;
              }
              CStack_4c.x = local_d0.x - (this_ptr->base).base.base.location.position.x;
              CStack_4c.y = local_d0.y - (this_ptr->base).base.base.location.position.y;
              CStack_4c.z = local_d0.z - (this_ptr->base).base.base.location.position.z;
              pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                 (&CStack_c4,&CStack_4c);
              this_ptr->ladder_facing_angle = pCVar3->y;
              this_ptr->ladder_blend_time = 1.0;
              return 1;
            }
          }
        }
      }
LAB_0053c438:
      local_20 = local_20 + 4;
    }
  }
  return 0;
}
