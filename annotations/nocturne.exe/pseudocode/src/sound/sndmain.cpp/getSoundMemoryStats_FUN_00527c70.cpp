// Name: sound_sndmain.cpp_getSoundMemoryStats_FUN_00527c70
// Address: 00527c70
// Address Range: [[00527c70, 00527d7c]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

#include "nocturne.h"

void sound_sndmain_cpp_getSoundMemoryStats_FUN_00527c70(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  CSfxSample *this_ptr;
  int iVar3;
  int iVar4;
  int local_1c;
  int local_18;
  int local_14;
  
  this_ptr = (CSfxSample *)&DAT_02dc1edc;
  iVar3 = 0;
  iVar4 = 0;
  local_1c = 0;
  local_14 = 0;
  local_18 = 0;
  do {
    iVar1 = iVar4 * 0x168;
    if (0 < *(int *)(iVar1 + 0x2dc2014)) {
      if ((*(int *)(iVar1 + 0x2dc2008) == 0) && (*(int *)(iVar1 + 0x2dc2004) == 0)) {
        local_1c = local_1c + 1;
        iVar2 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40
                          ((CSfxSample *)(&DAT_02dc1edc + iVar1));
        local_14 = local_14 + iVar2 * *(int *)(iVar1 + 0x2dc2014);
      }
      else {
        iVar1 = sound_sndmain_cpp_CSfxSample_getBytesPerFrame_FUN_00525c40(this_ptr);
        local_18 = local_18 + 1;
        iVar3 = iVar3 + iVar1 * this_ptr->loop_endpoints[4];
      }
    }
    iVar4 = iVar4 + 1;
    this_ptr = (CSfxSample *)&this_ptr->stream_write_position;
  } while (iVar4 < 0x40);
  if (param_1 != (int *)0x0) {
    *param_1 = local_18;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3;
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
     (iVar3 = DAT_005bea94 - (iVar3 + local_14), *param_6 = iVar3, iVar3 < 0)) {
    *param_6 = 0;
    return;
  }
  return;
}
