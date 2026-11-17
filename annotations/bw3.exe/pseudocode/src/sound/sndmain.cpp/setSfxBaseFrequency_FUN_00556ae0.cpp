// Name: sound_sndmain.cpp_setSfxBaseFrequency_FUN_00556ae0
// Address: 00556ae0
// Address Range: [[00556ae0, 00556b32]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00556ae0(uint sfx_handle,float base_frequency)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_setSfxBaseFrequency_FUN_00556ae0(uint sfx_handle,float base_frequency)

{
  CSfxSlot *slot;
  int iVar1;
  
  slot = sound_sndmain_cpp_getSfxSlotFromHandle_FUN_00552f10(sfx_handle,1);
  iVar1 = 0;
  if (slot != (CSfxSlot *)0x0) {
    (slot->options).base_frequency = base_frequency;
    *(byte *)&slot->changed_flags = (byte)slot->changed_flags | 0x10;
    if ((slot->hardware_buffer_handle != 0) && (g_CSoundDevice_PTR_02cf3280 != (CSoundDevice *)0x0))
    {
      (*g_CSoundDevice_PTR_02cf3280->vtable->applySfxChanges)(g_CSoundDevice_PTR_02cf3280,slot,0x10)
      ;
    }
    sound_sndmain_cpp_unlockSound_FUN_00556fd0();
    iVar1 = 1;
  }
  return iVar1;
}
