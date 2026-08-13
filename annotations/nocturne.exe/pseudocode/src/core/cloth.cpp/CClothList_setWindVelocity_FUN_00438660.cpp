// Name: core_cloth.cpp_CClothList_setWindVelocity_FUN_00438660
// Address: 00438660
// Address Range: [[00438660, 004386af]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_00438660(CClothList *this_ptr,CVector3f *wind_velocity)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_00438660(CClothList *this_ptr,CVector3f *wind_velocity)

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
        if (&pCVar1->wind_velocity == wind_velocity) break;
        (pCVar1->wind_velocity).x = wind_velocity->x;
        (pCVar1->wind_velocity).y = wind_velocity->y;
        (pCVar1->wind_velocity).z = wind_velocity->z;
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
