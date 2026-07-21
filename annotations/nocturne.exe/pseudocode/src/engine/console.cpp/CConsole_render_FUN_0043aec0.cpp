// Name: engine_console.cpp_CConsole_render_FUN_0043aec0
// Address: 0043aec0
// Address Range: [[0043aec0, 0043afef]]
// Convention: __cdecl
// Signature: void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_console_cpp_CConsole_render_FUN_0043aec0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_24;
  int local_20;
  int local_18;
  char local_14 [4];
  
  local_14[1] = 0;
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0xfb0)) {
    local_24 = param_1;
    local_18 = 0;
    do {
      iVar2 = 0;
      if (0 < *(int *)(param_1 + 0xfac)) {
        iVar4 = 0;
        iVar3 = local_24;
        do {
          local_14[0] = *(char *)(iVar3 + 4);
          if (local_14[0] != '\0') {
            engine_2d_c_drawString_FUN_004026b0
                      (local_14,*(int *)(param_1 + 0xfb4) + iVar4,
                       local_18 + *(int *)(param_1 + 0xfb8),0xf8);
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 1;
          iVar4 = iVar4 + 7;
        } while (iVar2 < *(int *)(param_1 + 0xfac));
      }
      local_24 = local_24 + 0x50;
      local_18 = local_18 + 0xb;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(param_1 + 0xfb0));
  }
  iVar3 = *(int *)(param_1 + 0xfb4);
  iVar4 = *(int *)(param_1 + 0xfb8);
  iVar1 = *(int *)(param_1 + 0xfb0);
  iVar2 = iVar3 + *(int *)(param_1 + 0xfac) * 7;
  iVar5 = iVar4 + -1;
  _DAT_01c00c70 = 0xf8;
  engine_2d_c_drawLine_FUN_004015a0(iVar3,iVar5,iVar2,iVar5);
  iVar4 = iVar4 + iVar1 * 0xb + 1;
  engine_2d_c_drawLine_FUN_004015a0(iVar3,iVar4,iVar2,iVar4);
  engine_2d_c_drawLine_FUN_004015a0(iVar3 + -1,iVar5,iVar3 + -1,iVar4);
  engine_2d_c_drawLine_FUN_004015a0(iVar2 + 1,iVar5,iVar2 + 1,iVar4);
  return;
}
