// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00550f50
// Address: 00550f50
// Address Range: [[00550f50, 00550fa2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(uint sfx_handle,float base_frequency)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00550f50(uint sfx_handle,float base_frequency)

{
  CSfxSlot *slot;
  int iVar1;
  
  slot = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0054d3a0(sfx_handle,1);
  iVar1 = 0;
  if (slot != (CSfxSlot *)0x0) {
    (slot->options).base_frequency = base_frequency;
    *(byte *)&slot->changed_flags = (byte)slot->changed_flags | 0x10;
    if ((slot->hardware_buffer_handle != 0) && (g_CSoundDevicePtr != (CSoundDevice *)0x0)) {
      (*g_CSoundDevicePtr->vtable->applySfxChanges)(g_CSoundDevicePtr,slot,0x10);
    }
    sound_sndmain_cpp_unlockSound_FUN_00551440();
    iVar1 = 1;
  }
  return iVar1;
}
