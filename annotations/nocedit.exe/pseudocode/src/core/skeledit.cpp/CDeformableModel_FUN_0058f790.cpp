// Name: core_skeledit.cpp_CDeformableModel_FUN_0058f790
// Address: 0058f790
// Address Range: [[0058f790, 0058f80d]]
// Convention: __cdecl
// Signature: int * __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058f790(CDeformableModel *this_ptr)

#include "nocturne.h"

int * __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058f790(CDeformableModel *this_ptr)

{
  char cVar1;
  int iVar2;
  SLod *in_EAX;
  undefined3 uVar4;
  CDeformableModel *pCVar3;
  int iVar5;
  char *pcVar6;
  SPart *pSVar7;
  
  __STK();
  pcVar6 = "TheOnlyPart";
  pSVar7 = this_ptr->parts;
  this_ptr->num_parts = 1;
  do {
    cVar1 = *pcVar6;
    uVar4 = (undefined3)((uint)in_EAX >> 8);
    in_EAX = (SLod *)CONCAT31(uVar4,cVar1);
    pSVar7->part_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    in_EAX = (SLod *)CONCAT31(uVar4,cVar1);
    pcVar6 = pcVar6 + 2;
    pSVar7->part_name[1] = cVar1;
    pSVar7 = (SPart *)(pSVar7->part_name + 2);
  } while (cVar1 != '\0');
  iVar5 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->num_lods) {
    do {
      iVar2 = pCVar3->tri_count[0];
      pCVar3->parts[0].cap_tri_counts[0] = 0;
      pCVar3->parts[0].tri_counts[0] = iVar2;
      iVar5 = iVar5 + 1;
      in_EAX = pCVar3->lod_info;
      pCVar3 = (CDeformableModel *)in_EAX;
    } while (iVar5 < this_ptr->num_lods);
  }
  this_ptr->parts[0].adj_part_count = 0;
  return &in_EAX->pixel_height;
}
