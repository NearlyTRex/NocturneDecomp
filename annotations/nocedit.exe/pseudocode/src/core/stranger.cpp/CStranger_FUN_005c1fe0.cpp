// Name: core_stranger.cpp_CStranger_FUN_005c1fe0
// Address: 005c1fe0
// Address Range: [[005c1fe0, 005c23f2]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c1fe0(CStranger *this_ptr)

{
  CConsole *this_ptr_00;
  CDemonActor *this_ptr_01;
  CVector3f *pCVar1;
  float10 fVar2;
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
  byte local_a4 [12];
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  CVector3f *pCStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f *local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  (this_ptr->base).unk4[0x10] = '\0';
  (this_ptr->base).unk4[0x11] = '\0';
  (this_ptr->base).unk4[0x12] = '\0';
  (this_ptr->base).unk4[0x13] = '\0';
  local_14 = core_charactr_cpp_CCharacter_FUN_0042e840((CCharacter *)this_ptr);
  if ((((float)0.98999999999999999 <= local_14) &&
      ((this_ptr->base).base.carry_hands[0].carry_actor == (CDemonActor *)0x0)) &&
     ((this_ptr->base).base.carry_hands[1].carry_actor == (CDemonActor *)0x0)) {
    local_20 = &(this_ptr->base).base.base.location.position;
    local_1c = 0.0;
    local_18 = 0;
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_1c) break;
      this_ptr_01 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_01 != (CDemonActor *)0x0) &&
         (ABS((this_ptr->base).base.base.location.position.y - (this_ptr_01->location).position.y)
          <= (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr_01,(CVector3f *)local_a4,local_20);
        if ((ABS((float)local_a4._8_4_) <= (float)4) && (0.0 <= (float)local_a4._8_4_)
           ) {
          (*((this_ptr_01->vtable)._ub)->getBoundingBox)(this_ptr_01,&local_e0);
          if (local_e0.max.z < (float)local_a4._8_4_) {
            if (local_e0.max.z + 1.0 < (float)local_a4._8_4_) goto LAB_005c2068;
            local_a4._8_4_ = local_e0.max.z;
          }
          if ((float)local_a4._8_4_ < local_e0.min.z) {
            if ((float)local_a4._8_4_ < local_e0.min.z + (float)-1) goto LAB_005c2068;
            local_a4._8_4_ = local_e0.min.z;
          }
          fStack_b4 = local_e0.min.z + local_e0.max.z;
          fStack_c0 = fStack_b4 * 0.5f;
          fStack_ac = local_e0.max.y + fStack_c4;
          fStack_b0 = local_e0.max.x + fStack_c8;
          fStack_b8 = fStack_ac * 0.5f;
          fStack_bc = fStack_b0 * 0.5f;
          fStack_94 = fStack_b8;
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_01,&CStack_84,(CVector3f *)(local_a4 + 8));
          if ((CVector3f *)(local_a4 + 8) != pCVar1) {
            local_a4._8_4_ = pCVar1->x;
            fStack_98 = pCVar1->y;
            fStack_94 = pCVar1->z;
          }
          fStack_a8 = (this_ptr->base).base.base.orient_matrix.m[0].z;
          local_a4._0_4_ = (this_ptr->base).base.base.orient_matrix.m[1].z;
          local_a4._4_4_ = (this_ptr->base).base.base.orient_matrix.m[2].z;
          fStack_3c = (this_ptr_01->orient_matrix).m[0].z;
          pCStack_38 = (CVector3f *)(this_ptr_01->orient_matrix).m[1].z;
          fStack_34 = (this_ptr_01->orient_matrix).m[2].z;
          fVar2 = (float10)fcos((float10)0.261799387791667);
          fStack_30 = fStack_a8;
          fStack_2c = (float)local_a4._0_4_;
          fStack_28 = (float)local_a4._4_4_;
          fStack_24 = fStack_3c;
          local_20 = pCStack_38;
          local_1c = fStack_34;
          if (fVar2 <= ABS((float10)(float)local_a4._4_4_ * (float10)fStack_34 +
                           (float10)fStack_a8 * (float10)fStack_3c +
                           (float10)(float)local_a4._0_4_ * (float10)(float)pCStack_38)) {
            pCVar1 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               ((CDemonActor *)this_ptr,&CStack_90,&(this_ptr_01->location).position
                               );
            if (0.0 < pCVar1->z) {
              *(CDemonActor **)((this_ptr->base).unk4 + 0x10) = this_ptr_01;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        (&(this_ptr->base).base.model.motion_controller,0x2a,1);
              (this_ptr->base).action_bindings.fire_key = 0;
              CStack_54.z = 2.0;
              CStack_54.x = 0.0;
              CStack_54.y = 0.0;
              pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr_01,&CStack_48,&CStack_54);
              fStack_60 = pCVar1->x - (this_ptr->base).base.base.location.position.x;
              fStack_5c = pCVar1->y - (this_ptr->base).base.base.location.position.y;
              fStack_58 = pCVar1->z - (this_ptr->base).base.base.location.position.z;
              if ((float *)(this_ptr->unk2 + 0x218) != &fStack_60) {
                *(float *)(this_ptr->unk2 + 0x218) = fStack_60;
                *(float *)(this_ptr->unk2 + 0x21c) = fStack_5c;
                *(float *)(this_ptr->unk2 + 0x220) = fStack_58;
              }
              CStack_6c.x = (float)local_a4._8_4_ - (this_ptr->base).base.base.location.position.x;
              CStack_6c.y = fStack_98 - (this_ptr->base).base.base.location.position.y;
              CStack_6c.z = fStack_94 - (this_ptr->base).base.base.location.position.z;
              pCVar1 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_78,&CStack_6c);
              this_ptr_00 = g_CConsolePtr;
              *(float *)(this_ptr->unk2 + 0x224) = pCVar1->y;
              this_ptr->unk2[0x228] = '\0';
              this_ptr->unk2[0x229] = '\0';
              this_ptr->unk2[0x22a] = -0x80;
              this_ptr->unk2[0x22b] = '?';
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (this_ptr_00,"Climbing ladder %s\n");
              return 1;
            }
          }
        }
      }
LAB_005c2068:
      local_1c = (float)((int)local_1c + 1);
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
