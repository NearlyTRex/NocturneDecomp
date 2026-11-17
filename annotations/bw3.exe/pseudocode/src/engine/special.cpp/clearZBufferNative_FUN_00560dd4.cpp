// Name: engine_special.cpp_clearZBufferNative_FUN_00560dd4
// Address: 00560dd4
// Address Range: [[00560dd4, 00560e36]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearZBufferNative_FUN_00560dd4(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearZBufferNative_FUN_00560dd4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  g_DOUBLE_00604d24 = g_DOUBLE_00604d1c;
  pdVar4 = (double *)(g_UINT_PTR_ARRAY_01c60dac[0] + g_INT_01c6b5ac * g_INT_005fba18);
  iVar2 = ((g_INT_01c6b5b4 - g_INT_01c6b5ac) + 1) * g_INT_005fba18;
  do {
    *pdVar4 = g_DOUBLE_00604d24;
    pdVar4[1] = g_DOUBLE_00604d24;
    pdVar4[2] = g_DOUBLE_00604d24;
    pdVar4[3] = g_DOUBLE_00604d24;
    pdVar4[4] = g_DOUBLE_00604d24;
    pdVar4[5] = g_DOUBLE_00604d24;
    pdVar4[6] = g_DOUBLE_00604d24;
    pdVar4[7] = g_DOUBLE_00604d24;
    pdVar4 = pdVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
