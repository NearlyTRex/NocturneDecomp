// Name: engine_special.cpp_clearZBufferNative_FUN_0052eed4
// Address: 0052eed4
// Address Range: [[0052eed4, 0052ef36]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearZBufferNative_FUN_0052eed4(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_clearZBufferNative_FUN_0052eed4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  
  _DAT_005bf494 = DAT_005bf48c;
  puVar4 = (ulonglong *)(_DAT_01bd4260 + _DAT_01c00c5c * DAT_005b761c * 4);
  iVar2 = ((_DAT_01c00c64 - _DAT_01c00c5c) + 1) * DAT_005b761c;
  do {
    *puVar4 = _DAT_005bf494;
    puVar4[1] = _DAT_005bf494;
    puVar4[2] = _DAT_005bf494;
    puVar4[3] = _DAT_005bf494;
    puVar4[4] = _DAT_005bf494;
    puVar4[5] = _DAT_005bf494;
    puVar4[6] = _DAT_005bf494;
    puVar4[7] = _DAT_005bf494;
    puVar4 = puVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
