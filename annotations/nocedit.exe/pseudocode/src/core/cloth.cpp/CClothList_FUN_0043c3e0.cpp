// Name: core_cloth.cpp_CClothList_FUN_0043c3e0
// Address: 0043c3e0
// Address Range: [[0043c3e0, 0043c42f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_FUN_0043c3e0(CClothList *this_ptr,CVector3f *param_2)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_FUN_0043c3e0(CClothList *this_ptr,CVector3f *param_2)

{
  CCloth *pCVar1;
  CClothList *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->count) {
    do {
      while( true ) {
        pCVar1 = pCVar2->cloths[0];
        if (&pCVar1->wind_velocity == param_2) break;
        (pCVar1->wind_velocity).x = param_2->x;
        (pCVar1->wind_velocity).y = param_2->y;
        (pCVar1->wind_velocity).z = param_2->z;
        iVar3 = iVar3 + 1;
        pCVar2 = (CClothList *)pCVar2->filenames;
        if (this_ptr->count <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar2 = (CClothList *)pCVar2->filenames;
    } while (iVar3 < this_ptr->count);
  }
  return;
}
