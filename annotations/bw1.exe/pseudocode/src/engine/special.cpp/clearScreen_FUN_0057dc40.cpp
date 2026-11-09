// Name: engine_special.cpp_clearScreen_FUN_0057dc40
// Address: 0057dc40
// Address Range: [[0057dc40, 0057dca3]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearScreen_FUN_0057dc40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearScreen_FUN_0057dc40(void)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong *puVar5;
  
  if (_DAT_01c50948 != 0) {
    engine_special_cpp_clear_FUN_00582790();
    return;
  }
  iVar4 = 0;
  do {
    _DAT_00623de4 = DAT_00623ddc;
    puVar5 = *(ulonglong **)(&DAT_01c4354c + iVar4 * 4);
    uVar2 = (uint)(DAT_0061b498 * DAT_0061b4a0) >> 3;
    do {
      *puVar5 = _DAT_00623de4;
      puVar5[1] = _DAT_00623de4;
      puVar5[2] = _DAT_00623de4;
      puVar5[3] = _DAT_00623de4;
      puVar5 = puVar5 + 4;
      uVar3 = uVar2 - 0x20;
      bVar1 = 0x1f < (int)uVar2;
      uVar2 = uVar3;
    } while (uVar3 != 0 && bVar1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < DAT_0061b49c);
  return;
}
