// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_0052f670
// Address: 0052f670
// MANUAL RECONSTRUCTION
// Address Range: [[0052f670, 0052f79f]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_0052f670(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame)

{
  SMpegAllocationEntry *pvVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar6;
  int iVar7;
  SMpegAllocationEntry *pvVar8;
  int iVar9;
  SMpegAllocationEntry *local_18;
  int local_14;
  int iVar1;

  iVar4 = frame->sblimit;
  iVar1 = frame->channel_count;
  iVar6 = frame->js_bound;
  pvVar1 = frame->allocation_entries;
  if (0 < iVar6) {
    local_14 = 0;
    local_18 = pvVar1;
    do {
      iVar7 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40
                            (this_ptr,local_18->bit_count);
          output_allocation->bit_allocations[local_14 + iVar7 * 0x20] = uVar2 & 0xff;
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar1);
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 16;
    } while (local_14 < iVar6);
  }
  if (iVar6 < iVar4) {
    pvVar8 = pvVar1 + iVar6 * 16;
    do {
      uVar3 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,pvVar8->bit_count);
      pvVar8 = pvVar8 + 16;
      output_allocation->bit_allocations[iVar6 + 0x20] = uVar3 & 0xff;
      output_allocation->bit_allocations[iVar6] = uVar3 & 0xff;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar4);
  }
  if (iVar4 < 0x20) {
    iVar9 = iVar4;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          output_allocation->bit_allocations[iVar9 + iVar4 * 0x20] = 0;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x20);
  }
  return;
}
