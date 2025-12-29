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
  float fVar2;
  CDemonActor *this_ptr_00;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffff40;
  float in_stack_ffffff44;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f local_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  byte auStack_84 [8];
  float fStack_7c;
  float fStack_78;
  byte auStack_74 [36];
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f *local_18;
  float local_14;
  
  in_stack_00000004[0x179].field19_0x114 = 0;
  fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fVar2) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    CStack_24.z = (float)&in_stack_00000004->location;
    local_14 = 0.0;
    for (local_18 = (CVector3f *)0x0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_18 = (CVector3f *)((int)&local_18->x + 1)) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)local_14),
                               g_CLadderClassInfo.name_hash);
      if (((this_ptr_00 != (CDemonActor *)0x0) &&
          (ABS((in_stack_00000004->location).position.y - (this_ptr_00->location).position.y) <=
           (float)2)) &&
         ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(this_ptr_00,&local_9c,local_18)
          , ABS(fStack_90) <= (float)4 && (0.0 <= fStack_90)))) {
        (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,(CBoundingBox3D *)&stack0xffffff2c);
        if (fStack_b4 < (float)auStack_84._0_4_) {
          if (fStack_b4 + 1.0 < (float)auStack_84._0_4_) goto LAB_005c2068;
          auStack_84._0_4_ = fStack_b4;
        }
        fVar2 = (float)auStack_84._0_4_;
        if ((in_stack_ffffff40 <= (float)auStack_84._0_4_) ||
           (fVar2 = in_stack_ffffff40,
           in_stack_ffffff40 + (float)-1 <= (float)auStack_84._0_4_)) {
          auStack_84._0_4_ = fVar2;
          local_9c.x = in_stack_ffffff40 + fStack_b4;
          local_9c.z = fStack_b8 + fStack_ac;
          local_9c.y = in_stack_ffffff44 + fStack_b0;
          fStack_7c = local_9c.z * 0.5f;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,(CVector3f *)(auStack_74 + 8),(CVector3f *)auStack_84);
          if ((CVector3f *)(auStack_84 + 4) != pCVar3) {
            auStack_84._4_4_ = pCVar3->x;
            fStack_7c = pCVar3->y;
            fStack_78 = pCVar3->z;
          }
          fStack_8c = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_88 = (in_stack_00000004->orient_matrix).m[1].z;
          auStack_84._0_4_ = (in_stack_00000004->orient_matrix).m[2].z;
          CStack_24.y = (this_ptr_00->orient_matrix).m[0].z;
          CStack_24.z = (this_ptr_00->orient_matrix).m[1].z;
          local_18 = (CVector3f *)(this_ptr_00->orient_matrix).m[2].z;
          fVar4 = (float10)fcos((float10)0.261799387791667);
          local_14 = fStack_8c;
          if ((fVar4 <= ABS((float10)(float)auStack_84._0_4_ * (float10)(float)local_18 +
                            (float10)fStack_8c * (float10)CStack_24.y +
                            (float10)fStack_88 * (float10)CStack_24.z)) &&
             (pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (in_stack_00000004,(CVector3f *)auStack_74,
                                  &(this_ptr_00->location).position), 0.0 < pCVar3->z)) {
            in_stack_00000004[0x179].field19_0x114 = (int)this_ptr_00;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)(in_stack_00000004 + 1),0x2a,1);
            in_stack_00000004[0x8d].create_event[0x48] = '\0';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            CStack_30.z = 2.0;
            CStack_30.x = 0.0;
            CStack_30.y = 0.0;
            pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (this_ptr_00,&CStack_24,&CStack_30);
            fStack_38 = pCVar3->x - (in_stack_00000004->location).position.x;
            fStack_34 = pCVar3->y - (in_stack_00000004->location).position.y;
            piVar1 = &in_stack_00000004[0x17b].scale.y;
            CStack_30.x = pCVar3->z - (in_stack_00000004->location).position.z;
            if ((float *)piVar1 != &fStack_38) {
              *piVar1 = (int)fStack_38;
              in_stack_00000004[0x17b].scale.z = (int)fStack_34;
              in_stack_00000004[0x17b].field19_0x114 = (int)CStack_30.x;
            }
            CStack_44.x = (float)auStack_74._0_4_ - (in_stack_00000004->location).position.x;
            CStack_44.y = (float)auStack_74._4_4_ - (in_stack_00000004->location).position.y;
            CStack_44.z = (float)auStack_74._8_4_ - (in_stack_00000004->location).position.z;
            pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_50,&CStack_44);
            this_ptr = g_CConsolePtr;
            in_stack_00000004[0x17b].field20_0x118 = (int)pCVar3->y;
            in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
            engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Climbing ladder %s\n");
            return 1;
          }
        }
      }
LAB_005c2068:
      local_14 = (float)((int)local_14 + 4);
    }
  }
  return 0;
}
