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
  byte local_a4 [8];
  float local_9c;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
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
  
  in_stack_00000004[0x179].field19_0x114 = 0;
  fVar2 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fVar2) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_20 = &(in_stack_00000004->location).position;
    local_18 = 0;
    for (local_1c = 0; local_1c < (int)g_CDemonSetPtr->actor_list_ptr; local_1c = local_1c + 1) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_18),
                               g_CLadderClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (ABS((in_stack_00000004->location).position.y - (this_ptr_00->location).position.y) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr_00,(CVector3f *)local_a4,local_20);
        if ((ABS(local_9c) <= (float)4) && (0.0 <= local_9c)) {
          (*this_ptr_00->vtable->getBoundingBox)(this_ptr_00,&local_e0);
          if (local_e0.max.x < (float)local_a4._0_4_) {
            if (local_e0.max.x + 1.0 < (float)local_a4._0_4_) goto LAB_005c2068;
            local_a4._0_4_ = local_e0.max.x;
          }
          if ((float)local_a4._0_4_ < local_e0.min.x) {
            if ((float)local_a4._0_4_ < local_e0.min.x + (float)-1) goto LAB_005c2068;
            local_a4._0_4_ = local_e0.min.x;
          }
          fStack_bc = local_e0.min.x + local_e0.max.x;
          fStack_c8 = fStack_bc * 0.5f;
          fStack_b4 = local_e0.min.z + local_e0.max.z;
          fStack_b8 = local_e0.min.y + local_e0.max.y;
          fStack_c0 = fStack_b4 * 0.5f;
          fStack_c4 = fStack_b8 * 0.5f;
          local_9c = fStack_c0;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr_00,&CStack_8c,(CVector3f *)local_a4);
          if ((CVector3f *)(local_a4 + 4) != pCVar3) {
            local_a4._0_4_ = pCVar3->x;
            local_a4._4_4_ = pCVar3->y;
            local_9c = pCVar3->z;
          }
          fStack_b0 = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_ac = (in_stack_00000004->orient_matrix).m[1].z;
          fStack_a8 = (in_stack_00000004->orient_matrix).m[2].z;
          fStack_44 = (this_ptr_00->orient_matrix).m[0].z;
          fStack_40 = (this_ptr_00->orient_matrix).m[1].z;
          fStack_3c = (this_ptr_00->orient_matrix).m[2].z;
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
            pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (in_stack_00000004,&CStack_98,&(this_ptr_00->location).position);
            if (0.0 < pCVar3->z) {
              in_stack_00000004[0x179].field19_0x114 = (int)this_ptr_00;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2a,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              CStack_5c.z = 2.0;
              CStack_5c.x = 0.0;
              CStack_5c.y = 0.0;
              pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr_00,&CStack_50,&CStack_5c);
              fStack_68 = pCVar3->x - (in_stack_00000004->location).position.x;
              fStack_64 = pCVar3->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              fStack_60 = pCVar3->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_68) {
                *piVar1 = (int)fStack_68;
                in_stack_00000004[0x17b].scale.z = (int)fStack_64;
                in_stack_00000004[0x17b].field19_0x114 = (int)fStack_60;
              }
              CStack_74.x = (float)local_a4._0_4_ - (in_stack_00000004->location).position.x;
              CStack_74.y = (float)local_a4._4_4_ - (in_stack_00000004->location).position.y;
              CStack_74.z = local_9c - (in_stack_00000004->location).position.z;
              pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_80,&CStack_74);
              this_ptr = g_CConsolePtr;
              in_stack_00000004[0x17b].field20_0x118 = (int)pCVar3->y;
              in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (this_ptr,"Climbing ladder %s\n",this_ptr_00);
              return 1;
            }
          }
        }
      }
LAB_005c2068:
      local_18 = local_18 + 4;
    }
  }
  return 0;
}
