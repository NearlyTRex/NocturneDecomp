// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
// Address: 0052fc50
// MANUAL RECONSTRUCTION
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
  uint uVar5;
  uint uVar6;
  int iVar9;
  int iVar11;
  int iVar_q;
  SMpegAllocationEntry *pEntry;
  SMpegAllocationEntry *local_4c;
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
      local_1c = &allocation_array->granules[local_48];
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar4 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          for (iVar_q = 0; iVar_q < 3; iVar_q = iVar_q + 1) {
            local_18->codes.q[iVar_q][local_48] = 0;
          }
        }
        else {
          pEntry = &pSVar5[local_2c * 16 + *local_1c];
          if (pEntry->mode_flag == 3) {
            for (iVar_q = 0; iVar_q < 3; iVar_q = iVar_q + 1) {
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                                (this_ptr,
                                 local_4c[allocation_array[local_20].granules[local_48]].bit_count);
              local_18->codes.q[iVar_q][local_48] = uVar5;
            }
          }
          else {
            uVar7 = pEntry->value_range;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,pEntry->bit_count);
            for (iVar_q = 0; iVar_q < 3; iVar_q = iVar_q + 1) {
              local_18->codes.q[iVar_q][local_48] = uVar6 % uVar7;
              uVar6 = uVar6 / uVar7;
            }
          }
        }
        if ((iVar1 == 2) && (iVar4 <= local_2c)) {
          for (iVar_q = 0; iVar_q < 3; iVar_q = iVar_q + 1) {
            sample_array[1].codes.q[iVar_q][local_48] = sample_array->codes.q[iVar_q][local_48];
          }
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      }
      local_48 = local_48 + 1;
      local_4c = local_4c + 16;
      local_2c = local_2c + 1;
    } while (local_2c < iVar2);
  }
  if (iVar2 < 0x20) {
    iVar11 = iVar2;
    do {
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          for (iVar_q = 0; iVar_q < 3; iVar_q = iVar_q + 1) {
            sample_array[iVar9].codes.q[iVar_q][iVar11] = 0;
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x20);
  }
  return;
}
