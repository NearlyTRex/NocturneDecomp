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
  int iVar6;
  int *piVar7;
  char acStack_1a0 [400];
  
  if ((((param_2 < 1) || (0x40 < param_2)) || (*(int *)(param_2 * 0x18 + 0x2c81dc4) == 0)) ||
     (*(int *)(param_2 * 0x18 + 0x2c81dcc) < 1)) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47b;
    core_main_c_FUN_005030e0();
  }
  if (_DAT_02c81d94 == (int *)0x0) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x47c;
    core_main_c_FUN_005030e0();
  }
  iVar6 = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_02c82404;
  while (iVar1 != 0) {
    iVar6 = iVar6 + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_02c82404 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < iVar6) {
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  iVar3 = param_2 * 0x18;
  iVar4 = iVar6 * 0x24;
  piVar7 = (int *)(iVar4 + 0x2c823e0);
  for (iVar1 = *(int *)(iVar3 + 0x2c81dc8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x2c823e0) != *(int *)(iVar3 + 0x2c81dc4)));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x2c823f0)) {
  }
  if (iVar1 == 0) {
    *piVar7 = *(int *)(iVar3 + 0x2c81dc4);
    *(int *)(iVar4 + 0x2c823e8) = param_2;
    if (*(int *)(iVar3 + 0x2c81dc8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar6;
    }
  }
  else {
    uVar5 = (**(code **)(*_DAT_02c81d94 + 0x14))();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_00577500(uVar5);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005773f0();
      return 0;
    }
    if (*piVar7 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x2c81dc8) * 0x24 + 0x2c823ec) = iVar6;
    *(int *)(iVar4 + 0x2c823e8) = param_2;
  }
  uVar2 = *(uint *)(iVar3 + 0x2c81dc8);
  *(uint *)(iVar4 + 0x2c823ec) = 0;
  *(uint *)(iVar4 + 0x2c823f0) = uVar2;
  *(int *)(iVar3 + 0x2c81dc8) = iVar6;
  if (_DAT_02c81da0 != 0) {
    uVar5 = (*(code *)**(uint **)*piVar7)();
    if (uVar5 != 0) {
      sound_snddx_cpp_FUN_00577500(uVar5);
      _sprintf(&stack0xfffffcc4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_005773f0(&stack0xfffffcc4);
    }
    if (*(int *)(iVar4 + 0x2c823e4) == 0) {
      sound_snddx_cpp_FUN_00577880(iVar6);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x2c823fc) = 0xffffffff;
  *(uint *)(iVar4 + 0x2c82400) = 0xffffffff;
  *(uint *)(iVar4 + 0x2c823f8) = 0;
  *(uint *)(iVar4 + 0x2c823f4) = 0;
  return iVar6;
}
