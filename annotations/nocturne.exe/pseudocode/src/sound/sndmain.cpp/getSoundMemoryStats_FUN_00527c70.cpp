// Name: sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70
// Address: 00527c70
// Address Range: [[00527c70, 00527d7c]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

#include "nocturne.h"

void sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  CSfxSample *this_ptr;
  int iVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  
  this_ptr = g_CSfxSample_ARRAY_02dc1edc;
  iVar2 = 0;
  iVar3 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  do {
    if (0 < g_CSfxSample_ARRAY_02dc1edc[iVar3].streaming_buffer_size) {
      if ((g_CSfxSample_ARRAY_02dc1edc[iVar3].ref_count == 0) &&
         (g_CSfxSample_ARRAY_02dc1edc[iVar3].taken == 0)) {
        local_1c = local_1c + 1;
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                          (g_CSfxSample_ARRAY_02dc1edc + iVar3);
        local_14 = local_14 + iVar1 * g_CSfxSample_ARRAY_02dc1edc[iVar3].streaming_buffer_size;
      }
      else {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
        local_18 = local_18 + 1;
        iVar2 = iVar2 + iVar1 * this_ptr->streaming_buffer_size;
      }
    }
    iVar3 = iVar3 + 1;
    this_ptr = this_ptr + 1;
  } while (iVar3 < 0x40);
  if (param_1 != (int *)0x0) {
    *param_1 = local_18;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar2;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = local_1c;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = local_14;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = 0x40 - (local_18 + local_1c);
  }
  if ((param_6 != (int *)0x0) &&
     (iVar2 = DAT_005bea94 - (iVar2 + local_14), *param_6 = iVar2, iVar2 < 0)) {
    *param_6 = 0;
    return;
  }
  return;
}
