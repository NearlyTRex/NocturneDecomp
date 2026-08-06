// Name: wincore_wddvmem.cpp_swapBuffers_FUN_00553910
// Address: 00553910
// Address Range: [[00553910, 00553b64]]
// Convention: __cdecl
// Signature: void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl wincore_wddvmem_cpp_swapBuffers_FUN_00553910(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte *puVar5;
  int iVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  uint local_8c [4];
  int local_7c;
  ulonglong *local_68;
  ulonglong *local_20;
  int local_1c;
  ulonglong *local_18;
  int local_14;
  
  puVar8 = DAT_005c5010;
  if (_DAT_01c02594 != 0) {
    engine_special_cpp_FUN_00532ba0();
    _DAT_02ddf564 = 0;
    wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
    return;
  }
  if (_DAT_02ddf564 == 0) {
    if (_DAT_02ddf56c == 0) {
      local_20 = DAT_005c5010;
      local_1c = g_WindowWidth *
                 ((int)((DAT_005b7624 + (DAT_005b7624 >> 0x1f) * -8) -
                       (uint)((DAT_005b7624 >> 0x1f) << 2 < 0)) >> 3);
      memset(local_8c,0,0x6c);
      local_8c[0] = 0x6c;
      iVar10 = (**(code **)(*_DAT_02ddf554 + 100))(_DAT_02ddf554,0,local_8c,1,0);
      if (iVar10 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 838;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to lock front buffer");
      }
      local_18 = local_68;
      local_14 = 0;
      iVar10 = local_1c;
      puVar8 = local_20;
      if (0 < g_WindowHeight) {
        do {
          do {
            uVar1 = puVar8[1];
            uVar2 = puVar8[2];
            uVar3 = puVar8[3];
            *local_68 = *puVar8;
            local_68[1] = uVar1;
            local_68[2] = uVar2;
            local_68[3] = uVar3;
            local_68 = local_68 + 4;
            iVar9 = iVar10 + -0x20;
            bVar4 = 0x1f < iVar10;
            iVar10 = iVar9;
            puVar8 = puVar8 + 4;
          } while (iVar9 != 0 && bVar4);
          puVar8 = (ulonglong *)((int)local_20 + local_1c);
          local_68 = (ulonglong *)((int)local_18 + local_7c);
          local_14 = local_14 + 1;
          iVar10 = local_1c;
          local_20 = puVar8;
          local_18 = local_68;
        } while (local_14 < g_WindowHeight);
      }
      iVar10 = (**(code **)(*_DAT_02ddf554 + 0x80))(_DAT_02ddf554,0);
      if (iVar10 != 0) {
        g_CurrentFilename = "..\\wincore\\wddvmem.cpp";
        g_CurrentLineNumber = 872;
        core_main_c_displayErrorAndQuit_FUN_004c8440("Unable to unlock front buffer");
        _DAT_02ddf564 = 0;
        wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
        return;
      }
      goto LAB_005539be;
    }
    _DAT_02ddf56c = _DAT_01c02594;
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    iVar10 = 0;
    if (0 < g_WindowHeight) {
      iVar9 = 0;
      do {
        puVar5 = *(byte **)(&DAT_01bd2fa0 + iVar9);
        iVar6 = 0;
        puVar7 = puVar8;
        if (0 < g_WindowWidth) {
          do {
            *puVar5 = *(byte *)puVar7;
            puVar8 = (ulonglong *)((int)puVar7 + 4);
            puVar5[1] = *(byte *)((int)puVar7 + 1);
            iVar6 = iVar6 + 1;
            puVar5[2] = *(byte *)((int)puVar7 + 2);
            puVar5 = puVar5 + 3;
            puVar7 = puVar8;
          } while (iVar6 < g_WindowWidth);
        }
        iVar10 = iVar10 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar10 < g_WindowHeight);
    }
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
    _DAT_02ddf56c = 1;
  }
  if (((_DAT_02ddf554 != (int *)0x0) &&
      (iVar10 = (**(code **)(*_DAT_02ddf554 + 0x2c))(_DAT_02ddf554,0,1), iVar10 != 0)) &&
     (iVar10 == -0x7789fe3e)) {
    wincore_wddvmem_cpp_FUN_00553ba0();
    _DAT_02ddf564 = 0;
    wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
    return;
  }
LAB_005539be:
  _DAT_02ddf564 = 0;
  wincore_winrun_cpp_processWindowMessages_FUN_005591c0();
  return;
}
