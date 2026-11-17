// Name: engine_special.cpp_clearZBufferNative_FUN_0055b254
// Address: 0055b254
// Address Range: [[0055b254, 0055b2b6]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearZBufferNative_FUN_0055b254(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearZBufferNative_FUN_0055b254(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  g_DOUBLE_0061c794 = g_DOUBLE_0061c78c;
  pdVar4 = (double *)(g_UINT_PTR_ARRAY_01c2b64c[0] + g_INT_01c35e4c * g_INT_006141b8);
  iVar2 = ((g_INT_01c35e54 - g_INT_01c35e4c) + 1) * g_INT_006141b8;
  do {
    *pdVar4 = g_DOUBLE_0061c794;
    pdVar4[1] = g_DOUBLE_0061c794;
    pdVar4[2] = g_DOUBLE_0061c794;
    pdVar4[3] = g_DOUBLE_0061c794;
    pdVar4[4] = g_DOUBLE_0061c794;
    pdVar4[5] = g_DOUBLE_0061c794;
    pdVar4[6] = g_DOUBLE_0061c794;
    pdVar4[7] = g_DOUBLE_0061c794;
    pdVar4 = pdVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
