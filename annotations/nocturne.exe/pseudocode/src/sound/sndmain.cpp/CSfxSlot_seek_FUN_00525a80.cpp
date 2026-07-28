// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_00525a80
// Address: 00525a80
// Address Range: [[00525a80, 00525b64]]
// Convention: unknown
// Signature: void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1)

#include "nocturne.h"

void sound_sndmain_cpp_CSfxSlot_seek_FUN_00525a80(int param_1)

{
  CSfxSample *this_ptr;
  ulonglong uVar1;
  double dVar2;
  int dest_buffer_offset;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    PTR_01cc4800 = "..\\sound\\sndmain.cpp";
    INT_01cc4804 = 0xbf0;
    core_main_c_FUN_004c8440("SfxSlot::seek - no sample?!");
  }
  uVar1 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_00525c70
                    (*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                     *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68),0);
  *(uint *)(param_1 + 0x68) = 0;
  *(ulonglong *)(param_1 + 0x60) = uVar1;
  uVar1 = sound_sndmain_cpp_CSfxSample_normalizePlaybackPos_FUN_00525de0
                    (*(uint *)(param_1 + 0x74),*(uint *)(param_1 + 0x60),
                     *(uint *)(param_1 + 100),*(uint *)(param_1 + 0x68));
  this_ptr = *(CSfxSample **)(param_1 + 0x74);
  *(ulonglong *)(param_1 + 0x60) = uVar1;
  if (this_ptr->loop_endpoints[3] < 0) {
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x11c) = *(uint *)(param_1 + 100);
    return;
  }
  dest_buffer_offset = 0x525b3c;
  dVar2 = round(*(double *)(param_1 + 0x60));
  sound_sndmain_cpp_CSfxSample_seek_FUN_00523d10(this_ptr,(int)ROUND(dVar2),dest_buffer_offset);
  *(double *)(param_1 + 0x118) = (double)*(int *)(*(int *)(param_1 + 0x74) + 0x140);
  return;
}
