// Name: core_bugs.cpp_FUN_00425ee0
// Address: 00425ee0
// Address Range: [[00425ee0, 0042602c]]
// Convention: unknown
// Signature: undefined4 core_bugs_cpp_FUN_00425ee0(int param_1,float param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_bugs_cpp_FUN_00425ee0(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  uint local_10;
  
  fVar7 = ((float10)param_3 - (float10)*(float *)(param_1 + 0x19d9c)) *
          ((float10)1 / (float10)_DAT_005fd228);
  fVar6 = (float10)(float)(((float10)param_2 - (float10)*(float *)(param_1 + 0x19d98)) *
                          ((float10)1 / (float10)_DAT_005fd228));
  round();
  round();
  local_10 = (int)ROUND(fVar6);
  iVar2 = (int)ROUND(fVar7);
  if (local_10 < 0) {
    iVar5 = 0;
    local_10 = 0;
  }
  else if (local_10 < 0xb) {
    iVar5 = local_10 + 1;
  }
  else {
    iVar5 = 0xb;
    local_10 = 0xb;
  }
  iVar1 = param_1 + local_10 * 0x30;
  param_1 = param_1 + iVar5 * 0x30;
  if (iVar2 < 0) {
    uVar3 = *(uint *)(param_1 + 0x12c64);
    uVar4 = *(uint *)(iVar1 + 0x12c64);
  }
  else {
    if (iVar2 < 0xb) {
      uVar3 = core_bugs_cpp_maxFloat_FUN_00428150
                        (*(uint *)(iVar1 + 0x12c64 + iVar2 * 4),
                         *(uint *)(param_1 + iVar2 * 4 + 0x12c64));
      uVar4 = core_bugs_cpp_maxFloat_FUN_00428150
                        (*(uint *)(iVar1 + 0x12c68 + iVar2 * 4),
                         *(uint *)(param_1 + 0x12c68 + iVar2 * 4));
      uVar3 = core_bugs_cpp_maxFloat_FUN_00428150(uVar3,uVar4);
      return uVar3;
    }
    uVar3 = *(uint *)(param_1 + 0x12c90);
    uVar4 = *(uint *)(iVar1 + 0x12c90);
  }
  uVar3 = core_bugs_cpp_maxFloat_FUN_00428150(uVar4,uVar3);
  return uVar3;
}
