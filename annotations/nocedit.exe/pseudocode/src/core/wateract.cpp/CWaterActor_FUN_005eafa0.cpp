// Name: core_wateract.cpp_CWaterActor_FUN_005eafa0
// Address: 005eafa0
// Address Range: [[005eafa0, 005eb03a]]
// Convention: __cdecl
// Signature: void __cdecl core_wateract_cpp_CWaterActor_FUN_005eafa0(CWaterActor *this_ptr)

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eafa0(CWaterActor *this_ptr)

{
  CVector3f *pCVar1;
  char *pcVar2;
  int iVar3;
  float local_30;
  float local_2c;
  float local_28;
  CVector3f local_24;
  char *local_18;
  CMatrix3x3f *local_14;
  
  iVar3 = 0;
  if (0 < *(int *)this_ptr->unk5) {
    local_18 = this_ptr->unk5 + 4;
    local_14 = &(this_ptr->base).orient_matrix;
    pcVar2 = this_ptr->unk5 + 0x10;
    do {
      pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                         (local_14,&local_24,(CVector3f *)(local_18 + iVar3 * 0x20));
      local_30 = pCVar1->x + (this_ptr->base).location.position.x;
      local_2c = pCVar1->y + (this_ptr->base).location.position.y;
      local_28 = pCVar1->z + (this_ptr->base).location.position.z;
      if ((float *)pcVar2 != &local_30) {
        *(float *)pcVar2 = local_30;
        *(float *)(pcVar2 + 4) = local_2c;
        *(float *)(pcVar2 + 8) = local_28;
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + 0x20;
    } while (iVar3 < *(int *)this_ptr->unk5);
  }
  return;
}
