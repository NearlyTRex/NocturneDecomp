// Name: engine_special.cpp_clearScreen_FUN_0052ee70
// Address: 0052ee70
// Address Range: [[0052ee70, 0052eed3]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_special_cpp_clearScreen_FUN_0052ee70(void)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong *puVar6;
  
  if (_DAT_01c02594 != 0) {
    uVar2 = engine_special_cpp_clear_FUN_005329a0();
    return uVar2;
  }
  iVar5 = 0;
  do {
    _DAT_005bf494 = DAT_005bf48c;
    puVar6 = *(ulonglong **)(&DAT_01bd2fa0 + iVar5 * 4);
    uVar3 = (uint)(DAT_005b761c * DAT_005b7624) >> 3;
    do {
      *puVar6 = _DAT_005bf494;
      puVar6[1] = _DAT_005bf494;
      puVar6[2] = _DAT_005bf494;
      puVar6[3] = _DAT_005bf494;
      puVar6 = puVar6 + 4;
      uVar4 = uVar3 - 0x20;
      bVar1 = 0x1f < (int)uVar3;
      uVar3 = uVar4;
    } while (uVar4 != 0 && bVar1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < DAT_005b7620);
  return in_EAX;
}
