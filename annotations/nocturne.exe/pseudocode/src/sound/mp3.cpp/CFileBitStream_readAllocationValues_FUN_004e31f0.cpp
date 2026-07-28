// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_004e31f0
// Address: 004e31f0
// Address Range: [[004e31f0, 004e331f]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_004e31f0(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  SMpegAllocationEntry *pSVar8;
  int iVar9;
  SMpegAllocationEntry *local_18;
  int local_14;
  
  iVar9 = frame->sblimit;
  iVar1 = frame->channel_count;
  iVar6 = frame->js_bound;
  pSVar8 = frame->allocation_entries;
  if (0 < iVar6) {
    local_14 = 0;
    local_18 = pSVar8;
    do {
      iVar7 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)output_allocation->bit_allocations + local_14);
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,local_18->bit_count);
          iVar7 = iVar7 + 1;
          *puVar3 = uVar2 & 0xff;
          puVar3 = puVar3 + 0x20;
        } while (iVar7 < iVar1);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 0x10;
    } while (local_14 < iVar6 * 4);
  }
  if (iVar6 < iVar9) {
    pSVar8 = pSVar8 + iVar6 * 0x10;
    piVar4 = output_allocation->bit_allocations + iVar6;
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_004e2ac0(this_ptr,pSVar8->bit_count);
      pSVar8 = pSVar8 + 0x10;
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
        puVar5 = (uint *)((int)output_allocation->bit_allocations + iVar9);
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
