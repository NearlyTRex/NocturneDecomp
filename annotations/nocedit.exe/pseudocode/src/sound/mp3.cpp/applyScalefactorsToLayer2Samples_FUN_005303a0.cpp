// Name: sound_mp3.cpp_applyScalefactorsToLayer2Samples_FUN_005303a0
// Address: 005303a0
// Address Range: [[005303a0, 005303f7]]
// Convention: __cdecl
// Signature: void __cdecl sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info)

#include "nocturne.h"

void __cdecl sound_mp3_cpp_applyScalefactorsToLayer2Samples_FUN_005303a0(float *sample_array,int *scalefactor_indices,SMpegFrame *frame_info)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  iVar1 = frame_info->channel_count;
  do {
    iVar5 = 0;
    if (0 < iVar1) {
      piVar4 = (int *)((int)scalefactor_indices + iVar6);
      pfVar3 = (float *)((int)sample_array + iVar6);
      do {
        iVar2 = *piVar4;
        piVar4 = piVar4 + 0x60;
        iVar5 = iVar5 + 1;
        *pfVar3 = *pfVar3 * (float)g_MpegScalefactorTable[iVar2];
        pfVar3 = pfVar3 + 0x60;
      } while (iVar5 < iVar1);
    }
    iVar6 = iVar6 + 4;
  } while (iVar6 != 0x80);
  return;
}
