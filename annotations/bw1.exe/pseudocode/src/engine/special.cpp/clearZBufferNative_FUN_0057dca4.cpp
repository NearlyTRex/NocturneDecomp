// Name: engine_special.cpp_clearZBufferNative_FUN_0057dca4
// Address: 0057dca4
// Address Range: [[0057dca4, 0057dd06]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_clearZBufferNative_FUN_0057dca4(void)

#include "nocturne.h"

void __cdecl engine_special_cpp_clearZBufferNative_FUN_0057dca4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  g_DOUBLE_00623de4 = g_DOUBLE_00623ddc;
  pdVar4 = (double *)(g_UINT_PTR_ARRAY_01c4480c[0] + g_INT_01c4f00c * g_INT_0061b498);
  iVar2 = ((g_INT_01c4f014 - g_INT_01c4f00c) + 1) * g_INT_0061b498;
  do {
    *pdVar4 = g_DOUBLE_00623de4;
    pdVar4[1] = g_DOUBLE_00623de4;
    pdVar4[2] = g_DOUBLE_00623de4;
    pdVar4[3] = g_DOUBLE_00623de4;
    pdVar4[4] = g_DOUBLE_00623de4;
    pdVar4[5] = g_DOUBLE_00623de4;
    pdVar4[6] = g_DOUBLE_00623de4;
    pdVar4[7] = g_DOUBLE_00623de4;
    pdVar4 = pdVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
