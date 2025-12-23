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
  float in_stack_ffffff1c;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  byte auStack_d4 [28];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  CVector3f CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_90;
  byte auStack_8c [20];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f aCStack_68 [2];
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  CVector3f CStack_34;
  float local_28;
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
        dVar2 = (double)fStack_b4;
        if ((ABS(fStack_b4) <= (float)4) && (dVar2 <= 0.0)) {
          (*this_ptr->vtable->getBoundingBox)(this_ptr,(CBoundingBox3D *)auStack_d4);
          fStack_d8 = (float)((ulonglong)dVar2 >> 0x20);
          if (fStack_d8 < (float)auStack_d4._8_4_) {
            if (fStack_d8 + 1.0 < (float)auStack_d4._8_4_) goto LAB_005c2488;
            auStack_d4._8_4_ = fStack_d8;
          }
          fVar3 = (float)auStack_d4._8_4_;
          if ((in_stack_ffffff1c <= (float)auStack_d4._8_4_) ||
             (fVar3 = in_stack_ffffff1c,
             in_stack_ffffff1c + (float)-1 <= (float)auStack_d4._8_4_)) {
            auStack_d4._8_4_ = fVar3;
            fStack_78 = in_stack_ffffff1c + fStack_d8;
            fStack_90 = fStack_78 * 0.5f;
            fStack_dc = SUB84 /* extract 2-byte value */(dVar2,0);
            fStack_70 = fStack_dc + (float)auStack_d4._4_4_;
            fStack_74 = fStack_e0 + (float)auStack_d4._0_4_;
            auStack_d4._16_4_ = fStack_70 * 0.5f;
            auStack_8c._0_4_ = fStack_74 * 0.5f;
            auStack_8c._4_4_ = auStack_d4._16_4_;
            pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (this_ptr,(CVector3f *)(auStack_8c + 8),(CVector3f *)(auStack_d4 + 8)
                               );
            if ((CVector3f *)(auStack_d4 + 0xc) != pCVar4) {
              auStack_d4._12_4_ = pCVar4->x;
              auStack_d4._16_4_ = pCVar4->y;
              auStack_d4._20_4_ = pCVar4->z;
            }
            auStack_d4._16_4_ = (float)auStack_d4._16_4_ + this_ptr[2].location.position.z;
            CStack_ac.z = (in_stack_00000004->orient_matrix).m[0].z;
            fStack_a0 = (in_stack_00000004->orient_matrix).m[1].z;
            fStack_9c = (in_stack_00000004->orient_matrix).m[2].z;
            fStack_b0 = (this_ptr->orient_matrix).m[0].z;
            CStack_ac.x = (this_ptr->orient_matrix).m[1].z;
            CStack_ac.y = (this_ptr->orient_matrix).m[2].z;
            fVar6 = (float10)fcos((float10)0.261799387791667);
            fVar3 = ABS(fStack_9c * CStack_ac.y + CStack_ac.z * fStack_b0 + fStack_a0 * CStack_ac.x)
            ;
            uVar7 = (uint)((ulonglong)(double)fVar3 >> 0x20);
            fStack_38 = fStack_a0;
            CStack_34.x = fStack_b0;
            CStack_34.y = CStack_ac.x;
            CStack_34.z = CStack_ac.y;
            local_28 = fStack_9c;
            local_1c = (CLocation *)CStack_ac.z;
            if ((fVar6 <= (float10)fVar3) &&
               (pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                                   (in_stack_00000004,aCStack_68,&(this_ptr->location).position),
               0.0 < pCVar4->z)) {
              engine_console_cpp_CConsole_printf_FUN_00441890
                        (g_CConsolePtr,"Ladder dot : %f\n",uVar7);
              in_stack_00000004[0x17a].orient.heading = (float)this_ptr;
              core_motion_cpp_CMotionController_setDesiredState_FUN_0052db00
                        ((CMotionController *)(in_stack_00000004 + 1),0x2b,1);
              in_stack_00000004[0x8d].create_event[0x48] = '\0';
              in_stack_00000004[0x8d].create_event[0x49] = '\0';
              in_stack_00000004[0x8d].create_event[0x4a] = '\0';
              in_stack_00000004[0x8d].create_event[0x4b] = '\0';
              auStack_8c._4_4_ = this_ptr[2].location.position.z;
              auStack_8c._0_4_ = 0.0;
              auStack_8c._8_4_ = -1.5;
              local_18 = (CVector3f *)auStack_8c._4_4_;
              pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (this_ptr,&CStack_44,(CVector3f *)auStack_8c);
              fStack_4c = pCVar4->x - (in_stack_00000004->location).position.x;
              fStack_48 = pCVar4->y - (in_stack_00000004->location).position.y;
              piVar1 = &in_stack_00000004[0x17b].scale.y;
              CStack_44.x = pCVar4->z - (in_stack_00000004->location).position.z;
              if ((float *)piVar1 != &fStack_4c) {
                *piVar1 = (int)fStack_4c;
                in_stack_00000004[0x17b].scale.z = (int)fStack_48;
                in_stack_00000004[0x17b].field19_0x114 = (int)CStack_44.x;
              }
              CStack_34.x = fStack_b8 - (in_stack_00000004->location).position.x;
              CStack_34.y = fStack_b4 - (in_stack_00000004->location).position.y;
              CStack_34.z = fStack_b0 - (in_stack_00000004->location).position.z;
              pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                                 (&CStack_ac,&CStack_34);
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
