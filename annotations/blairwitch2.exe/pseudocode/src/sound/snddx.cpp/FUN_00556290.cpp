// Name: FUN_00556290
// Address: 00556290
// Address Range: [[00556290, 00556515]]
// Convention: unknown
// Signature: int FUN_00556290(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00556290(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piStack_33c;
  char *pcStack_338;
  int *piStack_334;
  byte auStack_1a0 [400];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x264a5fc) < 1)) {
    piStack_334 = (int *)param_2;
    pcStack_338 = "DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47b;
    piStack_33c = (int *)0x5562cf;
    FUN_004e4500();
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - dSound not allocated?";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47c;
    pcStack_338 = (char *)0x5562fa;
    FUN_004e4500();
  }
  iVar5 = 1;
  iVar1 = 0x24;
  iVar3 = _DAT_0264ac34;
  while (iVar3 != 0) {
    iVar5 = iVar5 + 1;
    if (0x45b < iVar1 + 0x24) break;
    iVar3 = *(int *)(&DAT_0264ac34 + iVar1);
    iVar1 = iVar1 + 0x24;
  }
  if (0x1e < iVar5) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - no free buffers\n";
    pcStack_338 = PTR_DAT_00609ed0;
    piStack_33c = (int *)0x556414;
    FUN_00436710();
    return 0;
  }
  iVar1 = param_2 * 0x18;
  piVar6 = (int *)(iVar1 + 0x264a5f4);
  iVar2 = iVar5 * 0x24;
  piVar7 = (int *)(iVar2 + 0x264ac10);
  for (iVar3 = *(int *)(iVar1 + 0x264a5f8);
      (iVar3 != 0 && (*(int *)(iVar3 * 0x24 + 0x264ac10) != *piVar6));
      iVar3 = *(int *)(iVar3 * 0x24 + 0x264ac20)) {
  }
  if (iVar3 == 0) {
    *piVar7 = *piVar6;
    *(int *)(iVar2 + 0x264ac18) = param_2;
    if (*(int *)(iVar1 + 0x264a5f8) != 0) {
      *(int *)(*(int *)(iVar1 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar5;
    }
  }
  else {
    pcStack_338 = (char *)*piVar6;
    piStack_33c = _DAT_0264a5c4;
    piStack_334 = piVar7;
    piStack_334 = (int *)(**(code **)(*_DAT_0264a5c4 + 0x14))();
    if (piStack_334 != (int *)0x0) {
      pcStack_338 = (char *)0x556479;
      piStack_334 = (int *)FUN_00554ad0();
      pcStack_338 = "Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005b7790(auStack_1a0);
      piStack_334 = (int *)auStack_1a0;
      pcStack_338 = (char *)0x5564a4;
      FUN_005549c0();
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar1 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar5;
    *(int *)(iVar2 + 0x264ac18) = param_2;
  }
  uVar4 = *(uint *)(iVar1 + 0x264a5f8);
  *(uint *)(iVar2 + 0x264ac1c) = 0;
  *(uint *)(iVar2 + 0x264ac20) = uVar4;
  *(int *)(iVar1 + 0x264a5f8) = iVar5;
  if (_DAT_0264a5d0 != 0) {
    piStack_334 = (int *)(iVar2 + 0x264ac14);
    piStack_33c = (int *)*piVar7;
    pcStack_338 = &DAT_00621070;
    iVar3 = (**(code **)*piStack_33c)();
    if (iVar3 != 0) {
      uVar4 = FUN_00554ad0(iVar3);
      FUN_005b7790(&piStack_33c,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",uVar4);
      FUN_005549c0(&piStack_33c);
    }
    if (*(int *)(iVar2 + 0x264ac14) == 0) {
      FUN_00554e50(iVar5);
      return 0;
    }
  }
  *(uint *)(iVar2 + 0x264ac2c) = 0xffffffff;
  *(uint *)(iVar2 + 0x264ac30) = 0xffffffff;
  *(uint *)(iVar2 + 0x264ac28) = 0;
  *(uint *)(iVar2 + 0x264ac24) = 0;
  return iVar5;
}
