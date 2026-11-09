// Name: core_set.cpp_FUN_0053b460
// Address: 0053b460
// Address Range: [[0053b460, 0053b65d]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_0053b460(int param_1)

#include "nocturne.h"

void core_set_cpp_FUN_0053b460(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(uint *)(param_1 + 0x150fec) = 0;
  *(uint *)(param_1 + 0x152f30) = 0;
  *(uint *)(param_1 + 0x154e74) = 0;
  *(uint *)(param_1 + 0x158cfc) = 0;
  *(uint *)(param_1 + 0x14f0a8) = 0;
  iVar6 = 0;
  iVar5 = param_1;
  if (0 < *(int *)(param_1 + 0x14d164)) {
    do {
      iVar1 = *(int *)(iVar5 + 0x14d168);
      if ((*(int *)(iVar1 + 0xfc) != 0) || (*(int *)(iVar1 + 0xf8) != 0)) {
        *(int *)(param_1 + 0x158d00 + *(int *)(param_1 + 0x158cfc) * 4) = iVar1;
        *(int *)(param_1 + 0x158cfc) = *(int *)(param_1 + 0x158cfc) + 1;
      }
      uVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CCharacterClassInfo.name_hash);
      *(uint *)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) = uVar3;
      uVar2 = g_CEnemyClassInfo.name_hash;
      if (*(int *)(param_1 + 0x14f0ac + *(int *)(param_1 + 0x14f0a8) * 4) == 0) {
        uVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CWayPointClassInfo.name_hash);
        *(uint *)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) = uVar3;
        if (*(int *)(param_1 + 0x154e78 + *(int *)(param_1 + 0x154e74) * 4) != 0) {
          *(int *)(param_1 + 0x154e74) = *(int *)(param_1 + 0x154e74) + 1;
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CTriggerClassInfo.name_hash);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x174) == 4)) && (*(int *)(iVar4 + 0x304) != 0)) {
          *(int *)(param_1 + 0x152f34 + *(int *)(param_1 + 0x152f30) * 4) = iVar1;
          *(int *)(param_1 + 0x152f30) = *(int *)(param_1 + 0x152f30) + 1;
        }
      }
      else {
        *(int *)(param_1 + 0x14f0a8) = *(int *)(param_1 + 0x14f0a8) + 1;
        uVar3 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,uVar2);
        *(uint *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4) = uVar3;
        iVar4 = *(int *)(*(int *)(param_1 + 0x150fec) * 4 + param_1 + 0x150ff0);
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (((iVar4 == 0) &&
              (iVar4 = *(int *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4),
              iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x70))(iVar4), iVar4 == 0)) &&
             ((iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CBugsClassInfo.name_hash)
              , iVar4 == 0 &&
              (iVar4 = *(int *)(param_1 + 0x150ff0 + *(int *)(param_1 + 0x150fec) * 4),
              iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe0))(iVar4), iVar4 == 0)))) {
            *(int *)(param_1 + 0x152f34 + *(int *)(param_1 + 0x152f30) * 4) = iVar1;
            *(int *)(param_1 + 0x152f30) = *(int *)(param_1 + 0x152f30) + 1;
          }
          *(int *)(param_1 + 0x150fec) = *(int *)(param_1 + 0x150fec) + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14d164));
  }
  return;
}
