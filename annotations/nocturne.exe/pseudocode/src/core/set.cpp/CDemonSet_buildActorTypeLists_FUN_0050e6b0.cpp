// Name: core_set.cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0
// Address: 0050e6b0
// Address Range: [[0050e6b0, 0050e81f]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(int param_1)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_buildActorTypeLists_FUN_0050e6b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(uint *)(param_1 + 0x150bf4) = 0;
  *(uint *)(param_1 + 0x152b38) = 0;
  *(uint *)(param_1 + 0x154a7c) = 0;
  *(uint *)(param_1 + 0x158904) = 0;
  *(uint *)(param_1 + 0x14ecb0) = 0;
  iVar5 = 0;
  iVar6 = param_1;
  if (0 < *(int *)(param_1 + 0x14cd6c)) {
    do {
      iVar1 = *(int *)(iVar6 + 0x14cd70);
      if ((*(int *)(iVar1 + 0xfc) != 0) || (*(int *)(iVar1 + 0xf8) != 0)) {
        *(int *)(param_1 + 0x158908 + *(int *)(param_1 + 0x158904) * 4) = iVar1;
        *(int *)(param_1 + 0x158904) = *(int *)(param_1 + 0x158904) + 1;
      }
      uVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (iVar1,g_CCharacterActorType_00765a60.name_hash);
      *(uint *)(param_1 + 0x14ecb4 + *(int *)(param_1 + 0x14ecb0) * 4) = uVar3;
      uVar2 = g_CEnemyActorType_01bcdebc.name_hash;
      if (*(int *)(param_1 + 0x14ecb4 + *(int *)(param_1 + 0x14ecb0) * 4) == 0) {
        uVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (iVar1,g_CWayPointActorType_02ddf514.name_hash);
        *(uint *)(param_1 + 0x154a80 + *(int *)(param_1 + 0x154a7c) * 4) = uVar3;
        if (*(int *)(param_1 + 0x154a80 + *(int *)(param_1 + 0x154a7c) * 4) != 0) {
          *(int *)(param_1 + 0x154a7c) = *(int *)(param_1 + 0x154a7c) + 1;
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (iVar1,g_CTriggerActorType_02dd1084.name_hash);
        if (((iVar4 != 0) && (*(int *)(iVar4 + 0x16c) == 4)) && (*(int *)(iVar4 + 0x2f8) != 0))
        goto LAB_0050e795;
      }
      else {
        *(int *)(param_1 + 0x14ecb0) = *(int *)(param_1 + 0x14ecb0) + 1;
        uVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar1,uVar2);
        *(uint *)(param_1 + 0x150bf8 + *(int *)(param_1 + 0x150bf4) * 4) = uVar3;
        if (*(int *)(param_1 + 0x150bf8 + *(int *)(param_1 + 0x150bf4) * 4) != 0) {
          *(int *)(param_1 + 0x150bf4) = *(int *)(param_1 + 0x150bf4) + 1;
LAB_0050e795:
          *(int *)(param_1 + 0x152b3c + *(int *)(param_1 + 0x152b38) * 4) = iVar1;
          *(int *)(param_1 + 0x152b38) = *(int *)(param_1 + 0x152b38) + 1;
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar5 < *(int *)(param_1 + 0x14cd6c));
  }
  return;
}
