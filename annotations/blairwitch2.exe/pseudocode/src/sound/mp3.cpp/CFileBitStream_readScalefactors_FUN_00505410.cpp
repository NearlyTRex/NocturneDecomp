// Name: sound_mp3.cpp_CFileBitStream_readScalefactors_FUN_00505410
// Address: 00505410
// Address Range: [[00505410, 00505482]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_00505410(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_readScalefactors_FUN_00505410(CFileBitStream *this_ptr,SMpegSubbandAllocation *allocation_indices,SMpegSubbandScalefactors *scalefactors,SMpegFrame *frame)

{
  int iVar1;
  uint uVar2;
  SMpegSubbandScalefactors *pSVar3;
  int iVar4;
  SMpegSubbandAllocation *pSVar5;
  int local_14;
  
  local_14 = 0;
  iVar1 = *(int *)(frame + 0x10);
  do {
    iVar4 = 0;
    if (0 < iVar1) {
      pSVar3 = scalefactors + local_14;
      pSVar5 = allocation_indices + local_14;
      do {
        if (*(int *)pSVar5 == 0) {
          *(uint *)pSVar3 = 0x3f;
        }
        else {
          uVar2 = sound_mp3_cpp_FUN_00504b00(this_ptr,6);
          *(uint *)pSVar3 = uVar2;
        }
        pSVar3 = pSVar3 + 0x180;
        iVar4 = iVar4 + 1;
        pSVar5 = pSVar5 + 0x80;
      } while (iVar4 < iVar1);
    }
    local_14 = local_14 + 4;
  } while (local_14 != 0x80);
  return;
}
