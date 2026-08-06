// Name: engine_special.cpp_clearScreen_FUN_0052ee70
// Address: 0052ee70
// Address Range: [[0052ee70, 0052eed3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  
  if (_DAT_01c02594 != 0) {
    engine_special_cpp_clear_FUN_005329a0();
    return;
  }
  iVar4 = 0;
  do {
    _DAT_005bf494 = DAT_005bf48c;
    puVar5 = *(ulonglong **)(&DAT_01bd2fa0 + iVar4 * 4);
    uVar2 = (uint)(g_WindowWidth * DAT_005b7624) >> 3;
    do {
      *puVar5 = _DAT_005bf494;
      puVar5[1] = _DAT_005bf494;
      puVar5[2] = _DAT_005bf494;
      puVar5[3] = _DAT_005bf494;
      puVar5 = puVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < g_WindowHeight);
  return;
}
