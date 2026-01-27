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
  int iVar6;
  CCharacter *in_stack_00000004;
  double local_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  uint uStack_38;
  float fStack_34;
  CVector3f CStack_30;
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
      iVar6 = 0;
      iVar1 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) break;
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                            g_CBoxActorClassInfo.name_hash);
        if (((pCVar2 != (CDemonActor *)0x0) && (pCVar2[2].unk1 != 0)) &&
           (pCVar2[2].was_created == 0)) {
          (*((pCVar2->vtable)._ub)->getBoundingBox)(pCVar2,(CBoundingBox3D *)&local_80);
          fStack_60 = fStack_78 + fStack_6c;
          fStack_5c = fStack_74 + fStack_68;
          CStack_48.x = fStack_60 * 0.5f;
          CStack_48.y = fStack_5c * 0.5f;
          fStack_58 = fStack_70 + fStack_64;
          CStack_48.z = fStack_58 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_54,&CStack_48);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&in_stack_00000004->base,&CStack_30,&CStack_54);
          fStack_18 = fStack_6c - fStack_78;
          fStack_3c = fStack_18 * 0.5f;
          fStack_34 = (fStack_64 - fStack_70) * 0.5f;
          uStack_38 = 0;
          fStack_14 = fStack_68 - fStack_74;
          if (((CStack_30.z - SQRT(fStack_34 * fStack_34 + fStack_3c * fStack_3c) <=
                (float)1.2) && (local_80 = (double)CStack_30.y, 1.0 <= local_80)) &&
             (local_80 <= 5)) {
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_24,&CStack_30);
            fVar5 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
            if (ABS(fVar5) <= (float)0.61086523818055505) {
              *(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) = pCVar2;
              break;
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar1 = iVar1 + 4;
      }
      if (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4) == (CDemonActor *)0x0)
      goto LAB_004f31b0;
      pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(in_stack_00000004[2].cloth_data + 0x54c4),
                          g_CBoxActorClassInfo.name_hash);
      if (pCVar2 != (CDemonActor *)0x0) {
        pCVar2[2].was_created = (int)in_stack_00000004;
        uVar3 = (*((pCVar2->vtable)._ub)->playAmbientSound)(pCVar2,pCVar2[2].create_event + 4);
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
