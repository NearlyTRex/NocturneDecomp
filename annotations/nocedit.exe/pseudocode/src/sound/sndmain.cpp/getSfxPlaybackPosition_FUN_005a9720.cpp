// Name: sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
// Address: 005a9720
// Address Range: [[005a9720, 005a97d8]]
// Convention: __cdecl
// Signature: double __cdecl sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format)

#include "nocturne.h"

double __cdecl
sound_sndmain_cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle,uint output_format)

{
  CSfxSlot *this_ptr;
  int iVar1;
  double dVar2;
  uint in_stack_00000004;
  uint in_stack_ffffffd8;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  
  this_ptr = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005a5d00(in_stack_00000004,1);
  if (this_ptr == (CSfxSlot *)0x0) {
    local_24 = 0xbff00000;
    local_20 = 0;
  }
  else {
    if ((this_ptr->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
      iVar1 = sound_sndmain_cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0(this_ptr);
      if (iVar1 == 0) {
        sound_sndmain_cpp_unlockSound_FUN_005abdc0();
        return -1.0;
      }
    }
    dVar2 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                      (*(CSampleInfo **)&(this_ptr->options).trigger_time,
                       *(double *)((int)&(this_ptr->options).trigger_time + 4),sfx_handle,
                       in_stack_ffffffd8);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    local_20 = SUB84(dVar2,0);
    uStack_1c = (uint)((ulonglong)dVar2 >> 0x20);
    local_24 = uStack_1c;
  }
  return (double)CONCAT44(local_24,local_20);
}
