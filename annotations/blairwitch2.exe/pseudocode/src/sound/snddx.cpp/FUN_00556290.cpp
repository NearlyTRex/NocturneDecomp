// Name: sound_snddx.cpp_FUN_00556290
// Address: 00556290
// Address Range: [[00556290, 00556515]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_00556290(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_00556290(uint param_1,int param_2)

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
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x264a5fc) < 1)) {
    pCStack_338 = (CConsole *)"DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47b;
    piStack_33c = (int *)0x5562cf;
    core_main_c_FUN_004e4500();
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47c;
    pCStack_338 = (CConsole *)0x5562fa;
    core_main_c_FUN_004e4500();
  }
  iVar7 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_0264ac34;
  while (iVar1 != 0) {
    iVar7 = iVar7 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_0264ac34 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar7) {
    pCStack_338 = g_CConsolePtr;
    piStack_33c = (int *)0x556414;
    engine_console_cpp_FUN_00436710();
    return 0;
  }
  iVar3 = param_2 * 0x18;
  piVar8 = (int *)(iVar3 + 0x264a5f4);
  iVar4 = iVar7 * 0x24;
  piVar9 = (int *)(iVar4 + 0x264ac10);
  for (iVar1 = *(int *)(iVar3 + 0x264a5f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x264ac10) != *piVar8));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x264ac20)) {
  }
  if (iVar1 == 0) {
    *piVar9 = *piVar8;
    *(int *)(iVar4 + 0x264ac18) = param_2;
    if (*(int *)(iVar3 + 0x264a5f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar7;
    }
  }
  else {
    pCStack_338 = (CConsole *)*piVar8;
    piStack_33c = _DAT_0264a5c4;
    uVar5 = (**(code **)(*_DAT_0264a5c4 + 0x14))();
    if (uVar5 != 0) {
      pCStack_338 = (CConsole *)0x556479;
      sound_snddx_cpp_FUN_00554ad0(uVar5);
      pCStack_338 = (CConsole *)"Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005b7790(auStack_1a0);
      pCStack_338 = (CConsole *)0x5564a4;
      sound_sndmain_cpp_FUN_005549c0();
      return 0;
    }
    if (*piVar9 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar7;
    *(int *)(iVar4 + 0x264ac18) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x264a5f8);
  *(uint *)(iVar4 + 0x264ac1c) = 0;
  *(uint *)(iVar4 + 0x264ac20) = uVar2;
  *(int *)(iVar3 + 0x264a5f8) = iVar7;
  if (_DAT_0264a5d0 != 0) {
    piStack_33c = (int *)*piVar9;
    pCStack_338 = (CConsole *)&DAT_00621070;
    uVar5 = (**(code **)*piStack_33c)();
    if (uVar5 != 0) {
      pcVar6 = sound_snddx_cpp_FUN_00554ad0(uVar5);
      FUN_005b7790
                (&piStack_33c,"DirectSux: Unable to %s.  (%s)","get DirectSound3DBuffer interface from sfx secondary buffer",
                 pcVar6);
      sound_sndmain_cpp_FUN_005549c0(&piStack_33c);
    }
    if (*(int *)(iVar4 + 0x264ac14) == 0) {
      sound_snddx_cpp_FUN_00554e50(iVar7);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x264ac2c) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac30) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac28) = 0;
  *(uint *)(iVar4 + 0x264ac24) = 0;
  return iVar7;
}
