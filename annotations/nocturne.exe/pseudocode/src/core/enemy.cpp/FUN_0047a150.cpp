// Name: core_enemy.cpp_FUN_0047a150
// Address: 0047a150
// Address Range: [[0047a150, 0047a1cb]]
// Convention: unknown
// Signature: int core_enemy_cpp_FUN_0047a150(undefined4 param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_enemy_cpp_FUN_0047a150(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar5 = 0;
  uVar2 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00409fa0(param_1);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(0x01E57284 + 0x150bf4) <= iVar6) break;
    iVar1 = *(int *)(iVar5 + 0x150bf8 + 0x01E57284);
    iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0(iVar1,uVar2);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0x104))(iVar1);
      if ((iVar3 == 0) && (*(int *)(iVar1 + 0xbca4) == *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8))) {
        iVar4 = iVar4 + 1;
      }
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  }
  return iVar4;
}
