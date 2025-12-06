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
  float unaff_EBP;
  float unaff_EDI;
  int iVar6;
  CCharacter *in_stack_00000004;
  double dStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  byte auStack_40 [12];
  CVector3f CStack_34;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  
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
          (*pCVar2->vtable->getBoundingBox)(pCVar2,(CBoundingBox3D *)&stack0xffffff88);
          CStack_34.x = (SUB84 /* extract 2-byte value */(dStack_64,0) + fStack_58) * 0.5f;
          CStack_34.y = (fStack_60 + fStack_54) * 0.5f;
          CStack_34.z = (fStack_5c + fStack_50) * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                    (pCVar2,(CVector3f *)auStack_40,&CStack_34);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&in_stack_00000004->base_actor,(CVector3f *)&fStack_18,
                     (CVector3f *)(auStack_40 + 4));
          in_stack_00000004 = (CCharacter *)(fStack_50 - fStack_5c);
          fStack_20 = (float)in_stack_00000004 * 0.5f;
          fStack_18 = ((fStack_60 + fStack_54) - fStack_54) * 0.5f;
          uStack_1c = 0;
          if (((unaff_EDI - SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20) <=
                (float)1.2) && (dStack_64 = (double)unaff_EBP, 1.0 <= dStack_64)) &&
             (dStack_64 <= 5)) {
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               ((CVector3f *)&stack0xfffffff8,(CVector3f *)&stack0xffffffec);
            fStack_60 = (float)((ulonglong)dStack_64 >> 0x20);
            dStack_64 = (double)CONCAT44 /* combine 2-byte values */(fStack_60,pCVar4->y);
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
