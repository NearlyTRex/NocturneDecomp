// Name: core_stranger.cpp_CStranger_FUN_005c1fe0
// Address: 005c1fe0
// Address Range: [[005c1fe0, 005c23f2]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c1fe0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c1fe0(CStranger* param_1) */

uint core_stranger_cpp_CStranger_FUN_005c1fe0(void)

{
  int *piVar1;
  CConsole *this_ptr;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar2;
  float10 fVar3;
  CDemonActor *in_stack_00000004;
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
  
  in_stack_00000004[0x179].unk8 = 0;
  local_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= local_14) && (in_stack_00000004[0x1b].unk1 == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_20 = &(in_stack_00000004->location).position;
    local_1c = 0.0;
    local_18 = 0;
    while( true ) {
      if ((int)g_CDemonSetPtr->actor_list_ptr <= (int)local_1c) break;
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (ABS((in_stack_00000004->location).position.y - (this_ptr_00->location).position.y) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr_00,(CVector3f *)local_a4,local_20);
        if ((ABS((float)local_a4._8_4_) <= (float)4) && (0.0 <= (float)local_a4._8_4_)
           ) {
          (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_e0);
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
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,&CStack_84,(CVector3f *)(local_a4 + 8));
          if ((CVector3f *)(local_a4 + 8) != pCVar2) {
            local_a4._8_4_ = pCVar2->x;
            fStack_98 = pCVar2->y;
            fStack_94 = pCVar2->z;
          }
          fStack_a8 = (in_stack_00000004->orient_matrix).m[0].z;
          local_a4._0_4_ = (in_stack_00000004->orient_matrix).m[1].z;
          local_a4._4_4_ = (in_stack_00000004->orient_matrix).m[2].z;
          fStack_3c = (this_ptr_00->orient_matrix).m[0].z;
          pCStack_38 = (CVector3f *)(this_ptr_00->orient_matrix).m[1].z;
          fStack_34 = (this_ptr_00->orient_matrix).m[2].z;
          fVar3 = (float10)fcos((float10)0.261799387791667);
          fStack_30 = fStack_a8;
          fStack_2c = (float)local_a4._0_4_;
          fStack_28 = (float)local_a4._4_4_;
          fStack_24 = fStack_3c;
          local_20 = pCStack_38;
          local_1c = fStack_34;
          if (fVar3 <= ABS((float10)(float)local_a4._4_4_ * (float10)fStack_34 +
                           (float10)fStack_a8 * (float10)fStack_3c +
                           (float10)(float)local_a4._0_4_ * (float10)(float)pCStack_38)) {
            pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (in_stack_00000004,&CStack_90,&(this_ptr_00->location).position);
            if (0.0 < pCVar2->z) {
              in_stack_00000004[0x179].unk8 = (int)this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2a,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              CStack_54.z = 2.0;
              CStack_54.x = 0.0;
              CStack_54.y = 0.0;
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr_00,&CStack_48,&CStack_54);
              fStack_60 = pCVar2->x - (in_stack_00000004->location).position.x;
              fStack_5c = pCVar2->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              fStack_58 = pCVar2->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_60) {
                *piVar1 = (int)fStack_60;
                in_stack_00000004[0x17b].scale.z = (int)fStack_5c;
                in_stack_00000004[0x17b].unk8 = (int)fStack_58;
              }
              CStack_6c.x = (float)local_a4._8_4_ - (in_stack_00000004->location).position.x;
              CStack_6c.y = fStack_98 - (in_stack_00000004->location).position.y;
              CStack_6c.z = fStack_94 - (in_stack_00000004->location).position.z;
              pCVar2 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_78,&CStack_6c);
              this_ptr = g_CConsolePtr;
              in_stack_00000004[0x17b].unk9 = (int)pCVar2->y;
              in_stack_00000004[0x17b].unk10 = 0x3f800000;
              engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Climbing ladder %s\n")
              ;
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
