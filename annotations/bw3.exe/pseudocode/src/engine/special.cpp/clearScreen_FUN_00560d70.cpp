// Name: engine_special.cpp_clearScreen_FUN_00560d70
// Address: 00560d70
// Address Range: [[00560d70, 00560dd3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_00560d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreen_FUN_00560d70(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  
  if (_DAT_01c6cee8 != 0) {
    engine_special_cpp_clear_FUN_00566060();
    return;
  }
  iVar4 = 0;
  do {
    _DAT_00604d24 = DAT_00604d1c;
    puVar5 = *(ulonglong **)(&DAT_01c5faec + iVar4 * 4);
    uVar2 = (uint)(DAT_005fba18 * DAT_005fba20) >> 3;
    do {
      *puVar5 = _DAT_00604d24;
      puVar5[1] = _DAT_00604d24;
      puVar5[2] = _DAT_00604d24;
      puVar5[3] = _DAT_00604d24;
      puVar5 = puVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < DAT_005fba1c);
  return;
}
