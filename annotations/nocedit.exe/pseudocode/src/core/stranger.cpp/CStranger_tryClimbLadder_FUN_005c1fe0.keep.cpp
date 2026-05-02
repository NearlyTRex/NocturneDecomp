// Name: core_stranger.cpp_CStranger_tryClimbLadder_FUN_005c1fe0
// Address: 005c1fe0
// MANUAL RECONSTRUCTION
// Address Range: [[005c1fe0, 005c23f2]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_005c1fe0(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_tryClimbLadder_FUN_005c1fe0(CStranger *this_ptr)

{
  float fVar1;
  CLadder *this_ptr_01;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float10 fVar2;
  CBoundingBox3D local_e0;
  CVector3f local_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  int local_1c;
  int local_18;
  CConsole *this_ptr_00;
  
  (this_ptr->base).ladder_to_climb = (CLadder *)0x0;
  fVar1 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                    ((CCharacter *)this_ptr,0);
  if ((((float)0.98999999999999999 <= fVar1) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if (g_CDemonSetPtr->actor_count <= local_1c) break;
      this_ptr_01 = (CLadder *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_18),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_01 != (CLadder *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              (this_ptr_01->base).location.position.y) <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  ((CDemonActor *)this_ptr_01,&local_a4,
                   &(this_ptr->base).base.base.location.position);
        if ((ABS(local_a4.z) <= (float)4) && (0.0 <= local_a4.z)) {
          (*((this_ptr_01->base).vtable._ub)->getBoundingBox)((CDemonActor *)this_ptr_01,&local_e0);
          if (local_e0.max.x < local_a4.x) {
            if (local_e0.max.x + 1.0 < local_a4.x) goto LAB_005c2068;
            local_a4.x = local_e0.max.x;
          }
          if (local_a4.x < local_e0.min.x) {
            if (local_a4.x < local_e0.min.x + (float)-1) goto LAB_005c2068;
            local_a4.x = local_e0.min.x;
          }
          local_a4.z = (local_e0.min.z + local_e0.max.z) * 0.5f;
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr_01,&CStack_8c,&local_a4);
          if (&local_a4 != pCVar1) {
            local_a4.x = pCVar1->x;
            local_a4.y = pCVar1->y;
            local_a4.z = pCVar1->z;
          }
          fVar2 = (float10)fcos((float10)0.261799387791667);
          if (fVar2 <= ABS((float10)(this_ptr->base).base.base.orient_matrix.m[2].z *
                           (float10)(this_ptr_01->base).orient_matrix.m[2].z +
                           (float10)(this_ptr->base).base.base.orient_matrix.m[0].z *
                           (float10)(this_ptr_01->base).orient_matrix.m[0].z +
                           (float10)(this_ptr->base).base.base.orient_matrix.m[1].z *
                           (float10)(this_ptr_01->base).orient_matrix.m[1].z)) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&CStack_98,
                                &(this_ptr_01->base).location.position);
            if (0.0 < pCVar2->z) {
              (this_ptr->base).ladder_to_climb = this_ptr_01;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x2a,1);
              (this_ptr->base).player_input.action_state.fire = 0;
              CStack_5c.z = 2.0;
              CStack_5c.x = 0.0;
              CStack_5c.y = 0.0;
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 ((CDemonActor *)this_ptr_01,&CStack_50,&CStack_5c);
              fStack_68 = pCVar2->x - (this_ptr->base).base.base.location.position.x;
              fStack_64 = pCVar2->y - (this_ptr->base).base.base.location.position.y;
              fStack_60 = pCVar2->z - (this_ptr->base).base.base.location.position.z;
              if (&this_ptr->ladder_offset != (CVector3f *)&fStack_68) {
                (this_ptr->ladder_offset).x = fStack_68;
                (this_ptr->ladder_offset).y = fStack_64;
                (this_ptr->ladder_offset).z = fStack_60;
              }
              CStack_74.x = local_a4.x - (this_ptr->base).base.base.location.position.x;
              CStack_74.y = local_a4.y - (this_ptr->base).base.base.location.position.y;
              CStack_74.z = local_a4.z - (this_ptr->base).base.base.location.position.z;
              pCVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_80,&CStack_74);
              this_ptr_00 = g_CConsolePtr;
              this_ptr->ladder_facing_angle = pCVar2->y;
              this_ptr->ladder_blend_time = 1.0;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (this_ptr_00,"Climbing ladder %s\n",this_ptr_01->base.actor_name);
              return 1;
            }
          }
        }
      }
LAB_005c2068:
      local_1c = local_1c + 1;
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
