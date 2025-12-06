// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
// Address: 0052fc50
// Address Range: [[0052fc50, 0052fedc]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50(CFileBitStream * this_ptr, SMpegSubbandScalefactors * sample_array, SMpegSubbandAllocation * allocation_array, SBitAllocationTable * allocation_table)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_0052fc50
          (CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,
          SMpegSubbandAllocation *allocation_array,SBitAllocationTable *allocation_table)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  void *local_4c;
  int local_48;
  int local_2c;
  int local_20;
  int *local_1c;
  SMpegSubbandScalefactors *local_18;
  
  iVar1 = allocation_table->num_subbands;
  iVar11 = allocation_table->num_granules;
  iVar9 = allocation_table->num_allocation_groups;
  pvVar2 = allocation_table->allocation_data_ptr;
  local_2c = 0;
  if (0 < iVar11) {
    local_48 = 0;
    local_4c = pvVar2;
    do {
      local_18 = sample_array;
      local_1c = (int *)((int)allocation_array->granules + local_48);
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar9 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          puVar8 = (uint *)((int)local_18->codes[0] + local_48);
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
          } while (puVar8 != (uint *)((int)local_18[1].codes[0] + local_48));
        }
        else {
          puVar4 = (uint *)((int)pvVar2 + *local_1c * 0x10 + local_2c * 0x100);
          if (puVar4[2] == 3) {
            puVar4 = (uint *)((int)local_18->codes[0] + local_48);
            do {
              puVar10 = puVar4 + 0x20;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                                (this_ptr,*(int *)((int)local_4c +
                                                  *(int *)((int)allocation_array[local_20].granules
                                                          + local_48) * 0x10 + 4));
              *puVar4 = uVar5;
              puVar4 = puVar10;
            } while (puVar10 != (uint *)((int)local_18[1].codes[0] + local_48));
          }
          else {
            uVar5 = *puVar4;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,puVar4[1]);
            puVar4 = (uint *)(local_2c + (int)local_4c);
            do {
              *puVar4 = uVar6 % uVar5;
              uVar6 = uVar6 / uVar5;
              puVar4 = puVar4 + 0x20;
            } while (puVar4 != (uint *)(local_2c + 0x180 + (int)local_4c));
          }
        }
        if ((iVar1 == 2) && (iVar9 <= local_2c)) {
          puVar8 = (uint *)((int)sample_array->codes[0] + local_48);
          do {
            puVar7 = puVar8 + 0x20;
            puVar8[0x60] = *puVar8;
            puVar8 = puVar7;
          } while (puVar7 != (uint *)((int)sample_array[1].codes[0] + local_48));
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      }
      local_48 = local_48 + 4;
      local_4c = (void *)((int)local_4c + 0x100);
      local_2c = local_2c + 1;
    } while (local_2c < iVar11);
  }
  if (iVar11 < 0x20) {
    iVar11 = iVar11 * 4;
    do {
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          puVar8 = (uint *)((int)sample_array[iVar9].codes[0] + iVar11);
          do {
            puVar7 = puVar8 + 0x20;
            *puVar8 = 0;
            puVar8 = puVar7;
          } while (puVar7 != (uint *)((int)sample_array[iVar9 + 1].codes[0] + iVar11));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      iVar11 = iVar11 + 4;
    } while (iVar11 < 0x80);
  }
  return;
}
