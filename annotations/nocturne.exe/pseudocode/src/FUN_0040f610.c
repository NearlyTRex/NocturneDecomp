// Name: FUN_0040f610
// Address: 0040f610
// Address Range: [[0040f610, 0040f734]]
// Convention: unknown
// Signature: void FUN_0040f610(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040f610(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  byte local_48 [4];
  uint local_44;
  uint local_18;
  int local_14;
  int local_10;
  
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x2cc);
  iVar1 = _DAT_01cae0e8;
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0x334) = 1;
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    *(uint *)(param_1 + 0x20) = *(uint *)(iVar1 + 0x20);
    *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
    *(uint *)(param_1 + 0x28) = *(uint *)(iVar1 + 0x28);
    *(uint *)(param_1 + 0x2c) = *(uint *)(iVar1 + 0x2c);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x330) + *(float *)(param_1 + 0x24);
  }
  if (*(int *)(param_1 + 0x334) != 0) {
    fVar2 = *(float *)(param_1 + 0x338) - param_2 * (float)32;
    *(float *)(param_1 + 0x338) = fVar2;
    iVar1 = _DAT_01cae0e8;
    *(float *)(param_1 + 0x24) = fVar2 + *(float *)(param_1 + 0x24);
    iVar1 = *(int *)(iVar1 * 4 + 0x1cae0d8);
    if (*(float *)(param_1 + 0x24) < *(float *)(iVar1 + 0x24)) {
      *(uint *)(param_1 + 0x24) = *(uint *)(iVar1 + 0x24);
      *(uint *)(param_1 + 0x338) = 0;
    }
    if (*(float *)(param_1 + 0x24) <
        *(float *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x24) + (float)6) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_48);
      local_44 = 0x461c3f9a;
      local_18 = 8;
      local_14 = param_1;
      iVar1 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
      local_10 = param_1;
      (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,local_48);
      return;
    }
  }
  return;
}
