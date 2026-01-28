// Name: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_0052f850
// Address: 0052f850
// Address Range: [[0052f850, 0052f8c2]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850 (CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices, SMpegSubbandScalefactors *scalefactors,SBitAllocationTable *alloc_info)

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_0052f850
          (CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,
          SMpegSubbandScalefactors *scalefactors,SBitAllocationTable *alloc_info)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = alloc_info->num_subbands;
  do {
    iVar4 = 0;
    if (0 < iVar1) {
      puVar3 = (uint *)((int)scalefactors->codes[0] + local_14);
      piVar5 = (int *)((int)allocation_indices->granules + local_14);
      do {
        if (*piVar5 == 0) {
          *puVar3 = 0x3f;
        }
        else {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,6);
          *puVar3 = uVar2;
        }
        puVar3 = puVar3 + 0x60;
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 0x20;
      } while (iVar4 < iVar1);
    }
    local_14 = local_14 + 4;
  } while (local_14 != 0x80);
  return;
}
