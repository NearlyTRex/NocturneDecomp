// Name: core_bugs.cpp_CBugs_FUN_004272f0
// Address: 004272f0
// Address Range: [[004272f0, 004273f1]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_004272f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_FUN_004272f0(CBugs *this_ptr)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CVector3f *point;
  int iVar7;
  
  pcVar1 = this_ptr->bugs[0].unk + 8;
  if (this_ptr->unk5 != pcVar1) {
    *(uint *)this_ptr->unk5 = *(uint *)pcVar1;
    *(uint *)(this_ptr->unk5 + 4) = *(uint *)(this_ptr->bugs[0].unk + 0xc);
    *(uint *)(this_ptr->unk5 + 8) = *(uint *)(this_ptr->bugs[0].unk + 0x10);
  }
  if (this_ptr->unk5 + 0xc != pcVar1) {
    *(uint *)(this_ptr->unk5 + 0xc) = *(uint *)pcVar1;
    *(uint *)(this_ptr->unk5 + 0x10) = *(uint *)(this_ptr->bugs[0].unk + 0xc);
    *(uint *)(this_ptr->unk5 + 0x14) = *(uint *)(this_ptr->bugs[0].unk + 0x10);
  }
  iVar7 = 1;
  if (1 < this_ptr->count) {
    point = (CVector3f *)(this_ptr->bugs[1].unk + 8);
    do {
      iVar7 = iVar7 + 1;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)this_ptr->unk5,point);
      point = (CVector3f *)&point[5].y;
    } while (iVar7 < this_ptr->count);
  }
  fVar2 = *(float *)this_ptr->unk5 + -0.3333333f;
  fVar3 = *(float *)(this_ptr->unk5 + 8) + -0.3333333f;
  fVar4 = *(float *)(this_ptr->unk5 + 0xc) + 0.3333333f;
  fVar5 = *(float *)(this_ptr->unk5 + 0x10) + 0.3333333f;
  fVar6 = *(float *)(this_ptr->unk5 + 0x14) + 0.3333333f;
  *(float *)(this_ptr->unk5 + 4) = *(float *)(this_ptr->unk5 + 4) + -0.3333333f;
  *(float *)(this_ptr->unk5 + 8) = fVar3;
  *(float *)(this_ptr->unk5 + 0xc) = fVar4;
  *(float *)(this_ptr->unk5 + 0x10) = fVar5;
  *(float *)(this_ptr->unk5 + 0x14) = fVar6;
  *(float *)this_ptr->unk5 = fVar2;
  return;
}
