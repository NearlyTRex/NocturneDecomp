// Name: FUN_00578cc0
// Address: 00578cc0
// Address Range: [[00578cc0, 00578f45]]
// Convention: unknown
// Signature: int FUN_00578cc0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00578cc0(uint param_1,int param_2)

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
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2c81dc4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2c81dcc) < 1)) {
    piStack_334 = (int *)param_2;
    pcStack_338 = "DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47b;
    piStack_33c = (int *)0x578cff;
    FUN_005030e0();
  }
  if (_DAT_02c81d94 == (int *)0x0) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - dSound not allocated?";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47c;
    pcStack_338 = (char *)0x578d2a;
    FUN_005030e0();
  }
  iVar5 = 1;
  iVar1 = 0x24;
  iVar3 = _DAT_02c82404;
  while (iVar3 != 0) {
    iVar5 = iVar5 + 1;
    if (0x45b < iVar1 + 0x24) break;
    iVar3 = *(int *)(&DAT_02c82404 + iVar1);
    iVar1 = iVar1 + 0x24;
  }
  if (0x1e < iVar5) {
    piStack_334 = (int *)"DirectSoundDevice::allocateSfx - no free buffers\n";
    pcStack_338 = PTR_DAT_00611100;
    piStack_33c = (int *)0x578e44;
    FUN_00445430();
    return 0;
  }
  iVar1 = param_2 * 0x18;
  piVar6 = (int *)(iVar1 + 0x2c81dc4);
  iVar2 = iVar5 * 0x24;
  piVar7 = (int *)(iVar2 + 0x2c823e0);
  for (iVar3 = *(int *)(iVar1 + 0x2c81dc8);
      (iVar3 != 0 && (*(int *)(iVar3 * 0x24 + 0x2c823e0) != *piVar6));
      iVar3 = *(int *)(iVar3 * 0x24 + 0x2c823f0)) {
  }
  if (iVar3 == 0) {
    *piVar7 = *piVar6;
    *(int *)(iVar2 + 0x2c823e8) = param_2;
    if (*(int *)(iVar1 + 0x2c81dc8) != 0) {
      *(int *)(*(int *)(iVar1 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar5;
    }
  }
  else {
    pcStack_338 = (char *)*piVar6;
    piStack_33c = _DAT_02c81d94;
    piStack_334 = piVar7;
    piStack_334 = (int *)(**(code **)(*_DAT_02c81d94 + 0x14))();
    if (piStack_334 != (int *)0x0) {
      pcStack_338 = (char *)0x578ea9;
      piStack_334 = (int *)FUN_00577500();
      pcStack_338 = "Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005bfb40(auStack_1a0);
      piStack_334 = (int *)auStack_1a0;
      pcStack_338 = (char *)0x578ed4;
      FUN_005773f0();
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar1 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar5;
    *(int *)(iVar2 + 0x2c823e8) = param_2;
  }
  uVar4 = *(uint *)(iVar1 + 0x2c81dc8);
  *(uint *)(iVar2 + 0x2c823ec) = 0;
  *(uint *)(iVar2 + 0x2c823f0) = uVar4;
  *(int *)(iVar1 + 0x2c81dc8) = iVar5;
  if (_DAT_02c81da0 != 0) {
    piStack_334 = (int *)(iVar2 + 0x2c823e4);
    piStack_33c = (int *)*piVar7;
    pcStack_338 = &DAT_00627870;
    iVar3 = (**(code **)*piStack_33c)();
    if (iVar3 != 0) {
      uVar4 = FUN_00577500(iVar3);
      FUN_005bfb40(&piStack_33c,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",uVar4);
      FUN_005773f0(&piStack_33c);
    }
    if (*(int *)(iVar2 + 0x2c823e4) == 0) {
      FUN_00577880(iVar5);
      return 0;
    }
  }
  *(uint *)(iVar2 + 0x2c823fc) = 0xffffffff;
  *(uint *)(iVar2 + 0x2c82400) = 0xffffffff;
  *(uint *)(iVar2 + 0x2c823f8) = 0;
  *(uint *)(iVar2 + 0x2c823f4) = 0;
  return iVar5;
}
