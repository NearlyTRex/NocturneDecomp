// Name: sound_mp3.cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0
// Address: 0052f7a0
// Address Range: [[0052f7a0, 0052f84a]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationTable_FUN_0052f7a0(CFileBitStream *this_ptr,uint *output_array,SMpegFrame *frame)

{
  uint uVar2;
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar4;
  int iVar5;
  int local_14;
  int iVar1;
  
  iVar1 = frame->channel_count;
  iVar2 = frame->js_bound;
  if (0 < iVar2) {
    local_14 = 0;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        puVar4 = (uint *)(local_14 + (int)output_array);
        do {
          iVar4 = iVar4 + 1;
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
          *puVar4 = uVar2;
          puVar4 = puVar4 + 0x20;
        } while (iVar4 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar2 << 2);
  }
  if (iVar2 < 0x20) {
    iVar5 = iVar2 << 2;
    do {
      uVar1 = sound_mp3_cpp_CFileBitStream_readBits_FUN_0052ef40(this_ptr,4);
      iVar2 = 0;
      if (0 < iVar1) {
        puVar3 = (uint *)((int)output_array + iVar5);
        do {
          puVar3 = puVar3 + 0x20;
          iVar2 = iVar2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3;
        } while (iVar2 < iVar1);
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 0x80);
  }
  return;
}
