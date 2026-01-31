// Name: core_bat.cpp_CBat_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

{
  float fVar1;
  int extraout_EBX;
  int iVar2;
  int extraout_EBX_00;
  double dVar3;
  uint uVar4;
  uint local_28;
  float fStack_24;
  
  fVar1 = this_ptr->param;
  local_28 = SUB84((double)fVar1,0);
  if (0.0 <= (double)fVar1) {
    dVar3 = (double)(fVar1 / (float)*(int *)(this_ptr->course_filename + 0x20));
    uVar4 = (uint)((ulonglong)dVar3 >> 0x20);
    dVar3 = floor(dVar3);
    fStack_24 = (float)(double)CONCAT44(local_28,uVar4) - (float)dVar3 * fVar1;
    iVar2 = extraout_EBX_00;
  }
  else {
    dVar3 = (double)(-fVar1 / (float)*(int *)(this_ptr->course_filename + 0x20));
    uVar4 = (uint)((ulonglong)dVar3 >> 0x20);
    dVar3 = floor(dVar3);
    fStack_24 = (float)dVar3 * fVar1 + (float)(double)CONCAT44(local_28,uVar4);
    iVar2 = extraout_EBX;
    if (fStack_24 < 0.0) {
      fStack_24 = fStack_24 + fVar1;
    }
  }
  *(float *)(iVar2 + 0x304) = fStack_24;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(iVar2 + 0x178));
  return;
}
