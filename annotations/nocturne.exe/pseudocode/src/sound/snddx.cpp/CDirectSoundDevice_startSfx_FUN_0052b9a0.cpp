// Name: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0
// Address: 0052b9a0
// Address Range: [[0052b9a0, 0052bad3]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_0052b9a0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int iVar2;
  uint error_code;
  int iVar3;
  
  iVar1 = slot->hardware_buffer_handle;
  if ((((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 4 + 0x2dc92a8) == 0)) ||
     (*(int *)(iVar1 * 4 + 0x2dc9324) == 0)) {
    g_CHAR_PTR_01cc4800 = "..\\sound\\snddx.cpp";
    g_INT_01cc4804 = 0x3b9;
    core_main_c_FUN_004c8440("DirectSoundDevice::startSfx - invalid handle: %d");
  }
  iVar2 = (*((this_ptr->base).vtable)->setSfxPos)(&this_ptr->base,slot,-1);
  iVar3 = 0;
  if (iVar2 != 0) {
    if (slot->sample == (CSfxSample *)0x0) {
      g_CHAR_PTR_01cc4800 = "..\\sound\\snddx.cpp";
      g_INT_01cc4804 = 0x3c3;
      core_main_c_FUN_004c8440();
    }
    error_code = (**(code **)(**(int **)(iVar1 * 4 + 0x2dc92a8) + 0x30))();
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00529a90(error_code);
      _sprintf(&stack0xfffffe5c,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_FUN_00529980(&stack0xfffffe5c);
      return 0;
    }
    iVar3 = 1;
  }
  return iVar3;
}
