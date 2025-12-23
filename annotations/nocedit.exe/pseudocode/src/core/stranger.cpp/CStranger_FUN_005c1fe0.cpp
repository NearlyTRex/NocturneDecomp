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
  CDemonActor *pCVar2;
  float fVar3;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  CDemonActor *pCVar7;
  CBoundingBox3D *out_box;
  float in_stack_ffffff28;
  CDemonActor *pCStack_d4;
  CBoundingBox3D CStack_d0;
  float fStack_b8;
  float fStack_b4;
  float fStack_ac;
  float fStack_a8;
  byte local_a4 [8];
  float local_9c;
  byte auStack_98 [8];
  float fStack_90;
  CVector3f aCStack_8c [2];
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CDemonActor *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  CLocation *local_18;
  CVector3f *local_14;
  
  in_stack_00000004[0x179].field19_0x114 = 0;
  fVar3 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fVar3) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_18 = &in_stack_00000004->location;
    iVar5 = 0;
    for (local_14 = (CVector3f *)0x0; (int)local_14 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_14 = (CVector3f *)((int)&local_14->x + 1)) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar5),
                               g_CLadderClassInfo.name_hash);
      if (((this_ptr_00 != (CDemonActor *)0x0) &&
          (ABS((in_stack_00000004->location).position.y - (this_ptr_00->location).position.y) <=
           (float)2)) &&
         ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (this_ptr_00,(CVector3f *)auStack_98,local_14),
          ABS(aCStack_8c[0].x) <= (float)4 && (0.0 <= aCStack_8c[0].x)))) {
        out_box = &CStack_d0;
        pCVar7 = this_ptr_00;
        (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,out_box);
        if ((float)pCStack_d4 < (float)local_a4._0_4_) {
          if ((float)pCStack_d4 + 1.0 < (float)local_a4._0_4_) goto LAB_005c2068;
          local_a4._0_4_ = pCStack_d4;
        }
        pCVar2 = (CDemonActor *)local_a4._0_4_;
        if (((float)pCVar7 <= (float)local_a4._0_4_) ||
           (pCVar2 = pCVar7, (float)pCVar7 + (float)-1 <= (float)local_a4._0_4_)) {
          local_a4._0_4_ = pCVar2;
          CStack_d0.max.z = (float)pCVar7 + (float)pCStack_d4;
          CStack_d0.min.z = CStack_d0.max.z * 0.5f;
          fStack_b4 = in_stack_ffffff28 + CStack_d0.min.y;
          fStack_b8 = (float)out_box + CStack_d0.min.x;
          CStack_d0.max.y = fStack_b4 * 0.5f;
          CStack_d0.max.x = fStack_b8 * 0.5f;
          local_9c = CStack_d0.max.y;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,aCStack_8c,(CVector3f *)local_a4);
          if ((CVector3f *)(local_a4 + 4) != pCVar4) {
            local_a4._4_4_ = pCVar4->x;
            local_9c = pCVar4->y;
            auStack_98._0_4_ = pCVar4->z;
          }
          fStack_ac = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_a8 = (in_stack_00000004->orient_matrix).m[1].z;
          local_a4._0_4_ = (in_stack_00000004->orient_matrix).m[2].z;
          CStack_44.y = (this_ptr_00->orient_matrix).m[0].z;
          CStack_44.z = (this_ptr_00->orient_matrix).m[1].z;
          fStack_38 = (this_ptr_00->orient_matrix).m[2].z;
          fVar6 = (float10)fcos((float10)0.261799387791667);
          fStack_34 = fStack_ac;
          fStack_30 = fStack_a8;
          pCStack_2c = (CDemonActor *)local_a4._0_4_;
          fStack_28 = CStack_44.y;
          fStack_24 = CStack_44.z;
          local_20 = fStack_38;
          if ((fVar6 <= ABS((float10)(float)local_a4._0_4_ * (float10)fStack_38 +
                            (float10)fStack_ac * (float10)CStack_44.y +
                            (float10)fStack_a8 * (float10)CStack_44.z)) &&
             (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (in_stack_00000004,(CVector3f *)(auStack_98 + 4),
                                  &(this_ptr_00->location).position), 0.0 < pCVar4->z)) {
            in_stack_00000004[0x179].field19_0x114 = (int)this_ptr_00;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)(in_stack_00000004 + 1),0x2a,1);
            in_stack_00000004[0x8d].create_event[0x48] = '\0';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            CStack_50.z = 2.0;
            CStack_50.x = 0.0;
            CStack_50.y = 0.0;
            pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (this_ptr_00,&CStack_44,&CStack_50);
            fStack_58 = pCVar4->x - (in_stack_00000004->location).position.x;
            fStack_54 = pCVar4->y - (in_stack_00000004->location).position.y;
            piVar1 = &in_stack_00000004[0x17b].scale.y;
            CStack_50.x = pCVar4->z - (in_stack_00000004->location).position.z;
            if ((float *)piVar1 != &fStack_58) {
              *piVar1 = (int)fStack_58;
              in_stack_00000004[0x17b].scale.z = (int)fStack_54;
              in_stack_00000004[0x17b].field19_0x114 = (int)CStack_50.x;
            }
            CStack_64.x = (float)auStack_98._4_4_ - (in_stack_00000004->location).position.x;
            CStack_64.y = fStack_90 - (in_stack_00000004->location).position.y;
            CStack_64.z = aCStack_8c[0].x - (in_stack_00000004->location).position.z;
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_70,&CStack_64);
            this_ptr = g_CConsolePtr;
            in_stack_00000004[0x17b].field20_0x118 = (int)pCVar4->y;
            in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
            engine_console_cpp_CConsole_printf_FUN_00441890
                      (this_ptr,"Climbing ladder %s\n",this_ptr_00);
            return 1;
          }
        }
      }
LAB_005c2068:
      iVar5 = iVar5 + 4;
    }
  }
  return 0;
}
