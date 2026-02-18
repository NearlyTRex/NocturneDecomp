// Name: core_stranger.cpp_CStranger_FUN_005c2400
// Address: 005c2400
// Address Range: [[005c2400, 005c2846]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c2400(CStranger *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_stranger_cpp_CStranger_FUN_005c2400(CStranger *this_ptr)

{
  double dVar1;
  float fVar2;
  CDemonActor *this_ptr_00;
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
  
  this_ptr->ladder_to_descend = (CDemonActor *)0x0;
  local_18 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                       ((CCharacter *)this_ptr,0);
  if ((((float)0.98999999999999999 <= local_18) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_28 = &(this_ptr->base).base.base.location.position;
    local_20 = 0;
    for (local_1c = 0; local_1c < g_CDemonSetPtr->actor_count; local_1c = local_1c + 1) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_20),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y -
              ((this_ptr_00->location).position.y + this_ptr_00[2].location.position.z)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_00,&local_d0,local_28);
        if ((ABS(local_d0.z) <= (float)4) && (local_d0.z <= 0.0)) {
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_e8);
          if (local_e8.max.x < local_d0.x) {
            if (local_e8.max.x + 1.0 < local_d0.x) goto LAB_005c2488;
            local_d0.x = local_e8.max.x;
          }
          if (local_d0.x < local_e8.min.x) {
            if (local_d0.x < local_e8.min.x + (float)-1) goto LAB_005c2488;
            local_d0.x = local_e8.min.x;
          }
          fStack_7c = local_e8.min.x + local_e8.max.x;
          fStack_94 = fStack_7c * 0.5f;
          fStack_74 = local_e8.min.z + local_e8.max.z;
          fStack_78 = local_e8.min.y + local_e8.max.y;
          local_d0.z = fStack_74 * 0.5f;
          fStack_90 = fStack_78 * 0.5f;
          fStack_8c = local_d0.z;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,&CStack_88,&local_d0);
          if (&local_d0 != pCVar3) {
            local_d0.x = pCVar3->x;
            local_d0.y = pCVar3->y;
            local_d0.z = pCVar3->z;
          }
          local_d0.y = local_d0.y + this_ptr_00[2].location.position.z;
          fStack_ac = (this_ptr->base).base.base.orient_matrix.m[0].z;
          fStack_a8 = (this_ptr->base).base.base.orient_matrix.m[1].z;
          fStack_a4 = (this_ptr->base).base.base.orient_matrix.m[2].z;
          fStack_b8 = (this_ptr_00->orient_matrix).m[0].z;
          fStack_b4 = (this_ptr_00->orient_matrix).m[1].z;
          fStack_b0 = (this_ptr_00->orient_matrix).m[2].z;
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
            pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&CStack_70,&(this_ptr_00->location).position
                               );
            if (0.0 < pCVar3->z) {
              uStack_f4 = (uint)((ulonglong)dVar1 >> 0x20);
              uStack_f8 = SUB84(dVar1,0);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",uStack_f8,uStack_f4);
              this_ptr->ladder_to_descend = this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x2b,1);
              (this_ptr->base).player_control.action_states[3] = 0;
              CStack_a0.y = this_ptr_00[2].location.position.z;
              CStack_a0.x = 0.0;
              CStack_a0.z = -1.5;
              fStack_2c = CStack_a0.y;
              pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr_00,&CStack_58,&CStack_a0);
              fStack_64 = pCVar3->x - (this_ptr->base).base.base.location.position.x;
              fStack_60 = pCVar3->y - (this_ptr->base).base.base.location.position.y;
              fStack_5c = pCVar3->z - (this_ptr->base).base.base.location.position.z;
              if ((float *)&this_ptr->unk9 != &fStack_64) {
                this_ptr->unk9 = (int)fStack_64;
                this_ptr->unk10 = (int)fStack_60;
                this_ptr->unk11 = (int)fStack_5c;
              }
              CStack_4c.x = local_d0.x - (this_ptr->base).base.base.location.position.x;
              CStack_4c.y = local_d0.y - (this_ptr->base).base.base.location.position.y;
              CStack_4c.z = local_d0.z - (this_ptr->base).base.base.location.position.z;
              pCVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_c4,&CStack_4c);
              this_ptr->unk12 = (int)pCVar3->y;
              this_ptr->unk13 = 0x3f800000;
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
