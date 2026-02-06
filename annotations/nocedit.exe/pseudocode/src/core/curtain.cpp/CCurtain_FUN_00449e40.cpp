// Name: core_curtain.cpp_CCurtain_FUN_00449e40
// Address: 00449e40
// Address Range: [[00449e40, 00449f08]]
// Convention: __cdecl
// Signature: void __cdecl core_curtain_cpp_CCurtain_FUN_00449e40(CCurtain *this_ptr)

#include "nocturne.h"

void __cdecl core_curtain_cpp_CCurtain_FUN_00449e40(CCurtain *this_ptr)

{
  CVector3f *pCVar1;
  char *pcVar2;
  int iVar3;
  CVector3f *input;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  SCurtainVertex *local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < this_ptr->unk2) {
    local_18 = this_ptr->unk3;
    local_14 = &(this_ptr->base).orient_matrix;
    pcVar2 = this_ptr->unk3[0].unk + 0x20;
    do {
      input = (CVector3f *)(local_18 + iVar3);
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(local_14,&local_30,input);
      local_24 = pCVar1->x + (this_ptr->base).location.position.x;
      local_20 = pCVar1->y + (this_ptr->base).location.position.y;
      local_1c = pCVar1->z + (this_ptr->base).location.position.z;
      if ((float *)pcVar2 != &local_24) {
        *(float *)pcVar2 = local_24;
        *(float *)(pcVar2 + 4) = local_20;
        *(float *)(pcVar2 + 8) = local_1c;
      }
      if (&input[4].z != &input[2].z) {
        input[4].z = input[2].z;
        input[5].x = input[3].x;
        input[5].y = input[3].y;
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x74;
    } while (iVar3 < this_ptr->unk2);
  }
  return;
}
