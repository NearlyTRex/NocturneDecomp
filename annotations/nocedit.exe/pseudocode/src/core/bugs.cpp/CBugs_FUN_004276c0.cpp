// Name: core_bugs.cpp_CBugs_FUN_004276c0
// Address: 004276c0
// Address Range: [[004276c0, 004277db]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_004276c0(CBugs *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_bugs_cpp_CBugs_FUN_004276c0(CBugs *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  CBugs *pCVar9;
  float *in_stack_00000008;
  
  pCVar1 = &(this_ptr->base).base.base.location;
  fVar3 = *in_stack_00000008 - (pCVar1->position).x;
  fVar4 = in_stack_00000008[1] - (this_ptr->base).base.base.location.position.y;
  fVar5 = in_stack_00000008[2] - (this_ptr->base).base.base.location.position.z;
  (pCVar1->position).x = *in_stack_00000008;
  (this_ptr->base).base.base.location.position.y = in_stack_00000008[1];
  (this_ptr->base).base.base.location.position.z = in_stack_00000008[2];
  iVar8 = 0;
  if (0 < this_ptr->count) {
    pcVar7 = this_ptr->bugs[0].unk + 8;
    do {
      *(float *)pcVar7 = *(float *)pcVar7 - fVar3;
      *(float *)(pcVar7 + 4) = *(float *)(pcVar7 + 4) - fVar4;
      *(float *)(pcVar7 + 8) = *(float *)(pcVar7 + 8) - fVar5;
      *(float *)(pcVar7 + 0x18) = *(float *)(pcVar7 + 0x18) - fVar3;
      *(float *)(pcVar7 + 0x1c) = *(float *)(pcVar7 + 0x1c) - fVar4;
      iVar8 = iVar8 + 1;
      *(float *)(pcVar7 + 0x20) = *(float *)(pcVar7 + 0x20) - fVar5;
      pcVar7 = pcVar7 + 0x40;
    } while (iVar8 < this_ptr->count);
  }
  fVar2 = *(float *)(this_ptr->unk5 + 4);
  *(float *)this_ptr->unk5 = *(float *)this_ptr->unk5 - fVar3;
  *(float *)(this_ptr->unk5 + 4) = fVar2 - fVar4;
  *(float *)(this_ptr->unk5 + 8) = *(float *)(this_ptr->unk5 + 8) - fVar5;
  iVar8 = 0;
  *(float *)(this_ptr->unk5 + 0xc) = *(float *)(this_ptr->unk5 + 0xc) - fVar3;
  *(float *)(this_ptr->unk5 + 0x10) = *(float *)(this_ptr->unk5 + 0x10) - fVar4;
  *(float *)(this_ptr->unk5 + 0x14) = *(float *)(this_ptr->unk5 + 0x14) - fVar5;
  pCVar9 = this_ptr;
  do {
    pCVar9 = (CBugs *)&(pCVar9->base).base.base.orient;
    pcVar7 = (this_ptr->base).base.base.actor_name + iVar8 * 0x30;
    do {
      pcVar6 = pcVar7 + 4;
      *(float *)((int)pcVar7 + 0x128b8) = *(float *)((int)pcVar7 + 0x128b8) - fVar4;
      pcVar7 = pcVar6;
    } while ((CBugs *)pcVar6 != pCVar9);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0xc);
  return;
}
