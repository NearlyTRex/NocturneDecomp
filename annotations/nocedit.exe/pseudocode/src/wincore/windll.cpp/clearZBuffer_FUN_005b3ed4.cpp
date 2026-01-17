// Name: wincore_windll.cpp_clearZBuffer_FUN_005b3ed4
// Address: 005b3ed4
// Address Range: [[005b3ed4, 005b3f36]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_clearZBuffer_FUN_005b3ed4(void)

#include "nocturne.h"

void __cdecl wincore_windll_cpp_clearZBuffer_FUN_005b3ed4(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  
  0 = 0;
  pdVar4 = (double *)(g_ZBufferScanlineArray[0] + g_ClipTop * g_WindowWidth);
  iVar2 = ((g_ClipBottom - g_ClipTop) + 1) * g_WindowWidth;
  do {
    *pdVar4 = 0;
    pdVar4[1] = 0;
    pdVar4[2] = 0;
    pdVar4[3] = 0;
    pdVar4[4] = 0;
    pdVar4[5] = 0;
    pdVar4[6] = 0;
    pdVar4[7] = 0;
    pdVar4 = pdVar4 + 8;
    iVar3 = iVar2 + -0x10;
    bVar1 = 0xf < iVar2;
    iVar2 = iVar3;
  } while (iVar3 != 0 && bVar1);
  return;
}
