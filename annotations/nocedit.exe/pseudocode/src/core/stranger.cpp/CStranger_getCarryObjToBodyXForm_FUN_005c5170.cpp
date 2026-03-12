// Name: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
// Address: 005c5170
// Address Range: [[005c5170, 005c51b0]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  byte bVar3;
  CMatrix3x4f local_38;
  
  bVar3 = 0;
  core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_005c07b0
            (this_ptr,(this_ptr->base).base.carry_hands[hand_index].carry_actor,hand_index,&local_38
            );
  pCVar2 = &local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + (uint)bVar3 * -8 + 4);
    out_matrix->m[0].w = pCVar2->m[0].w;
    pCVar2 = pCVar2;
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
