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
  int iVar5;
  BADSPACEBASE *in_ESP;
  float10 fVar6;
  CDemonActor *in_stack_00000004;
  uint uVar7;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  byte auStack_d4 [24];
  float fStack_bc;
  CVector3f CStack_b8;
  float fStack_ac;
  float fStack_a8;
  CLocation *pCStack_a4;
  float fStack_a0;
  float fStack_9c;
  CVector3f CStack_98;
  float fStack_8c;
  float fStack_88;
  CVector3f CStack_84;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_68;
  float fStack_58;
  float fStack_54;
  CVector3f CStack_50;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  CLocation *local_1c;
  CVector3f *local_18;
  int iStack_14;
  
  in_stack_00000004[0x17a].orient.heading = 0.0;
  fVar3 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((((float)0.98999999999999999 <= fVar3) && (in_stack_00000004[0x1b].field7_0x6c == 0)) &&
     (*(int *)(in_stack_00000004[0x1b].create_event + 0x38) == 0)) {
    local_1c = &in_stack_00000004->location;
    iStack_14 = 0;
    for (iVar5 = 0; iVar5 < (int)g_CDemonSetPtr->actor_list_ptr; iVar5 = iVar5 + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iStack_14),
                            g_CLadderClassInfo.name_hash);
      if ((this_ptr != (CDemonActor *)0x0) &&
         (ABS((in_stack_00000004->location).position.y -
              ((this_ptr->location).position.y + this_ptr[2].location.position.z)) <=
          (float)2)) {
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                  (this_ptr,(CVector3f *)(auStack_d4 + 0x14),local_18);
        dVar2 = (double)CStack_b8.y;
        if ((ABS(CStack_b8.y) <= (float)4) && (dVar2 <= 0.0)) {
          (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)auStack_d4);
          fStack_d8 = (float)((ulonglong)dVar2 >> 0x20);
          if (fStack_d8 < (float)auStack_d4._8_4_) {
            if (fStack_d8 + 1.0 < (float)auStack_d4._8_4_) goto LAB_005c2488;
            auStack_d4._8_4_ = fStack_d8;
          }
          if ((float)auStack_d4._8_4_ < fStack_e4) {
            if ((float)auStack_d4._8_4_ < fStack_e4 + (float)-1) goto LAB_005c2488;
            auStack_d4._8_4_ = fStack_e4;
          }
          fStack_78 = fStack_e4 + fStack_d8;
          CStack_98.z = fStack_78 * 0.5f;
          fStack_dc = SUB84 /* extract 2-byte value */(dVar2,0);
          fStack_70 = fStack_dc + (float)auStack_d4._4_4_;
          fStack_74 = fStack_e0 + (float)auStack_d4._0_4_;
          auStack_d4._16_4_ = fStack_70 * 0.5f;
          fStack_8c = fStack_74 * 0.5f;
          fStack_88 = (float)auStack_d4._16_4_;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (this_ptr,&CStack_84,(CVector3f *)(auStack_d4 + 8));
          if ((CVector3f *)(auStack_d4 + 0xc) != pCVar4) {
            auStack_d4._12_4_ = pCVar4->x;
            auStack_d4._16_4_ = pCVar4->y;
            auStack_d4._20_4_ = pCVar4->z;
          }
          auStack_d4._16_4_ = (float)auStack_d4._16_4_ + this_ptr[2].location.position.z;
          pCStack_a4 = (CLocation *)(in_stack_00000004->orient_matrix).m[0].z;
          fStack_a0 = (in_stack_00000004->orient_matrix).m[1].z;
          fStack_9c = (in_stack_00000004->orient_matrix).m[2].z;
          CStack_b8.z = (this_ptr->orient_matrix).m[0].z;
          fStack_ac = (this_ptr->orient_matrix).m[1].z;
          fStack_a8 = (this_ptr->orient_matrix).m[2].z;
          fVar6 = (float10)fcos((float10)0.261799387791667);
          fVar3 = ABS(fStack_9c * fStack_a8 +
                      (float)pCStack_a4 * CStack_b8.z + fStack_a0 * fStack_ac);
          uVar7 = (uint)((ulonglong)(double)fVar3 >> 0x20);
          CStack_40.z = fStack_a0;
          fStack_34 = CStack_b8.z;
          fStack_30 = fStack_ac;
          fStack_2c = fStack_a8;
          local_28 = fStack_9c;
          local_1c = pCStack_a4;
          if (fVar6 <= (float10)fVar3) {
            pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                               (in_stack_00000004,&CStack_68,&(this_ptr->location).position);
            if (0.0 < pCVar4->z) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",uVar7);
              in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2b,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              CStack_98.y = this_ptr[2].location.position.z;
              CStack_98.x = 0.0;
              CStack_98.z = -1.5;
              fStack_24 = CStack_98.y;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr,&CStack_50,&CStack_98);
              fStack_58 = pCVar4->x - (in_stack_00000004->location).position.x;
              fStack_54 = pCVar4->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              CStack_50.x = pCVar4->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_58) {
                *piVar1 = (int)fStack_58;
                in_stack_00000004[0x17b].scale.z = (int)fStack_54;
                in_stack_00000004[0x17b].field19_0x114 = (int)CStack_50.x;
              }
              CStack_40.x = (float)auStack_d4._16_4_ - (in_stack_00000004->location).position.x;
              CStack_40.y = (float)auStack_d4._20_4_ - (in_stack_00000004->location).position.y;
              CStack_40.z = fStack_bc - (in_stack_00000004->location).position.z;
              pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_b8,&CStack_40);
              in_stack_00000004[0x17b].field20_0x118 = (int)pCVar4->y;
              in_stack_00000004[0x17b].field21_0x11c = 0x3f800000;
              return 1;
            }
          }
        }
      }
LAB_005c2488:
      iStack_14 = iStack_14 + 4;
    }
  }
  return 0;
}
