// Name: core_skeledit.cpp_CDeformableModel_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b9b0(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b9b0(CDeformableModel *this_ptr)

{
  float fVar1;
  SInputFace *pSVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  float unaff_EBP;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  _FILE *in_stack_00000008;
  float local_54 [4];
  byte local_44 [4];
  float local_40;
  byte local_3c [4];
  byte local_38 [4];
  ushort local_34 [2];
  double local_30;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  __STK();
  iVar7 = 1;
  do {
    iVar4 = _fgetc(in_stack_00000008);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar7 = iVar7 + -1, 0 < iVar7));
  iVar7 = 0;
  if (0 < this_ptr->tri_count[0]) {
    iVar4 = 0;
    iVar8 = 0;
    do {
      iVar5 = _fscanf(in_stack_00000008,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_28,local_3c,
                         local_54 + 3,local_54,local_38,local_44,local_54 + 1,local_34,&local_40,
                         local_54 + 2);
      if (iVar5 != 10) {
        return 0;
      }
      local_24 = local_54[3];
      local_1c = 4.0;
      iVar5 = 4;
      local_18 = local_54[0];
      do {
        if (*(float *)(local_44 + iVar5 + -4) < local_24) {
          local_24 = *(float *)(local_44 + iVar5 + -4);
        }
        if (*(float *)((int)local_54 + iVar5) < local_18) {
          local_18 = *(float *)((int)local_54 + iVar5);
        }
        iVar5 = iVar5 + 4;
      } while (iVar5 != 0xc);
      local_30 = floor((double)((local_24 + 4.0) * (float)0.00390625));
      local_24 = (float)((float10)local_30 * (float10)256);
      local_30 = floor
                           ((double)((local_18 + local_1c) * (float)0.00390625));
      local_18 = (float)((float10)local_30 * (float10)256);
      if (local_28 < 0) {
        local_28 = 0;
      }
      if (this_ptr->num_textures <= local_28) {
        local_28 = 0;
      }
      pSVar2 = this_ptr->tri_data_ptr[0];
      *(int *)((int)this_ptr->index_data_ptr[0] + iVar4) = local_28;
      iVar5 = 0;
      puVar6 = (ushort *)((int)&(pSVar2->vertex_indices).vertex_index_0 + iVar8);
      do {
        *puVar6 = *(ushort *)((int)local_34 + iVar5);
        fVar1 = *(float *)((int)local_54 + iVar5 + 8U);
        fVar3 = (float)256;
        local_54[1] = 8.148736e-39;
        dVar9 = round
                          ((double)((*(float *)(local_3c + iVar5 + -4) - local_1c) * fVar3));
        local_54[0] = 8.148745e-39;
        dVar10 = round((double)((fVar1 - unaff_EBP) * fVar3));
        local_20 = (int)ROUND(dVar9);
        local_14 = (int)ROUND(dVar10);
        if (local_20 < 0) {
          local_20 = 0;
        }
        else if (0xffff < local_20) {
          local_20 = 0xffff;
        }
        if (local_14 < 0) {
          local_14 = 0;
        }
        else if (0xffff < local_14) {
          local_14 = 0xffff;
        }
        puVar6[3] = (short)local_20;
        iVar5 = iVar5 + 4;
        puVar6[6] = (short)local_14;
        puVar6 = puVar6 + 1;
      } while (iVar5 != 0xc);
      iVar4 = iVar4 + 4;
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0x12;
    } while (iVar7 < this_ptr->tri_count[0]);
  }
  core_skeledit_cpp_CDeformableModel_FUN_0058ede0(this_ptr);
  return 1;
}
