// Name: core_stranger.cpp_CStranger_tryDescendLadder_FUN_005c2400
// Address: 005c2400
// MANUAL RECONSTRUCTION
// Address Range: [[005c2400, 005c2846]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_005c2400(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_tryDescendLadder_FUN_005c2400(CStranger *this_ptr)

{
  float fVar1;
  CLadder *this_ptr_00;
  CVector3f *pCVar3;
  CVector3f *pCVar2;
  float10 fVar4;
  CBoundingBox3D local_e8;
  CVector3f local_d0;
  CVector3f CStack_c4;
  CVector3f CStack_a0;
  CVector3f CStack_88;
  CVector3f CStack_70;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  CVector3f CStack_58;
  CVector3f CStack_4c;
  int local_20;
  int local_1c;
  float fVar2;

  this_ptr->ladder_to_descend = (CLadder *)0x0;
  fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                    ((CCharacter *)this_ptr,0);
  if ((((float)0.98999999999999999 <= fVar1) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_20 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      this_ptr_00 = (CLadder *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_00 != (CLadder *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              ((this_ptr_00->base).location.position.y + (this_ptr_00->ladder_size).y)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  ((CDemonActor *)this_ptr_00,&local_d0,
                   &(this_ptr->base).base.base.location.position);
        if ((ABS(local_d0.z) <= (float)4) && (local_d0.z <= 0.0)) {
          (*((this_ptr_00->base).vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr_00,&local_e8);
          if (local_e8.max.x < local_d0.x) {
            if (local_e8.max.x + 1.0 < local_d0.x) goto LAB_005c2488;
            local_d0.x = local_e8.max.x;
          }
          if (local_d0.x < local_e8.min.x) {
            if (local_d0.x < local_e8.min.x + (float)-1) goto LAB_005c2488;
            local_d0.x = local_e8.min.x;
          }
          local_d0.z = (local_e8.min.z + local_e8.max.z) * 0.5f;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr_00,&CStack_88,&local_d0);
          if (&local_d0 != pCVar3) {
            local_d0.x = pCVar3->x;
            local_d0.y = pCVar3->y;
            local_d0.z = pCVar3->z;
          }
          local_d0.y = local_d0.y + (this_ptr_00->ladder_size).y;
          fVar4 = (float10)fcos((float10)0.261799387791667);
          fVar2 = ABS((this_ptr->base).base.base.orient_matrix.m[2].z *
                      (this_ptr_00->base).orient_matrix.m[2].z +
                      (this_ptr->base).base.base.orient_matrix.m[0].z *
                      (this_ptr_00->base).orient_matrix.m[0].z +
                      (this_ptr->base).base.base.orient_matrix.m[1].z *
                      (this_ptr_00->base).orient_matrix.m[1].z);
          if (fVar4 <= (float10)fVar2) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&CStack_70,
                                &(this_ptr_00->base).location.position);
            if (0.0 < pCVar2->z) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",(double)fVar2);
              this_ptr->ladder_to_descend = this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x2b,1);
              (this_ptr->base).player_input.action_state.fire = 0;
              CStack_a0.y = (this_ptr_00->ladder_size).y;
              CStack_a0.x = 0.0;
              CStack_a0.z = -1.5;
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)this_ptr_00,&CStack_58,&CStack_a0);
              fStack_64 = pCVar2->x - (this_ptr->base).base.base.location.position.x;
              fStack_60 = pCVar2->y - (this_ptr->base).base.base.location.position.y;
              fStack_5c = pCVar2->z - (this_ptr->base).base.base.location.position.z;
              if (&this_ptr->ladder_offset != (CVector3f *)&fStack_64) {
                (this_ptr->ladder_offset).x = fStack_64;
                (this_ptr->ladder_offset).y = fStack_60;
                (this_ptr->ladder_offset).z = fStack_5c;
              }
              CStack_4c.x = local_d0.x - (this_ptr->base).base.base.location.position.x;
              CStack_4c.y = local_d0.y - (this_ptr->base).base.base.location.position.y;
              CStack_4c.z = local_d0.z - (this_ptr->base).base.base.location.position.z;
              pCVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_c4,&CStack_4c);
              this_ptr->ladder_facing_angle = pCVar2->y;
              this_ptr->ladder_blend_time = 1.0;
              return 1;
            }
          }
        }
      }
LAB_005c2488:
      local_20 = local_20 + 4;
    }
  }
  return 0;
}
