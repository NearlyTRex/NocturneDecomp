// Name: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_0040dbd0
// Address: 0040dbd0
// Address Range: [[0040dbd0, 0040dc95]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)

{
  int iVar1;
  byte *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar3 = *(int *)&this_ptr->field_0xc / scaleFactorX;
  iVar4 = *(int *)&this_ptr->field_0x10 / scaleFactorY;
  local_14 = 0;
  if (0 < iVar4) {
    do {
      if (0 < iVar3) {
        iVar6 = local_14 * iVar3;
        iVar5 = 0;
        iVar7 = iVar3 + iVar6;
        do {
          iVar1 = local_14 * *(int *)&this_ptr->field_0xc * scaleFactorY + iVar5;
          *(byte *)(*(int *)this_ptr + iVar6) = *(byte *)(*(int *)this_ptr + iVar1);
          puVar2 = (byte *)(*(int *)&this_ptr->field_0x4 + iVar6);
          iVar6 = iVar6 + 1;
          *puVar2 = *(byte *)(*(int *)&this_ptr->field_0x4 + iVar1);
          iVar5 = iVar5 + scaleFactorX;
        } while (iVar6 < iVar7);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  *(int *)&this_ptr->field_0xc = iVar3;
  *(int *)&this_ptr->field_0x10 = iVar4;
  return;
}
