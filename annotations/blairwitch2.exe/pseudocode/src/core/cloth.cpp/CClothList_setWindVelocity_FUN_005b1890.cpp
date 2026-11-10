// Name: core_cloth.cpp_CClothList_setWindVelocity_FUN_005b1890
// Address: 005b1890
// Address Range: [[005b1890, 005b18df]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(CClothList *this_ptr,CVector3f *wind_velocity)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_005b1890(CClothList *this_ptr,CVector3f *wind_velocity)

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
        if ((CVector3f *)(pCVar1 + 0x3ab24) == wind_velocity) break;
        ((CVector3f *)(pCVar1 + 0x3ab24))->x = wind_velocity->x;
        *(float *)(pCVar1 + 0x3ab28) = wind_velocity->y;
        *(float *)(pCVar1 + 0x3ab2c) = wind_velocity->z;
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
