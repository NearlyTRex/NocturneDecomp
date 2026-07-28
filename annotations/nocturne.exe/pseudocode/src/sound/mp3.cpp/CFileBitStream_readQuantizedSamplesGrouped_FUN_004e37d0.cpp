// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0
// Address: 004e37d0
// Address Range: [[004e37d0, 004e3a5c]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamplesGrouped_FUN_004e37d0(CFileBitStream *this_ptr,SMpegSubbandScalefactors *sample_array,SMpegSubbandAllocation *allocation_array,SMpegFrame *frame)

{
  int iVar1;
  SMpegAllocationEntry *pSVar2;
  int iVar3;
  SMpegAllocationEntry *pSVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  SMpegAllocationEntry *local_4c;
  int local_48;
  int local_2c;
  int local_20;
  int *local_1c;
  SMpegSubbandScalefactors *local_18;
  
  iVar1 = frame->channel_count;
  iVar12 = frame->sblimit;
  iVar9 = frame->js_bound;
  pSVar2 = frame->allocation_entries;
  local_2c = 0;
  if (0 < iVar12) {
    local_48 = 0;
    local_4c = pSVar2;
    do {
      local_18 = sample_array;
      local_1c = (int *)((int)allocation_array->bit_allocations + local_48);
      local_20 = 0;
      while( true ) {
        iVar3 = iVar1;
        if (iVar9 <= local_2c) {
          iVar3 = 1;
        }
        if (iVar3 <= local_20) break;
        if (*local_1c == 0) {
          puVar8 = (uint *)((int)&local_18->codes + local_48);
          do {
            *puVar8 = 0;
            puVar8 = puVar8 + 0x20;
          } while (puVar8 != (uint *)((int)&local_18[1].codes + local_48));
        }
        else {
          pSVar4 = pSVar2 + local_2c * 0x10 + *local_1c;
          if (pSVar4->mode_flag == 3) {
            puVar11 = (uint *)((int)&local_18->codes + local_48);
            do {
              puVar10 = puVar11 + 0x20;
              uVar5 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0
                                (this_ptr,local_4c[*(int *)((int)allocation_array[local_20].
                                                                 bit_allocations + local_48)].
                                          bit_count);
              *puVar11 = uVar5;
              puVar11 = puVar10;
            } while (puVar10 != (uint *)((int)&local_18[1].codes + local_48));
          }
          else {
            uVar5 = pSVar4->value_range;
            uVar6 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,pSVar4->bit_count);
            puVar11 = (uint *)((int)&local_18->codes + local_48);
            do {
              *puVar11 = uVar6 % uVar5;
              uVar6 = uVar6 / uVar5;
              puVar11 = puVar11 + 0x20;
            } while (puVar11 != (uint *)((int)&local_18[1].codes + local_48));
          }
        }
        if ((iVar1 == 2) && (iVar9 <= local_2c)) {
          puVar8 = (uint *)((int)&sample_array->codes + local_48);
          do {
            puVar7 = puVar8 + 0x20;
            puVar8[0x60] = *puVar8;
            puVar8 = puVar7;
          } while (puVar7 != (uint *)((int)&sample_array[1].codes + local_48));
        }
        local_1c = local_1c + 0x20;
        local_20 = local_20 + 1;
        local_18 = local_18 + 1;
      }
      local_48 = local_48 + 4;
      local_4c = local_4c + 0x10;
      local_2c = local_2c + 1;
    } while (local_2c < iVar12);
  }
  if (iVar12 < 0x20) {
    iVar12 = iVar12 * 4;
    do {
      iVar9 = 0;
      if (0 < iVar1) {
        do {
          puVar8 = (uint *)((int)&sample_array[iVar9].codes + iVar12);
          do {
            puVar7 = puVar8 + 0x20;
            *puVar8 = 0;
            puVar8 = puVar7;
          } while (puVar7 != (uint *)((int)&sample_array[iVar9 + 1].codes + iVar12));
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar1);
      }
      iVar12 = iVar12 + 4;
    } while (iVar12 < 0x80);
  }
  return;
}
