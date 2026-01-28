// Name: engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
// Address: 00410c20
// Address Range: [[00410c20, 00410ce5]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20 (CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)

#include "nocturne.h"

void __cdecl
engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20
          (CAlphaBitmap *this_ptr,int scaleFactorX,int scaleFactorY)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_14;
  
  iVar3 = this_ptr->width / scaleFactorX;
  iVar4 = this_ptr->height / scaleFactorY;
  local_14 = 0;
  if (0 < iVar4) {
    do {
      if (0 < iVar3) {
        iVar6 = local_14 * iVar3;
        iVar5 = 0;
        iVar7 = iVar3 + iVar6;
        do {
          iVar1 = local_14 * this_ptr->width * scaleFactorY + iVar5;
          this_ptr->raw[iVar6] = this_ptr->raw[iVar1];
          pcVar2 = this_ptr->opa + iVar6;
          iVar6 = iVar6 + 1;
          *pcVar2 = this_ptr->opa[iVar1];
          iVar5 = iVar5 + scaleFactorX;
        } while (iVar6 < iVar7);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  this_ptr->width = iVar3;
  this_ptr->height = iVar4;
  return;
}
