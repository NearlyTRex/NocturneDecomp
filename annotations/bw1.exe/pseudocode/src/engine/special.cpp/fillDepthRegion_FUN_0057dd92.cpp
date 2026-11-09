// Name: engine_special.cpp_fillDepthRegion_FUN_0057dd92
// Address: 0057dd92
// Address Range: [[0057dd92, 0057de00]]
// Convention: __cdecl
// Signature: void __cdecl engine_special_cpp_fillDepthRegion_FUN_0057dd92(int left,int right,int top,int bottom)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_special_cpp_fillDepthRegion_FUN_0057dd92(int left,int right,int top,int bottom)

{
  bool bVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong *puVar4;
  
  uVar2 = DAT_00623ddc;
  if (_DAT_01c50948 != 0) {
    engine_special_cpp_clearZBox_FUN_00582960(left,right,top,bottom);
    return;
  }
  do {
    puVar4 = (ulonglong *)(*(int *)(&DAT_01c4480c + top * 4) + left * 4 & 0xfffffff8);
    uVar3 = (right - left) + 1U >> 1;
    do {
      *puVar4 = uVar2;
      puVar4 = puVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    top = top + 1;
  } while ((uint)top <= (uint)bottom);
  _DAT_00623de4 = uVar2;
  return;
}
