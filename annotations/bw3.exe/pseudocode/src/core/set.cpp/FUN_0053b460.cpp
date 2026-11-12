// Name: core_set.cpp_FUN_0053b460
// Address: 0053b460
// Address Range: [[0053b460, 0053b65d]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053b460(int param_1)

#include "nocturne.h"

void core_set_cpp_FUN_0053b460(int param_1)

{
  CDemonActor *actor_ptr;
  uint class_name_hash;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(uint *)(param_1 + 0x150fec) = 0;
  *(uint *)(param_1 + 0x152f30) = 0;
  *(uint *)(param_1 + 0x154e74) = 0;
  *(uint *)(param_1 + 0x158cfc) = 0;
  *(uint *)(param_1 + 0x14f0a8) = 0;
  iVar4 = 0;
  iVar3 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      actor_ptr = *(CDemonActor **)(iVar3 + 0x14d168);
      if ((actor_ptr->is_transparent != 0) || (actor_ptr->is_renderable != 0)) {
        *(CDemonActor **)(param_1 + 0x158d00 + *(int *)(param_1 + 0x158cfc) * 4) = actor_ptr;
        *(int *)(param_1 + 0x158cfc) = *(int *)(param_1 + 0x158cfc) + 1;
      }
      pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                         (actor_ptr,g_CCharacterClassInfo.name_hash);
      *(CDemonActor **)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) = pCVar1;
      class_name_hash = g_CEnemyClassInfo.name_hash;
      if (*(int *)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) == 0) {
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (actor_ptr,g_CWayPointClassInfo.name_hash);
        *(CDemonActor **)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) = pCVar1;
        if (*(int *)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) != 0) {
          *(int *)(param_1 + 0x154e74) = *(int *)(param_1 + 0x154e74) + 1;
        }
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                           (actor_ptr,g_CTriggerClassInfo.name_hash);
        if (((pCVar1 != (CDemonActor *)0x0) && (*(int *)(pCVar1[1].actor_name + 0x1c) == 4)) &&
           (pCVar1[2].orient_matrix.m[2].x != 0.0)) {
          *(CDemonActor **)(param_1 + 0x152f34 + *(int *)(param_1 + 0x152f30) * 4) = actor_ptr;
          *(int *)(param_1 + 0x152f30) = *(int *)(param_1 + 0x152f30) + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x14f0a8) = *(int *)(param_1 + 0x14f0a8) + 1;
        pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840(actor_ptr,class_name_hash);
        *(CDemonActor **)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4) = pCVar1;
        iVar2 = *(int *)(*(int *)(param_1 + 0x150fec) * 4 + param_1 + 0x150ff0);
        if (iVar2 != 0) {
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (((iVar2 == 0) &&
              (iVar2 = *(int *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4),
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x70))(iVar2), iVar2 == 0)) &&
             ((pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c840
                                  (actor_ptr,g_CBugsClassInfo.name_hash),
              pCVar1 == (CDemonActor *)0x0 &&
              (iVar2 = *(int *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4),
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe0))(iVar2), iVar2 == 0)))) {
            *(CDemonActor **)(param_1 + 0x152f34 + *(int *)(param_1 + 0x152f30) * 4) = actor_ptr;
            *(int *)(param_1 + 0x152f30) = *(int *)(param_1 + 0x152f30) + 1;
          }
          *(int *)(param_1 + 0x150fec) = *(int *)(param_1 + 0x150fec) + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x14d164));
  }
  return;
}
