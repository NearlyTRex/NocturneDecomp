// Name: sound_snddx.cpp_FUN_00578cc0
// Address: 00578cc0
// Address Range: [[00578cc0, 00578f45]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00578cc0(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_00578cc0(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piStack_33c;
  CConsole *pCStack_338;
  byte auStack_1a0 [400];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2c81dc4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2c81dcc) < 1)) {
    pCStack_338 = (CConsole *)"DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47b;
    piStack_33c = (int *)0x578cff;
    core_main_c_FUN_005030e0();
  }
  if (_DAT_02c81d94 == (int *)0x0) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47c;
    pCStack_338 = (CConsole *)0x578d2a;
    core_main_c_FUN_005030e0();
  }
  iVar7 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_02c82404;
  while (iVar1 != 0) {
    iVar7 = iVar7 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_02c82404 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar7) {
    pCStack_338 = g_CConsolePtr;
    piStack_33c = (int *)0x578e44;
    engine_console_cpp_FUN_00445430();
    return 0;
  }
  iVar3 = param_2 * 0x18;
  piVar8 = (int *)(iVar3 + 0x2c81dc4);
  iVar4 = iVar7 * 0x24;
  piVar9 = (int *)(iVar4 + 0x2c823e0);
  for (iVar1 = *(int *)(iVar3 + 0x2c81dc8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x2c823e0) != *piVar8));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x2c823f0)) {
  }
  if (iVar1 == 0) {
    *piVar9 = *piVar8;
    *(int *)(iVar4 + 0x2c823e8) = param_2;
    if (*(int *)(iVar3 + 0x2c81dc8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar7;
    }
  }
  else {
    pCStack_338 = (CConsole *)*piVar8;
    piStack_33c = _DAT_02c81d94;
    uVar5 = (**(code **)(*_DAT_02c81d94 + 0x14))();
    if (uVar5 != 0) {
      pCStack_338 = (CConsole *)0x578ea9;
      sound_snddx_cpp_FUN_00577500(uVar5);
      pCStack_338 = (CConsole *)"Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005bfb40(auStack_1a0);
      pCStack_338 = (CConsole *)0x578ed4;
      sound_sndmain_cpp_FUN_005773f0();
      return 0;
    }
    if (*piVar9 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar7;
    *(int *)(iVar4 + 0x2c823e8) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x2c81dc8);
  *(uint *)(iVar4 + 0x2c823ec) = 0;
  *(uint *)(iVar4 + 0x2c823f0) = uVar2;
  *(int *)(iVar3 + 0x2c81dc8) = iVar7;
  if (_DAT_02c81da0 != 0) {
    piStack_33c = (int *)*piVar9;
    pCStack_338 = (CConsole *)&DAT_00627870;
    uVar5 = (**(code **)*piStack_33c)();
    if (uVar5 != 0) {
      pcVar6 = sound_snddx_cpp_FUN_00577500(uVar5);
      FUN_005bfb40
                (&piStack_33c,"DirectSux: Unable to %s.  (%s)","get DirectSound3DBuffer interface from sfx secondary buffer",
                 pcVar6);
      sound_sndmain_cpp_FUN_005773f0(&piStack_33c);
    }
    if (*(int *)(iVar4 + 0x2c823e4) == 0) {
      sound_snddx_cpp_FUN_00577880(iVar7);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x2c823fc) = 0xffffffff;
  *(uint *)(iVar4 + 0x2c82400) = 0xffffffff;
  *(uint *)(iVar4 + 0x2c823f8) = 0;
  *(uint *)(iVar4 + 0x2c823f4) = 0;
  return iVar7;
}
