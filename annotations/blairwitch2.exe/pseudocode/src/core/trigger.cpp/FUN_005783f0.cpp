// Name: core_trigger.cpp_FUN_005783f0
// Address: 005783f0
// Address Range: [[005783f0, 005784c8]]
// Convention: unknown
// Signature: undefined4 core_trigger_cpp_FUN_005783f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

#include "nocturne.h"

uint core_trigger_cpp_FUN_005783f0(int param_1,uint param_2,uint param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1010 [1004];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (*(int *)(param_1 + 0x2d0) == 3) {
    core_actor_cpp_FUN_00408de0(param_1,param_3);
    fStack_1c = fStack_28;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffdc + (uint)bVar4 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar2 = (uint *)&stack0xffffffc0;
    puVar3 = &stack0xffffffa8;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
      puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    }
    if ((((fStack_58 <= fStack_1c) && (fStack_54 <= fStack_18)) && (fStack_50 <= fStack_14)) &&
       (((fStack_1c <= fStack_4c && (fStack_18 <= fStack_48)) && (fStack_14 <= fStack_44)))) {
      *param_4 = *(uint *)(param_1 + 0x458);
      return 0;
    }
  }
  return 0xbf800000;
}
