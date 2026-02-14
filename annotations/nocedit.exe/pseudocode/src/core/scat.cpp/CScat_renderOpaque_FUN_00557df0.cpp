// Name: core_scat.cpp_CScat_renderOpaque_FUN_00557df0
// Address: 00557df0
// Address Range: [[00557df0, 00557e9b]]
// Convention: __cdecl
// Signature: int __cdecl core_scat_cpp_CScat_renderOpaque_FUN_00557df0(CScat *this_ptr)

#include "nocturne.h"

int __cdecl core_scat_cpp_CScat_renderOpaque_FUN_00557df0(CScat *this_ptr)

{
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = core_charactr_cpp_CCharacter_renderOpaque_FUN_0042a2c0((CCharacter *)this_ptr);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = this_ptr->unk4;
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x154) + 8))(iVar2);
      iVar2 = 0;
      if (this_ptr->unk4 != 0) {
        switch(*(uint *)(this_ptr->unk4 + 0x2e0)) {
        default:
          iVar2 = 2;
          break;
        case 8:
          iVar2 = 0;
        }
      }
      fVar3 = core_charactr_cpp_CCharacter_getLayerActionBlendWeight_FUN_0042e840
                        ((CCharacter *)this_ptr,iVar2);
      if ((float)0.94999999999999996 < fVar3) {
        (**(code **)(*(int *)(this_ptr->unk4 + 0x154) + 0x104))(this_ptr->unk4);
        return 1;
      }
      return 1;
    }
    iVar2 = 1;
  }
  return iVar2;
}
