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
  uint *puVar4;
  
  _DAT_005bf494 = DAT_005bf48c;
  puVar4 = g_ZBufferScanlineArray[0] + g_ClipTop * g_WindowWidth;
  iVar2 = ((g_ClipBottom - g_ClipTop) + 1) * g_WindowWidth;
  do {
    *(ulonglong *)puVar4 = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 2) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 4) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 6) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 8) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 10) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 0xc) = _DAT_005bf494;
    *(ulonglong *)(puVar4 + 0xe) = _DAT_005bf494;
    puVar4 = puVar4 + 0x10;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
