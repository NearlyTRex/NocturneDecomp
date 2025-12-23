// Name: core_hero.cpp_FUN_004f3120
// Address: 004f3120
// Address Range: [[004f3120, 004f3345]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3120()

#include "nocturne.h"

/* Signature: byte actors_hero_hero.cpp_FUN_004f3120(uint param_1) */

uint core_hero_cpp_FUN_004f3120(void)

{
  int iVar1;
  CDemonActor *pCVar2;
  uint uVar3;
  CVector3f *pCVar4;
  float fVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  CCharacter *in_stack_00000004;
  CDemonActor *pCVar7;
  CBoundingBox3D *out_box;
  float fStack_74;
  float fStack_70;
  byte auStack_6c [20];
  byte auStack_58 [12];
  float fStack_4c;
  float fStack_48;
  float fStack_3c;
  uint uStack_38;
  byte auStack_34 [8];
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
      iVar1 = 0;
      for (iVar6 = 0; iVar6 < (int)g_CDemonSetPtr->actor_list_ptr; iVar6 = iVar6 + 1) {
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                            g_CBoxActorClassInfo.name_hash);
        if (((pCVar2 != (CDemonActor *)0x0) && (pCVar2[2].field7_0x6c != 0)) &&
           (pCVar2[2].was_created == 0)) {
          out_box = (CBoundingBox3D *)auStack_6c;
          fVar5 = 7.27293e-39;
          pCVar7 = pCVar2;
          (*pCVar2->vtable->getBoundingBox)(pCVar2,out_box);
          auStack_6c._4_4_ = fVar5 + fStack_74;
          auStack_6c._8_4_ = (float)pCVar7 + fStack_70;
          auStack_58._8_4_ = (float)auStack_6c._4_4_ * 0.5f;
          fStack_4c = (float)auStack_6c._8_4_ * 0.5f;
          auStack_6c._12_4_ = (float)out_box + (float)auStack_6c._0_4_;
          fStack_48 = (float)auStack_6c._12_4_ * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (pCVar2,(CVector3f *)(auStack_6c + 0x10),(CVector3f *)(auStack_58 + 8));
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&in_stack_00000004->base_actor,(CVector3f *)auStack_34,(CVector3f *)auStack_58)
          ;
          fStack_18 = (float)auStack_6c._0_4_ - (float)out_box;
          fStack_3c = fStack_18 * 0.5f;
          auStack_34._0_4_ = ((float)auStack_6c._8_4_ - fStack_70) * 0.5f;
          uStack_38 = 0;
          fStack_14 = (float)auStack_6c._4_4_ - fStack_74;
          if (((fStack_28 -
                SQRT((float)auStack_34._0_4_ * (float)auStack_34._0_4_ + fStack_3c * fStack_3c) <=
                (float)1.2) && (1.0 <= (double)fStack_2c)) &&
             ((double)fStack_2c <= 5)) {
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_24,(CVector3f *)(auStack_34 + 4));
            fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
            if (ABS(fVar5) <= (float)0.61086523818055505) {
              *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) = pCVar2;
              break;
            }
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) == (CDemonActor *)0x0)
      goto LAB_004f31b0;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                          g_CBoxActorClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        pCVar2[2].was_created = (int)in_stack_00000004;
        uVar3 = (*pCVar2->vtable->playAmbientSound)(pCVar2,pCVar2[2].create_event + 4);
        *(uint *)pCVar2[2].create_event = uVar3;
      }
    }
    uVar3 = 1;
  }
  else {
LAB_004f31b0:
    uVar3 = 0;
  }
  return uVar3;
}
