// Name: core_skeledit.cpp_CDeformableModel_initSinglePart_FUN_0058f790
// Address: 0058f790
// MANUAL RECONSTRUCTION
// Address Range: [[0058f790, 0058f80d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(CDeformableModel *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(CDeformableModel *this_ptr)

{
  char cVar1;
  int iVar2;
  int iVar4;
  char *pcVar5;
  SPart *pSVar6;
  
  pcVar5 = "TheOnlyPart";
  pSVar6 = this_ptr->parts;
  this_ptr->num_parts = 1;
  do {
    cVar1 = *pcVar5;
    pSVar6->part_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pSVar6->part_name[1] = cVar1;
    pSVar6 = (SPart *)(pSVar6->part_name + 2);
  } while (cVar1 != '\0');
  iVar4 = 0;
  if (0 < this_ptr->num_lods) {
    do {
      iVar2 = this_ptr->tri_count[iVar4];
      this_ptr->parts[0].cap_tri_counts[iVar4] = 0;
      this_ptr->parts[0].tri_counts[iVar4] = iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_ptr->num_lods);
  }
  this_ptr->parts[0].adj_part_count = 0;
  return;
}
