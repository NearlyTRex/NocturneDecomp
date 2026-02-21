// Name: core_skeledit.cpp_CDeformableModel_FUN_0058b9b0
// Address: 0058b9b0
// Address Range: [[0058b9b0, 0058bc30]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_skeledit_cpp_CDeformableModel_FUN_0058b9b0(CDeformableModel *this_ptr,_FILE *file_handle)

{
  SInputFace *pSVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  float local_54;
  byte local_50 [4];
  byte local_4c [4];
  float local_48;
  byte local_44 [4];
  byte local_40 [4];
  ushort local_3c [2];
  byte local_38 [4];
  byte local_34 [4];
  double local_30;
  int local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  __STK();
  iVar5 = 1;
  do {
    iVar2 = _fgetc(file_handle);
    if (iVar2 < 0) break;
  } while ((iVar2 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->tri_count[0]) {
    iVar2 = 0;
    iVar6 = 0;
    do {
      iVar3 = _fscanf(file_handle,"%d,%d,%f,%f,%d,%f,%f,%d,%f,%f\n",&local_28,local_3c,&local_48,
                         &local_54,local_38,local_44,local_50,local_34,local_40,local_4c);
      if (iVar3 != 10) {
        return 0;
      }
      local_24 = local_48;
      local_1c = 4.0;
      iVar3 = 4;
      local_18 = local_54;
      do {
        if (*(float *)(local_44 + iVar3 + -4) < local_24) {
          local_24 = *(float *)(local_44 + iVar3 + -4);
        }
        if (*(float *)(local_50 + iVar3 + -4) < local_18) {
          local_18 = *(float *)(local_50 + iVar3 + -4);
        }
        iVar3 = iVar3 + 4;
      } while (iVar3 != 0xc);
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
      pSVar1 = this_ptr->tri_data_ptr[0];
      *(int *)((int)this_ptr->index_data_ptr[0] + iVar2) = local_28;
      iVar3 = 0;
      puVar4 = (ushort *)((int)&(pSVar1->vertex_indices).vertex_index_0 + iVar6);
      do {
        *puVar4 = *(ushort *)((int)local_3c + iVar3);
        local_20 = (int)ROUND(ROUND((*(float *)(local_44 + iVar3 + -4) - local_24) *
                                    (float)256));
        local_14 = (int)ROUND(ROUND((*(float *)(local_50 + iVar3 + -4) - local_18) *
                                    (float)256));
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
        puVar4[3] = (short)local_20;
        iVar3 = iVar3 + 4;
        puVar4[6] = (short)local_14;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0xc);
      iVar2 = iVar2 + 4;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x12;
    } while (iVar5 < this_ptr->tri_count[0]);
  }
  core_skeledit_cpp_CDeformableModel_FUN_0058ede0(this_ptr);
  return 1;
}
