// Name: core_stranger.cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170
// Address: 005c5170
// Address Range: [[005c5170, 005c51b0]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

void __stack2_esi core_stranger_cpp_CStranger_getCarryObjToBodyXForm_FUN_005c5170(CStranger *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  int iVar1;
  float *pfVar2;
  byte bVar3;
  float local_38 [12];
  
  bVar3 = 0;
  core_stranger_cpp_CStranger_FUN_005c07b0(this_ptr);
  pfVar2 = local_38;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    out_matrix->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar3 * -2 + 1;
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar3 * -2 + 1) * 4);
  }
  return;
}
