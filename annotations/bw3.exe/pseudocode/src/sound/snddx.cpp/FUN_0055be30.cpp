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
  int iVar6;
  int *piVar7;
  char acStack_1a0 [400];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2cf49fc) < 1)) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x472;
    core_main_c_FUN_004e4330();
  }
  if (_DAT_02cf49c4 == (int *)0x0) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x473;
    core_main_c_FUN_004e4330();
  }
  iVar6 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_02cf5030;
  while (iVar1 != 0) {
    iVar6 = iVar6 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_02cf5030 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar6) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  iVar3 = param_2 * 0x18;
  iVar4 = iVar6 * 0x24;
  piVar7 = (int *)(iVar4 + 0x2cf500c);
  for (iVar1 = *(int *)(iVar3 + 0x2cf49f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x2cf500c) != *(int *)(iVar3 + 0x2cf49f4)));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x2cf501c)) {
  }
  if (iVar1 == 0) {
    *piVar7 = *(int *)(iVar3 + 0x2cf49f4);
    *(int *)(iVar4 + 0x2cf5014) = param_2;
    if (*(int *)(iVar3 + 0x2cf49f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar6;
    }
  }
  else {
    uVar5 = (**(code **)(*_DAT_02cf49c4 + 0x14))();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_0055a670(uVar5);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1a0);
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = iVar6;
    *(int *)(iVar4 + 0x2cf5014) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x2cf49f8);
  *(uint *)(iVar4 + 0x2cf5018) = 0;
  *(uint *)(iVar4 + 0x2cf501c) = uVar2;
  *(int *)(iVar3 + 0x2cf49f8) = iVar6;
  if (_DAT_02cf49d0 != 0) {
    uVar5 = (*(code *)**(uint **)*piVar7)();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_0055a670(uVar5);
      _sprintf(&stack0xfffffcc4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(&stack0xfffffcc4);
    }
    if (*(int *)(iVar4 + 0x2cf5010) == 0) {
      sound_snddx_cpp_FUN_0055a9f0(iVar6);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x2cf5028) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf502c) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf5024) = 0;
  *(uint *)(iVar4 + 0x2cf5020) = 0;
  return iVar6;
}
