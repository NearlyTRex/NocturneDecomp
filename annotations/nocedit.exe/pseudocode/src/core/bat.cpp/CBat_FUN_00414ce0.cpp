// Name: core_bat.cpp_CBat_FUN_00414ce0
// Address: 00414ce0
// Address Range: [[00414ce0, 00414db6]]
// Convention: __cdecl
// Signature: void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

#include "nocturne.h"

void __cdecl core_bat_cpp_CBat_FUN_00414ce0(CBat *this_ptr)

{
  float fVar1;
  float fVar2;
  int extraout_EBX;
  int iVar3;
  int extraout_EBX_00;
  double dVar4;
  uint uVar5;
  uint local_28;
  float fStack_24;
  
  fVar1 = this_ptr->param;
  fVar2 = (float)(this_ptr->course).len;
  local_28 = SUB84((double)fVar1,0);
  if (0.0 <= (double)fVar1) {
    dVar4 = (double)(fVar1 / fVar2);
    uVar5 = (uint)((ulonglong)dVar4 >> 0x20);
    dVar4 = floor(dVar4);
    fStack_24 = (float)(double)CONCAT44(local_28,uVar5) - (float)dVar4 * fVar1;
    iVar3 = extraout_EBX_00;
  }
  else {
    dVar4 = (double)(-fVar1 / fVar2);
    uVar5 = (uint)((ulonglong)dVar4 >> 0x20);
    dVar4 = floor(dVar4);
    fStack_24 = (float)dVar4 * fVar1 + (float)(double)CONCAT44(local_28,uVar5);
    iVar3 = extraout_EBX;
    if (fStack_24 < 0.0) {
      fStack_24 = fStack_24 + fVar1;
    }
  }
  *(float *)(iVar3 + 0x304) = fStack_24;
  core_course_cpp_CCourse_FUN_00442710((CCourse *)(iVar3 + 0x178));
  return;
}
