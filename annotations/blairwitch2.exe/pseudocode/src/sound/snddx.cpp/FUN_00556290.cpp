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
  int iVar6;
  int *piVar7;
  char acStack_1a0 [400];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x264a5fc) < 1)) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47b;
    core_main_c_FUN_004e4500();
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47c;
    core_main_c_FUN_004e4500();
  }
  iVar6 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_0264ac34;
  while (iVar1 != 0) {
    iVar6 = iVar6 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_0264ac34 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar6) {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  iVar3 = param_2 * 0x18;
  iVar4 = iVar6 * 0x24;
  piVar7 = (int *)(iVar4 + 0x264ac10);
  for (iVar1 = *(int *)(iVar3 + 0x264a5f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x264ac10) != *(int *)(iVar3 + 0x264a5f4)));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x264ac20)) {
  }
  if (iVar1 == 0) {
    *piVar7 = *(int *)(iVar3 + 0x264a5f4);
    *(int *)(iVar4 + 0x264ac18) = param_2;
    if (*(int *)(iVar3 + 0x264a5f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar6;
    }
  }
  else {
    uVar5 = (**(code **)(*_DAT_0264a5c4 + 0x14))();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_00554ad0(uVar5);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005549c0();
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = iVar6;
    *(int *)(iVar4 + 0x264ac18) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x264a5f8);
  *(uint *)(iVar4 + 0x264ac1c) = 0;
  *(uint *)(iVar4 + 0x264ac20) = uVar2;
  *(int *)(iVar3 + 0x264a5f8) = iVar6;
  if (_DAT_0264a5d0 != 0) {
    uVar5 = (*(code *)**(uint **)*piVar7)();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_00554ad0(uVar5);
      _sprintf(&stack0xfffffcc4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005549c0(&stack0xfffffcc4);
    }
    if (*(int *)(iVar4 + 0x264ac14) == 0) {
      sound_snddx_cpp_FUN_00554e50(iVar6);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x264ac2c) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac30) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac28) = 0;
  *(uint *)(iVar4 + 0x264ac24) = 0;
  return iVar6;
}
