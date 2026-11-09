// Name: sound_snddx.cpp_FUN_0055be30
// Address: 0055be30
// Address Range: [[0055be30, 0055c0b5]]
// Convention: unknown
// Signature: int sound_snddx_cpp_FUN_0055be30(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int sound_snddx_cpp_FUN_0055be30(uint param_1,int param_2)

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
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2cf49fc) < 1)) {
    pCStack_338 = (CConsole *)"DirectSoundDevice::allocateSfx - Invalid sample handle: %d";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x472;
    piStack_33c = (int *)0x55be6f;
    core_main_c_FUN_004e4330();
  }
  if (_DAT_02cf49c4 == (int *)0x0) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x473;
    pCStack_338 = (CConsole *)0x55be9a;
    core_main_c_FUN_004e4330();
  }
  iVar7 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_02cf5030;
  while (iVar1 != 0) {
    iVar7 = iVar7 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_02cf5030 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar7) {
    pCStack_338 = g_CConsolePtr;
    piStack_33c = (int *)0x55bfb4;
    engine_console_cpp_FUN_00441ff0();
    return 0;
  }
  iVar3 = param_2 * 0x18;
  piVar8 = (int *)(iVar3 + 0x2cf49f4);
  iVar4 = iVar7 * 0x24;
  piVar9 = (int *)(iVar4 + 0x2cf500c);
  for (iVar1 = *(int *)(iVar3 + 0x2cf49f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x2cf500c) != *piVar8));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x2cf501c)) {
  }
  if (iVar1 == 0) {
    *piVar9 = *piVar8;
    *(int *)(iVar4 + 0x2cf5014) = param_2;
    if (*(int *)(iVar3 + 0x2cf49f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar7;
    }
  }
  else {
    pCStack_338 = (CConsole *)*piVar8;
    piStack_33c = _DAT_02cf49c4;
    uVar5 = (**(code **)(*_DAT_02cf49c4 + 0x14))();
    if (uVar5 != 0) {
      pCStack_338 = (CConsole *)0x55c019;
      sound_snddx_cpp_FUN_0055a670(uVar5);
      pCStack_338 = (CConsole *)"Duplicate sound buffer";
      piStack_33c = (int *)"DirectSux: Unable to %s.  (%s)";
      FUN_005a28c0(auStack_1a0);
      pCStack_338 = (CConsole *)0x55c044;
      sound_sndmain_cpp_FUN_0055a560();
      return 0;
    }
    if (*piVar9 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar7;
    *(int *)(iVar4 + 0x2cf5014) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x2cf49f8);
  *(uint *)(iVar4 + 0x2cf5018) = 0;
  *(uint *)(iVar4 + 0x2cf501c) = uVar2;
  *(int *)(iVar3 + 0x2cf49f8) = iVar7;
  if (_DAT_02cf49d0 != 0) {
    piStack_33c = (int *)*piVar9;
    pCStack_338 = (CConsole *)&DAT_00608bb8;
    uVar5 = (**(code **)*piStack_33c)();
    if (uVar5 != 0) {
      pcVar6 = sound_snddx_cpp_FUN_0055a670(uVar5);
      FUN_005a28c0
                (&piStack_33c,"DirectSux: Unable to %s.  (%s)","get DirectSound3DBuffer interface from sfx secondary buffer",
                 pcVar6);
      sound_sndmain_cpp_FUN_0055a560(&piStack_33c);
    }
    if (*(int *)(iVar4 + 0x2cf5010) == 0) {
      sound_snddx_cpp_FUN_0055a9f0(iVar7);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x2cf5028) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf502c) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf5024) = 0;
  *(uint *)(iVar4 + 0x2cf5020) = 0;
  return iVar7;
}
