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
  double dVar2;
  float fVar3;
  CDemonActor *this_ptr;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  CDemonActor *in_stack_00000004;
  uint uStack_f4;
  uint local_f0;
  CBoundingBox3D CStack_e4;
  byte auStack_cc [8];
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  CVector3f *pCStack_24;
  float local_20;
  int local_1c;
  int local_18;
  
  in_stack_00000004[0x17a].orient.heading = 0.0;
  fVar3 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fVar3) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    pCStack_24 = &(in_stack_00000004->location).position;
    local_1c = 0;
    for (local_18 = 0; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_1c),
                            g_CLadderClassInfo.name_hash);
      if ((this_ptr != (CDemonActor *)0x0) &&
         (ABS((in_stack_00000004->location).position.y -
              ((this_ptr->location).position.y + this_ptr[2].location.position.z)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr,(CVector3f *)auStack_cc,pCStack_24);
        if ((ABS(fStack_c4) <= (float)4) && (fStack_c4 <= 0.0)) {
          (*this_ptr->vtable->getBoundingBox)(this_ptr,&CStack_e4);
          if (CStack_e4.max.x < (float)auStack_cc._0_4_) {
            if (CStack_e4.max.x + 1.0 < (float)auStack_cc._0_4_) goto LAB_005c2488;
            auStack_cc._0_4_ = CStack_e4.max.x;
          }
          if ((float)auStack_cc._0_4_ < CStack_e4.min.x) {
            if ((float)auStack_cc._0_4_ < CStack_e4.min.x + (float)-1)
            goto LAB_005c2488;
            auStack_cc._0_4_ = CStack_e4.min.x;
          }
          fStack_78 = CStack_e4.min.x + CStack_e4.max.x;
          fStack_90 = fStack_78 * 0.5f;
          fStack_70 = CStack_e4.min.z + CStack_e4.max.z;
          fStack_74 = CStack_e4.min.y + CStack_e4.max.y;
          fStack_c4 = fStack_70 * 0.5f;
          fStack_8c = fStack_74 * 0.5f;
          fStack_88 = fStack_c4;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr,&CStack_84,(CVector3f *)auStack_cc);
          if ((CVector3f *)(auStack_cc + 4) != pCVar4) {
            auStack_cc._0_4_ = pCVar4->x;
            auStack_cc._4_4_ = pCVar4->y;
            fStack_c4 = pCVar4->z;
          }
          auStack_cc._4_4_ = (float)auStack_cc._4_4_ + this_ptr[2].location.position.z;
          fStack_a8 = (in_stack_00000004->orient_matrix).m[0].z;
          fStack_a4 = (in_stack_00000004->orient_matrix).m[1].z;
          fStack_a0 = (in_stack_00000004->orient_matrix).m[2].z;
          fStack_b4 = (this_ptr->orient_matrix).m[0].z;
          fStack_b0 = (this_ptr->orient_matrix).m[1].z;
          fStack_ac = (this_ptr->orient_matrix).m[2].z;
          fVar5 = (float10)fcos((float10)0.261799387791667);
          fVar3 = ABS(fStack_a0 * fStack_ac + fStack_a8 * fStack_b4 + fStack_a4 * fStack_b0);
          dVar2 = (double)fVar3;
          fStack_3c = fStack_a4;
          fStack_38 = fStack_b4;
          fStack_34 = fStack_b0;
          fStack_30 = fStack_ac;
          fStack_2c = fStack_a0;
          local_20 = fStack_a8;
          if (fVar5 <= (float10)fVar3) {
            pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (in_stack_00000004,&CStack_6c,&(this_ptr->location).position);
            if (0.0 < pCVar4->z) {
              local_f0 = (uint)((ulonglong)dVar2 >> 0x20);
              uStack_f4 = SUB84 /* extract 2-byte value */(dVar2,0);
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",uStack_f4,local_f0);
              in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2b,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              CStack_9c.y = this_ptr[2].location.position.z;
              CStack_9c.x = 0.0;
              CStack_9c.z = -1.5;
              local_28 = CStack_9c.y;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr,&CStack_54,&CStack_9c);
              fStack_60 = pCVar4->x - (in_stack_00000004->location).position.x;
              fStack_5c = pCVar4->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              fStack_58 = pCVar4->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_60) {
                *piVar1 = (int)fStack_60;
                in_stack_00000004[0x17b].scale.z = (int)fStack_5c;
                in_stack_00000004[0x17b].field19_0x114 = (int)fStack_58;
              }
              CStack_48.x = (float)auStack_cc._0_4_ - (in_stack_00000004->location).position.x;
              CStack_48.y = (float)auStack_cc._4_4_ - (in_stack_00000004->location).position.y;
              CStack_48.z = fStack_c4 - (in_stack_00000004->location).position.z;
              pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_c0,&CStack_48);
              in_stack_00000004[0x17b].field20_0x118 = (int)pCVar4->y;
              in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
              return 1;
            }
          }
        }
      }
LAB_005c2488:
      local_1c = local_1c + 4;
    }
  }
  return 0;
}
