// Name: FUN_0055be30
// Address: 0055be30
// Address Range: [[0055be30, 0055c0b5]]
// Convention: unknown
// Signature: int FUN_0055be30(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0055be30(uint param_1,int param_2)

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
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2cf49fc) < 1)) {
    piStack_334 = (int *)param_2;
    pcStack_338 = "DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x472;
    piStack_33c = (int *)0x55be6f;
    FUN_004e4330();
  }
  if (_DAT_02cf49c4 == (int *)0x0) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - dSound not allocated?";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x473;
    pcStack_338 = (char *)0x55be9a;
    FUN_004e4330();
  }
  iVar5 = 1;
  iVar1 = 0x24;
  iVar3 = _DAT_02cf5030;
  while (iVar3 != 0) {
    iVar5 = iVar5 + 1;
    if (0x45b < iVar1 + 0x24) break;
    iVar3 = *(int *)(&DAT_02cf5030 + iVar1);
    iVar1 = iVar1 + 0x24;
  }
  if (0x1e < iVar5) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - no free buffers\n";
    pcStack_338 = PTR_DAT_005f1690;
    piStack_33c = (int *)0x55bfb4;
    FUN_00441ff0();
    return 0;
  }
  iVar1 = param_2 * 0x18;
  piVar6 = (int *)(iVar1 + 0x2cf49f4);
  iVar2 = iVar5 * 0x24;
  piVar7 = (int *)(iVar2 + 0x2cf500c);
  for (iVar3 = *(int *)(iVar1 + 0x2cf49f8);
      (iVar3 != 0 && (*(int *)(iVar3 * 0x24 + 0x2cf500c) != *piVar6));
      iVar3 = *(int *)(iVar3 * 0x24 + 0x2cf501c)) {
  }
  if (iVar3 == 0) {
    *piVar7 = *piVar6;
    *(int *)(iVar2 + 0x2cf5014) = param_2;
    if (*(int *)(iVar1 + 0x2cf49f8) != 0) {
      *(int *)(*(int *)(iVar1 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar5;
    }
  }
  else {
    pcStack_338 = (char *)*piVar6;
    piStack_33c = _DAT_02cf49c4;
    piStack_334 = piVar7;
    piStack_334 = (int *)(**(code **)(*_DAT_02cf49c4 + 0x14))();
    if (piStack_334 != (int *)0x0) {
      pcStack_338 = (char *)0x55c019;
      piStack_334 = (int *)FUN_0055a670();
      pcStack_338 = "Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005a28c0(auStack_1a0);
      piStack_334 = (int *)auStack_1a0;
      pcStack_338 = (char *)0x55c044;
      FUN_0055a560();
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar1 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar5;
    *(int *)(iVar2 + 0x2cf5014) = param_2;
  }
  uVar4 = *(uint *)(iVar1 + 0x2cf49f8);
  *(uint *)(iVar2 + 0x2cf5018) = 0;
  *(uint *)(iVar2 + 0x2cf501c) = uVar4;
  *(int *)(iVar1 + 0x2cf49f8) = iVar5;
  if (_DAT_02cf49d0 != 0) {
    piStack_334 = (int *)(iVar2 + 0x2cf5010);
    piStack_33c = (int *)*piVar7;
    pcStack_338 = &DAT_00608bb8;
    iVar3 = (**(code **)*piStack_33c)();
    if (iVar3 != 0) {
      uVar4 = FUN_0055a670(iVar3);
      FUN_005a28c0(&piStack_33c,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",uVar4);
      FUN_0055a560(&piStack_33c);
    }
    if (*(int *)(iVar2 + 0x2cf5010) == 0) {
      FUN_0055a9f0(iVar5);
      return 0;
    }
  }
  *(uint *)(iVar2 + 0x2cf5028) = 0xffffffff;
  *(uint *)(iVar2 + 0x2cf502c) = 0xffffffff;
  *(uint *)(iVar2 + 0x2cf5024) = 0;
  *(uint *)(iVar2 + 0x2cf5020) = 0;
  return iVar5;
}
