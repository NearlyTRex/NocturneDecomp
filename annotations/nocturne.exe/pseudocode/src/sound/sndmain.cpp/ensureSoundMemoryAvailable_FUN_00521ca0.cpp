// Name: sound_sndmain.cpp_ensureSoundMemoryAvailable_FUN_00521ca0
// Address: 00521ca0
// Address Range: [[00521ca0, 00521d75]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(int requested_bytes)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_ensureSoundMemoryAvailable_FUN_00521ca0(int requested_bytes)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  do {
    if (*(int *)((int)(&g_CSfxSample_ARRAY_02dc1edc[0].sample_info + 1) + iVar2) != 0) {
      iVar3 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                        ((CSfxSample *)(g_CSfxSample_ARRAY_02dc1edc[0].sample_info.name + iVar2));
      iVar4 = iVar4 + iVar3 * *(int *)((int)(&g_CSfxSample_ARRAY_02dc1edc[0].sample_info + 1) +
                                      iVar2 + 0x18);
    }
    iVar2 = iVar2 + 0x168;
  } while (iVar2 != 0x5a00);
LAB_00521cc3:
  do {
    if (iVar4 + requested_bytes <= DAT_005bea94) {
      return 1;
    }
    iVar3 = 0;
    iVar2 = _DAT_02dc1ed8;
    do {
      iVar2 = iVar2 + 1;
      if (0x3f < iVar2) {
        iVar2 = 0;
      }
      if ((((g_CSfxSample_ARRAY_02dc1edc[iVar2].sample_data != (short *)0x0) &&
           (0 < g_CSfxSample_ARRAY_02dc1edc[iVar2].streaming_buffer_size)) &&
          (g_CSfxSample_ARRAY_02dc1edc[iVar2].ref_count == 0)) &&
         (g_CSfxSample_ARRAY_02dc1edc[iVar2].taken == 0)) {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                          (g_CSfxSample_ARRAY_02dc1edc + iVar2);
        iVar4 = iVar4 - iVar1 * g_CSfxSample_ARRAY_02dc1edc[iVar2].streaming_buffer_size;
        sound_sndmain_cpp_CSfxSample_freeMemory_FUN_00523a60(g_CSfxSample_ARRAY_02dc1edc + iVar2);
        if (0x3f < iVar3) {
          return 0;
        }
        goto LAB_00521cc3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x40);
    if (0x3f < iVar3) {
      return 0;
    }
  } while( true );
}
