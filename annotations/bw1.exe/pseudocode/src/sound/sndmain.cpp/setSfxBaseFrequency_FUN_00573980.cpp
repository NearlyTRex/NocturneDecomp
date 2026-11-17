// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980
// Address: 00573980
// Address Range: [[00573980, 005739d2]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00573980(uint sfx_handle,float base_frequency)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00573980(uint sfx_handle,float base_frequency)

{
  CSfxSlot *slot;
  int iVar1;
  
  slot = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_0056fa10(sfx_handle,1);
  iVar1 = 0;
  if (slot != (CSfxSlot *)0x0) {
    (slot->options).base_frequency = base_frequency;
    *(byte *)&slot->changed_flags = (byte)slot->changed_flags | 0x10;
    if ((slot->hardware_buffer_handle != 0) && (g_CSoundDevice_PTR_02c80650 != (CSoundDevice *)0x0))
    {
      (*g_CSoundDevice_PTR_02c80650->vtable->applySfxChanges)(g_CSoundDevice_PTR_02c80650,slot,0x10)
      ;
    }
    sound_sndmain_cpp_unlockSound_FUN_00573e70();
    iVar1 = 1;
  }
  return iVar1;
}
