// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50
// Address: 0052fb50
// Address Range: [[0052fb50, 0052fc41]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_0052fb50(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SBitAllocationTable *alloc_table)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_18;
  int local_14;
  
  iVar1 = alloc_table->num_subbands;
  iVar4 = alloc_table->num_allocation_groups;
  if (0 < iVar4) {
    local_14 = 0;
    do {
      iVar6 = 0;
      if (0 < iVar1) {
        piVar5 = (int *)((int)allocation->granules + local_14);
        puVar3 = (uint *)((int)quantized_samples->codes[0] + local_14);
        do {
          uVar2 = 0;
          if (*piVar5 != 0) {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,*piVar5 + 1);
          }
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 0x20;
        } while (iVar6 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar4 << 2);
  }
  if (iVar4 < 0x20) {
    iVar6 = iVar4 * 4;
    local_18 = allocation->granules + iVar4;
    do {
      uVar2 = 0;
      if (*local_18 != 0) {
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,*local_18 + 1);
      }
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)quantized_samples->codes[0] + iVar6);
        do {
          iVar4 = iVar4 + 1;
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x60;
        } while (iVar4 < iVar1);
      }
      local_18 = local_18 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}
