// Name: core_ground.cpp_CGround_transformAndStoreVertex_FUN_004d0020
// Address: 004d0020
// Address Range: [[004d0020, 004d0109]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004d0020(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_transformAndStoreVertex_FUN_004d0020(CGround *this_ptr,int column,int row)

{
  int iVar1;
  int iVar2;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = core_ground_cpp_CGround_getVertexIndex_FUN_004d0000
                    (this_ptr,(row - *(int *)&this_ptr->field_0x30) + *(int *)&this_ptr->field_0x14,
                     (column - *(int *)&this_ptr->field_0x2c) + *(int *)&this_ptr->field_0x10);
  local_1c = *(int *)&this_ptr->field_0x1c * column * 0x100;
  local_14 = *(int *)&this_ptr->field_0x1c * row * 0x100;
  local_18 = *(int *)&this_ptr->field_0x20 *
             (int)*(short *)(*(int *)&this_ptr->field_0x24 +
                            ((row & *(uint *)&this_ptr->field_0xc) * *(int *)this_ptr +
                            (column & *(uint *)&this_ptr->field_0x8)) * 4);
  engine_special_cpp_FUN_0056356c
            ((SProjectedVertex *)(&DAT_0060b014 + iVar1 * 0xc),(CVector3i *)&local_1c);
  (&DAT_0060b034)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b038)[iVar1 * 0xc] = 0x3fff;
  (&DAT_0060b03c)[iVar1 * 0xc] = 0x3fff;
  if ((int)(&DAT_0060b01c)[iVar1 * 0xc] < 0) {
    (&DAT_0060b040)[iVar1 * 0xc] = 0;
  }
  else {
    iVar2 = (int)((&DAT_0060b01c)[iVar1 * 0xc] << 8) /
            (*(int *)&this_ptr->field_0x10 * *(int *)&this_ptr->field_0x1c);
    (&DAT_0060b040)[iVar1 * 0xc] = iVar2;
    if (0xffff < iVar2) {
      (&DAT_0060b040)[iVar1 * 0xc] = 0xffff;
      return;
    }
  }
  return;
}
