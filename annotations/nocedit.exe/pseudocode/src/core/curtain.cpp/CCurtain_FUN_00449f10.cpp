// Name: core_curtain.cpp_CCurtain_FUN_00449f10
// Address: 00449f10
// Address Range: [[00449f10, 00449fb5]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_FUN_00449f10(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_FUN_00449f10(CCurtain *this_ptr)

{
  CVector3f *pCVar1;
  char *pcVar2;
  CVector3f *pCVar3;
  int iVar4;
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x3f *local_18;
  SCurtainVertex *local_14;
  
  iVar4 = 0;
  if (0 < this_ptr->unk2) {
    local_14 = this_ptr->unk3;
    local_18 = &(this_ptr->base).orient_matrix;
    pcVar2 = this_ptr->unk3[0].unk + 0x20;
    do {
      local_30.x = *(float *)pcVar2 - (this_ptr->base).location.position.x;
      local_30.y = *(float *)(pcVar2 + 4) - (this_ptr->base).location.position.y;
      pCVar3 = (CVector3f *)(local_14 + iVar4);
      local_30.z = *(float *)(pcVar2 + 8) - (this_ptr->base).location.position.z;
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (local_18,&local_24,&local_30);
      if (pCVar3 != pCVar1) {
        pCVar3->x = pCVar1->x;
        pCVar3->y = pCVar1->y;
        pCVar3->z = pCVar1->z;
      }
      iVar4 = iVar4 + 1;
      pcVar2 = pcVar2 + 0x74;
    } while (iVar4 < this_ptr->unk2);
  }
  return;
}
