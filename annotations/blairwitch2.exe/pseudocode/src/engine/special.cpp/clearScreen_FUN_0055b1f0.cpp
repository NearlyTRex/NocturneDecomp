// Name: engine_special.cpp_clearScreen_FUN_0055b1f0
// Address: 0055b1f0
// Address Range: [[0055b1f0, 0055b253]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0055b1f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreen_FUN_0055b1f0(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  
  if (_DAT_01c37788 != 0) {
    engine_special_cpp_clear_FUN_0055fd40();
    return;
  }
  iVar4 = 0;
  do {
    _DAT_0061c794 = DAT_0061c78c;
    puVar5 = *(ulonglong **)(&DAT_01c2a38c + iVar4 * 4);
    uVar2 = (uint)(DAT_006141b8 * DAT_006141c0) >> 3;
    do {
      *puVar5 = _DAT_0061c794;
      puVar5[1] = _DAT_0061c794;
      puVar5[2] = _DAT_0061c794;
      puVar5[3] = _DAT_0061c794;
      puVar5 = puVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < DAT_006141bc);
  return;
}
