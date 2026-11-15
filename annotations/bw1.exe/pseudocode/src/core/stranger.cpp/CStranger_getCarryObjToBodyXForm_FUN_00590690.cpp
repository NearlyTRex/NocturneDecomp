// Name: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_00590690
// Address: 00590690
// Address Range: [[00590690, 005906d3]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_00590690(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_00590690(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  CMatrix3x4f CStack_38;
  
  bVar4 = 0;
  core_stranger_cpp_CStranger_computeWeaponAttachXForm_FUN_0058afe0
            (this_ptr,(this_ptr->base).base.carry_hands[hand_index].carry_actor,hand_index,
             &CStack_38);
  pCVar2 = &CStack_38;
  pCVar3 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  return out_matrix;
}
