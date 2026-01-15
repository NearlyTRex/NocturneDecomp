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
  int iVar5;
  CCharacter *in_stack_00000004;
  CBoundingBox3D local_80;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_44;
  uint uStack_40;
  float fStack_3c;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar1 = core_charactr_cpp_CCharacter_FUN_0042d360(in_stack_00000004);
  if (iVar1 == 0) {
    if (*(int *)(in_stack_00000004[2].cloth_data + 0x54c4) == 0) {
      iVar1 = 0;
      for (iVar5 = 0; iVar5 < (int)g_CDemonSetPtr->actor_list_ptr; iVar5 = iVar5 + 1) {
        pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                            g_CBoxActorClassInfo.name_hash);
        if (((pCVar2 != (CDemonActor *)0x0) && (pCVar2[2].field7_0x6c != 0)) &&
           (pCVar2[2].was_created == 0)) {
          (*pCVar2->vtable->getBoundingBox)(pCVar2,&local_80);
          fStack_68 = local_80.min.x + local_80.max.x;
          fStack_64 = local_80.min.y + local_80.max.y;
          CStack_50.x = fStack_68 * 0.5f;
          CStack_50.y = fStack_64 * 0.5f;
          fStack_60 = local_80.min.z + local_80.max.z;
          CStack_50.z = fStack_60 * 0.5f;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(pCVar2,&CStack_5c,&CStack_50);
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                    (&in_stack_00000004->base_actor,&CStack_38,&CStack_5c);
          fStack_20 = local_80.max.x - local_80.min.x;
          fStack_18 = local_80.max.z - local_80.min.z;
          fStack_44 = fStack_20 * 0.5f;
          fStack_3c = fStack_18 * 0.5f;
          uStack_40 = 0;
          fStack_1c = local_80.max.y - local_80.min.y;
          if (((CStack_38.z - SQRT(fStack_3c * fStack_3c + fStack_44 * fStack_44) <=
                (float)1.2) && (1.0 <= (double)CStack_38.y)) &&
             ((double)CStack_38.y <= 5)) {
            pCVar4 = core_vehicle_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                               (&CStack_2c,&CStack_38);
            fStack_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cd70(pCVar4->y);
            if (ABS(fStack_14) <= (float)0.61086523818055505) {
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
