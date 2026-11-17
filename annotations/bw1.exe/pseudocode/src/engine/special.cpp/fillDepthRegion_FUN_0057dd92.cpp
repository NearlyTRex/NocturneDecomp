// Name: engine_special.cpp_fillDepthRegion_FUN_0057dd92
// Address: 0057dd92
// Address Range: [[0057dd92, 0057de00]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_fillDepthRegion_FUN_0057dd92(int left,int right,int top,int bottom)

#include "nocturne.h"

void __cdecl engine_special_cpp_fillDepthRegion_FUN_0057dd92(int left,int right,int top,int bottom)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  
  dVar2 = g_DOUBLE_00623ddc;
  if (g_INT_01c50948 != 0) {
    engine_special_cpp_clearZBox_FUN_00582960(left,right,top,bottom);
    return;
  }
  do {
    pdVar4 = (double *)((uint)(g_UINT_PTR_ARRAY_01c4480c[top] + left) & 0xfffffff8);
    uVar3 = (right - left) + 1U >> 1;
    do {
      *pdVar4 = dVar2;
      pdVar4 = pdVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    top = top + 1;
  } while ((uint)top <= (uint)bottom);
  g_DOUBLE_00623de4 = dVar2;
  return;
}
