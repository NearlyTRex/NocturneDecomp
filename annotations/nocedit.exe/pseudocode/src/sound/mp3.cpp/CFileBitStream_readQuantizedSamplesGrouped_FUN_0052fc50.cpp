// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
// Address: 0052fc50
// Address Range: [[0052fc50, 0052fedc]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegAllocationTable *allocation_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegAllocationTable *allocation_table)

{
  int iVar2;
  int iVar4;
  SMpegAllocationEntry *pSVar5;
  uint uVar7;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar9;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar11;
  void *local_4c;
  int local_48;
  int local_2c;
  int local_20;
  int *local_1c;
  SMpegSubbandScalefactors *local_18;
  int iVar1;
  
  iVar1 = allocation_table->num_subbands;
  iVar2 = allocation_table->num_granules;
  iVar4 = allocation_table->num_allocation_groups;
  pSVar5 = allocation_table->allocation_data_ptr;
  local_2c = 0;
  if (0 < iVar2) {
    local_48 = 0;
    local_4c = pSVar5;
    do {
      local_18 = sample_array;
      local_1c = (int *)((int)allocation_array->granules + local_48);
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar4 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          puVar9 = (uint *)((int)&local_18->codes + local_48);
          do {
            *puVar9 = 0;
            puVar9 = puVar9 + 0x20;
          } while (puVar9 != (uint *)((int)&local_18[1].codes + local_48));
        }
        else {
          puVar4 = (uint *)(pSVar5 + local_2c * 0x10 + *local_1c);
          if (puVar4[2] == 3) {
            puVar11 = (uint *)((int)&local_18->codes + local_48);
            do {
              puVar10 = puVar11 + 0x20;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                                (this_ptr,*(int *)((int)local_4c +
                                                  *(int *)((int)allocation_array[local_20].granules
                                                          + local_48) * 0x10 + 4));
              *puVar11 = uVar5;
              puVar11 = puVar10;
            } while (puVar10 != (uint *)((int)&local_18[1].codes + local_48));
          }
          else {
            uVar7 = *puVar4;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,puVar4[1]);
            puVar11 = (uint *)((int)&local_18->codes + local_48);
            do {
              *puVar11 = uVar6 % uVar7;
              uVar6 = uVar6 / uVar7;
              puVar11 = puVar11 + 0x20;
            } while (puVar11 != (uint *)((int)&local_18[1].codes + local_48));
          }
        }
        if ((iVar1 == 2) && (iVar4 <= local_2c)) {
          puVar8 = (uint *)((int)&sample_array->codes + local_48);
          do {
            puVar8 = puVar8 + 0x20;
            puVar8[0x60] = *puVar8;
            puVar8 = puVar8;
          } while (puVar8 != (uint *)((int)&sample_array[1].codes + local_48));
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      }
      local_48 = local_48 + 4;
      local_4c = (void *)((int)local_4c + 0x100);
      local_2c = local_2c + 1;
    } while (local_2c < iVar2);
  }
  if (iVar2 < 0x20) {
    iVar11 = iVar2 * 4;
    do {
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          puVar7 = (uint *)((int)&sample_array[iVar9].codes + iVar11);
          do {
            puVar7 = puVar7 + 0x20;
            *puVar7 = 0;
            puVar7 = puVar7;
          } while (puVar7 != (uint *)((int)&sample_array[iVar9 + 1].codes + iVar11));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0x80);
  }
  return;
}
