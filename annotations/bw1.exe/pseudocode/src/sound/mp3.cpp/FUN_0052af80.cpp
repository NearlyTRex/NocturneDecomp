// Name: FUN_0052af80
// Address: 0052af80
// Address Range: [[0052af80, 0052b0fe]]
// Convention: unknown
// Signature: void FUN_0052af80(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052af80(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  int local_68 [4];
  int local_58;
  byte *local_38 [4];
  uint local_28;
  uint local_1c;
  uint local_18;
  int local_14;
  
  FUN_0052b100(param_1);
  piVar1 = (int *)(param_1 + 0x5320);
  local_18 = 0x1000;
  local_14 = param_2;
  local_1c = param_3;
  if (*piVar1 != 0) {
    FUN_005c0d10(*piVar1);
    *piVar1 = 0;
  }
  if (*(int *)(param_1 + 0x5324) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x5324));
    *(uint *)(param_1 + 0x5324) = 0;
  }
  *piVar1 = local_14;
  uVar2 = FUN_005c2e90(local_14);
  *(uint *)(param_1 + 0x5340) = uVar2;
  *(uint *)(param_1 + 0x5344) = local_1c;
  *(uint *)(param_1 + 0x5328) = local_18;
  iVar3 = FUN_005c08d0(local_18);
  *(int *)(param_1 + 0x5324) = iVar3;
  if (iVar3 == 0) {
    _DAT_01d1d400 = "..\\sound\\mp3.cpp";
    _DAT_01d1d404 = 0x23d;
    FUN_005030e0("Out of memory.  File: %s",&DAT_01d404c8);
  }
  FUN_005c170c(*piVar1,*(uint *)(param_1 + 0x5340),0);
  *(uint *)(param_1 + 0x5330) = 0;
  *(uint *)(param_1 + 0x5334) = 0;
  *(uint *)(param_1 + 0x532c) = 0;
  *(uint *)(param_1 + 0x5338) = 0;
  *(uint *)(param_1 + 0x533c) = 0;
  *(uint *)(param_1 + 0x5348) = *(uint *)(param_1 + 0x5344);
  FUN_00525e70(param_1 + 0x5320,0xfff,0xc);
  local_38[0] = (byte *)local_68;
  FUN_00526340(param_1 + 0x5320,local_38);
  FUN_00525840(local_38);
  fVar4 = (float10)*(double *)(&DAT_006202e8 + local_58 * 8 + local_68[0] * 0x20) *
          (float10)_DAT_005eb58e;
  FUN_005c03a0(0);
  *(int *)(param_1 + 0x100) = (int)ROUND(fVar4);
  *(uint *)(param_1 + 0x104) = local_28;
  FUN_0052b2b0(param_1);
  return;
}
