// Name: core_cloth.cpp_FUN_005b1890
// Address: 005b1890
// Address Range: [[005b1890, 005b18df]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_005b1890(CClothList *this_ptr,CVector3f *wind_velocity)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_005b1890(CClothList *this_ptr,CVector3f *wind_velocity)

{
  int iVar1;
  CClothList *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      while( true ) {
        iVar1 = *(int *)(pCVar2 + 0x194);
        if ((CVector3f *)(iVar1 + 0x3ab24) == wind_velocity) break;
        *(uint *)(iVar1 + 0x3ab24) = *(uint *)wind_velocity;
        *(uint *)(iVar1 + 0x3ab28) = *(uint *)&wind_velocity->field_0x4;
        *(uint *)(iVar1 + 0x3ab2c) = *(uint *)&wind_velocity->field_0x8;
        iVar3 = iVar3 + 1;
        pCVar2 = pCVar2 + 4;
        if (*(int *)this_ptr <= iVar3) {
          return;
        }
      }
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 4;
    } while (iVar3 < *(int *)this_ptr);
  }
  return;
}
