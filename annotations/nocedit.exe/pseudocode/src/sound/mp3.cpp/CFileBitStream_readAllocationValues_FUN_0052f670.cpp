// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
// Address: 0052f670
// Address Range: [[0052f670, 0052f79f]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream * this_ptr, SMpegSubbandAllocation * output_allocation, SBitAllocationTable * alloc_table_info)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670
          (CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,
          SBitAllocationTable *alloc_table_info)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  void *local_18;
  int local_14;
  
  iVar9 = alloc_table_info->num_granules;
  iVar1 = alloc_table_info->num_subbands;
  iVar6 = alloc_table_info->num_allocation_groups;
  pvVar8 = alloc_table_info->allocation_data_ptr;
  if (0 < iVar6) {
    local_14 = 0;
    local_18 = pvVar8;
    do {
      iVar7 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)output_allocation->granules + local_14);
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                            (this_ptr,*(int *)((int)local_18 + 4));
          iVar7 = iVar7 + 1;
          *puVar3 = uVar2 & 0xff;
          puVar3 = puVar3 + 0x20;
        } while (iVar7 < iVar1);
      }
      local_14 = local_14 + 4;
      local_18 = (void *)((int)local_18 + 0x100);
    } while (local_14 < iVar6 * 4);
  }
  if (iVar6 < iVar9) {
    pvVar8 = (void *)(iVar6 * 0x100 + (int)pvVar8);
    piVar4 = output_allocation->granules + iVar6;
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,*(int *)((int)pvVar8 + 4))
      ;
      pvVar8 = (void *)((int)pvVar8 + 0x100);
      piVar4[0x20] = uVar2 & 0xff;
      iVar6 = iVar6 + 1;
      *piVar4 = uVar2 & 0xff;
      piVar4 = piVar4 + 1;
    } while (iVar6 < iVar9);
  }
  if (iVar9 < 0x20) {
    iVar9 = iVar9 * 4;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        puVar5 = (uint *)((int)output_allocation->granules + iVar9);
        do {
          iVar6 = iVar6 + 1;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x20;
        } while (iVar6 < iVar1);
      }
      iVar9 = iVar9 + 4;
    } while (iVar9 < 0x80);
  }
  return;
}
