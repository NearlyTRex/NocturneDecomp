// Name: core_stranger.cpp_CStranger_FUN_005c2400
// Address: 005c2400
// Address Range: [[005c2400, 005c2846]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c2400()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c2400(CStranger* param_1) */

uint core_stranger_cpp_CStranger_FUN_005c2400(void)

{
  int *piVar1;
  float fVar2;
  CDemonActor *this_ptr;
  CVector3f *pCVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_ffffff38;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  byte auStack_b0 [8];
  float fStack_a8;
  float fStack_a4;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_74;
  byte auStack_70 [20];
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  CVector3f aCStack_4c [2];
  float fStack_30;
  float fStack_2c;
  CVector3f local_28;
  float local_1c;
  float local_18;
  float fStack_14;
  
  in_stack_00000004[0x17a].orient.heading = 0.0;
  fStack_14 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fStack_14) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_28.y = (float)&in_stack_00000004->location;
    local_1c = 0.0;
    for (local_18 = 0.0; (int)local_18 < (int)g_CDemonSetPtr->actor_list_ptr;
        local_18 = (float)((int)local_18 + 1)) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + (int)local_1c),
                            g_CLadderClassInfo.name_hash);
      if (((this_ptr != (CDemonActor *)0x0) &&
          (ABS((in_stack_00000004->location).position.y -
               ((this_ptr->location).position.y + this_ptr[2].location.position.z)) <=
           (float)2)) &&
         ((core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (this_ptr,(CVector3f *)&stack0xffffff38,(CVector3f *)local_28.z),
          ABS(fStack_bc) <= (float)4 && (fStack_bc <= 0.0)))) {
        (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)&stack0xffffff24);
        if (fStack_bc < (float)auStack_b0._0_4_) {
          if (fStack_bc + 1.0 < (float)auStack_b0._0_4_) goto LAB_005c2488;
          auStack_b0._0_4_ = fStack_bc;
        }
        fVar2 = (float)auStack_b0._0_4_;
        if ((in_stack_ffffff38 <= (float)auStack_b0._0_4_) ||
           (fVar2 = in_stack_ffffff38,
           in_stack_ffffff38 + (float)-1 <= (float)auStack_b0._0_4_)) {
          auStack_b0._0_4_ = fVar2;
          fStack_5c = in_stack_ffffff38 + fStack_bc;
          fStack_74 = fStack_5c * 0.5f;
          fStack_54 = fStack_c0 + fStack_b4;
          fStack_58 = fStack_c4 + fStack_b8;
          fStack_a8 = fStack_54 * 0.5f;
          auStack_70._0_4_ = fStack_58 * 0.5f;
          auStack_70._4_4_ = fStack_a8;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr,(CVector3f *)(auStack_70 + 8),(CVector3f *)auStack_b0);
          if ((CVector3f *)(auStack_b0 + 4) != pCVar3) {
            auStack_b0._4_4_ = pCVar3->x;
            fStack_a8 = pCVar3->y;
            fStack_a4 = pCVar3->z;
          }
          fStack_a8 = fStack_a8 + this_ptr[2].location.position.z;
          CStack_90.z = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_84 = (in_stack_00000004->orient_matrix).m[1].z;
          fStack_80 = (in_stack_00000004->orient_matrix).m[2].z;
          fStack_94 = (this_ptr->orient_matrix).m[0].z;
          CStack_90.x = (this_ptr->orient_matrix).m[1].z;
          CStack_90.y = (this_ptr->orient_matrix).m[2].z;
          fVar4 = (float10)fcos((float10)0.261799387791667);
          local_1c = fStack_84;
          local_18 = fStack_94;
          fStack_14 = CStack_90.x;
          if ((fVar4 <= (float10)ABS(fStack_80 * CStack_90.y +
                                     CStack_90.z * fStack_94 + fStack_84 * CStack_90.x)) &&
             (pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                 (in_stack_00000004,aCStack_4c,&(this_ptr->location).position),
             0.0 < pCVar3->z)) {
            engine_console_cpp_CConsole_printf_FUN_00441890(g_CConsolePtr,"Ladder dot : %f\n");
            in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
            core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                      ((CMotionController *)(in_stack_00000004 + 1),0x2b,1);
            in_stack_00000004[0x8d].create_event[0x48] = '\0';
            in_stack_00000004[0x8d].create_event[0x49] = '\0';
            in_stack_00000004[0x8d].create_event[0x4a] = '\0';
            in_stack_00000004[0x8d].create_event[0x4b] = '\0';
            auStack_70._4_4_ = this_ptr[2].location.position.z;
            auStack_70._0_4_ = 0.0;
            auStack_70._8_4_ = -1.5;
            pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (this_ptr,&local_28,(CVector3f *)auStack_70);
            fStack_30 = pCVar3->x - (in_stack_00000004->location).position.x;
            fStack_2c = pCVar3->y - (in_stack_00000004->location).position.y;
            piVar1 = &in_stack_00000004[0x17b].scale.y;
            local_28.x = pCVar3->z - (in_stack_00000004->location).position.z;
            if ((float *)piVar1 != &fStack_30) {
              *piVar1 = (int)fStack_30;
              in_stack_00000004[0x17b].scale.z = (int)fStack_2c;
              in_stack_00000004[0x17b].field19_0x114 = (int)local_28.x;
            }
            local_18 = fStack_9c - (in_stack_00000004->location).position.x;
            fStack_14 = fStack_98 - (in_stack_00000004->location).position.y;
            pCVar3 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_90,(CVector3f *)&local_18);
            in_stack_00000004[0x17b].field20_0x118 = (int)pCVar3->y;
            in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
            return 1;
          }
        }
      }
LAB_005c2488:
      local_1c = (float)((int)local_1c + 4);
    }
  }
  return 0;
}
