// Name: sound_mp3.cpp_CFileBitStream_readQuantizedSamples_FUN_00505710
// Address: 00505710
// Address Range: [[00505710, 00505801]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_00505710(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readQuantizedSamples_FUN_00505710(CFileBitStream *this_ptr,SMpegSubbandScalefactors *quantized_samples,SMpegSubbandAllocation *allocation,SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  SMpegSubbandScalefactors *pSVar3;
  SMpegSubbandAllocation *pSVar4;
  int iVar5;
  int iVar6;
  SMpegSubbandAllocation *local_18;
  int local_14;
  
  iVar1 = *(int *)(frame + 0x10);
  iVar6 = *(int *)(frame + 0x14);
  if (0 < iVar6) {
    local_14 = 0;
    do {
      iVar5 = 0;
      if (0 < iVar1) {
        pSVar4 = allocation + local_14;
        pSVar3 = quantized_samples + local_14;
        do {
          uVar2 = 0;
          if (*(int *)pSVar4 != 0) {
            uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,*(int *)pSVar4 + 1);
          }
          *(uint *)pSVar3 = uVar2;
          pSVar3 = pSVar3 + 0x180;
          iVar5 = iVar5 + 1;
          pSVar4 = pSVar4 + 0x80;
        } while (iVar5 < iVar1);
      }
      local_14 = local_14 + 4;
    } while (local_14 < iVar6 << 2);
  }
  if (iVar6 < 0x20) {
    iVar6 = iVar6 * 4;
    local_18 = allocation + iVar6;
    do {
      uVar2 = 0;
      if (*(int *)local_18 != 0) {
        uVar2 = sound_mp3_cpp_CFileBitStream_readBits_FUN_00504b00(this_ptr,*(int *)local_18 + 1);
      }
      iVar5 = 0;
      if (0 < iVar1) {
        pSVar3 = quantized_samples + iVar6;
        do {
          iVar5 = iVar5 + 1;
          *(uint *)pSVar3 = uVar2;
          pSVar3 = pSVar3 + 0x180;
        } while (iVar5 < iVar1);
      }
      local_18 = local_18 + 4;
      iVar6 = iVar6 + 4;
    } while (iVar6 < 0x80);
  }
  return;
}
