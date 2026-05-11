// Name: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
// Address: 0052f7a0
// MANUAL RECONSTRUCTION
// Address Range: [[0052f7a0, 0052f84a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SMpegAllocationTable *alloc_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SMpegAllocationTable *alloc_table)

{
  uint uVar2;
  uint uVar1;
  int iVar2;
  int iVar4;
  int iVar5;
  int local_14;
  int iVar1;

  iVar1 = alloc_table->num_subbands;
  iVar2 = alloc_table->num_allocation_groups;
  if (0 < iVar2) {
    local_14 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
          output_array[local_14 + iVar4 * 0x20] = uVar2;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
      local_14 = local_14 + 1;
    } while (local_14 < iVar2);
  }
  if (iVar2 < 0x20) {
    iVar5 = iVar2;
    do {
      uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
      if (0 < iVar1) {
        output_array[iVar5] = uVar1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x20);
  }
  return;
}
