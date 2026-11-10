// Name: sound_mp3.cpp_CFileBitStream_readAllocationValues_FUN_00505230
// Address: 00505230
// Address Range: [[00505230, 0050535f]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00505230(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readAllocationValues_FUN_00505230(CFileBitStream *this_ptr,SMpegSubbandAllocation *output_allocation,SMpegFrame *frame )

{
  int iVar1;
  uint uVar2;
  SMpegSubbandAllocation *pSVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_18;
  int local_14;
  
  iVar7 = *(int *)(frame + 0x18);
  iVar1 = *(int *)(frame + 0x10);
  iVar4 = *(int *)(frame + 0x14);
  iVar6 = *(int *)(frame + 8);
  if (0 < iVar4) {
    local_14 = 0;
    local_18 = iVar6;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        pSVar3 = output_allocation + local_14;
        do {
          uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00
                            (this_ptr,*(int *)(local_18 + 4));
          iVar5 = iVar5 + 1;
          *(uint *)pSVar3 = uVar2 & 0xff;
          pSVar3 = pSVar3 + 0x80;
        } while (iVar5 < iVar1);
      }
      local_14 = local_14 + 4;
      local_18 = local_18 + 0x100;
    } while (local_14 < iVar4 * 4);
  }
  if (iVar4 < iVar7) {
    iVar6 = iVar4 * 0x100 + iVar6;
    pSVar3 = output_allocation + iVar4 * 4;
    do {
      uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,*(int *)(iVar6 + 4));
      iVar6 = iVar6 + 0x100;
      *(uint *)(pSVar3 + 0x80) = uVar2 & 0xff;
      iVar4 = iVar4 + 1;
      *(uint *)pSVar3 = uVar2 & 0xff;
      pSVar3 = pSVar3 + 4;
    } while (iVar4 < iVar7);
  }
  if (iVar7 < 0x20) {
    iVar7 = iVar7 * 4;
    do {
      iVar4 = 0;
      if (0 < iVar1) {
        pSVar3 = output_allocation + iVar7;
        do {
          iVar4 = iVar4 + 1;
          *(uint *)pSVar3 = 0;
          pSVar3 = pSVar3 + 0x80;
        } while (iVar4 < iVar1);
      }
      iVar7 = iVar7 + 4;
    } while (iVar7 < 0x80);
  }
  return;
}
