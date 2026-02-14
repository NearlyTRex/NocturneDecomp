// Name: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
// Address: 0052f7a0
// Address Range: [[0052f7a0, 0052f84a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SBitAllocationTable *alloc_table)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SBitAllocationTable *alloc_table)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int local_14;
  
  iVar1 = alloc_table->num_subbands;
  iVar5 = alloc_table->num_allocation_groups;
  if (0 < iVar5) {
    local_14 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)(local_14 + (int)output_array);
        do {
          iVar4 = iVar4 + 1;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x20;
        } while (iVar4 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar5 << 2);
  }
  if (iVar5 < 0x20) {
    iVar5 = iVar5 << 2;
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
      iVar4 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)output_array + iVar5);
        do {
          iVar4 = iVar4 + 1;
          *puVar3 = uVar2;
          puVar3 = puVar3 + 0x20;
        } while (iVar4 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x80);
  }
  return;
}
