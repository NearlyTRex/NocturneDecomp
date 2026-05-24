// Name: core_cloth.cpp_CClothList_setWindVelocity_FUN_0043c3e0
// Address: 0043c3e0
// MANUAL RECONSTRUCTION
// Address Range: [[0043c3e0, 0043c42f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_0043c3e0(CClothList *this_ptr,CVector3f *wind_velocity)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CClothList_setWindVelocity_FUN_0043c3e0(CClothList *this_ptr,CVector3f *wind_velocity)

{
  CCloth *pCVar1;
  int iVar3;

  for (iVar3 = 0; iVar3 < this_ptr->count; iVar3 = iVar3 + 1) {
    pCVar1 = this_ptr->cloths[iVar3];
    if (&pCVar1->wind_velocity != wind_velocity) {
      pCVar1->wind_velocity = *wind_velocity;
    }
  }
  return;
}
