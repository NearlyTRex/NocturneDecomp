// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_00556290
// Address: 00556290
// Address Range: [[00556290, 00556515]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_00556290(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_00556290(CDirectSoundDevice *this_ptr,int sample_buffer_id)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int sfx_handle;
  int *piVar6;
  char acStack_1a0 [400];
  
  if ((((sample_buffer_id < 1) || (0x40 < sample_buffer_id)) ||
      (*(int *)(sample_buffer_id * 0x18 + 0x264a5f4) == 0)) ||
     (*(int *)(sample_buffer_id * 0x18 + 0x264a5fc) < 1)) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47b;
    core_main_c_displayErrorAndQuit_FUN_004e4500("DirectSoundDevice::allocateSfx - Invalid sample handle: %d");
  }
  if (_DAT_0264a5c4 == (int *)0x0) {
    _DAT_01d046a0 = "..\\sound\\snddx.cpp";
    _DAT_01d046a4 = 0x47c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  sfx_handle = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_0264ac34;
  while (iVar1 != 0) {
    sfx_handle = sfx_handle + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_0264ac34 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < sfx_handle) {
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  iVar3 = sample_buffer_id * 0x18;
  iVar4 = sfx_handle * 0x24;
  piVar6 = (int *)(iVar4 + 0x264ac10);
  for (iVar1 = *(int *)(iVar3 + 0x264a5f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x264ac10) != *(int *)(iVar3 + 0x264a5f4)));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x264ac20)) {
  }
  if (iVar1 == 0) {
    *piVar6 = *(int *)(iVar3 + 0x264a5f4);
    *(int *)(iVar4 + 0x264ac18) = sample_buffer_id;
    if (*(int *)(iVar3 + 0x264a5f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = sfx_handle;
    }
  }
  else {
    uVar5 = (**(code **)(*_DAT_0264a5c4 + 0x14))();
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar5);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(acStack_1a0);
      return 0;
    }
    if (*piVar6 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x264a5f8) * 0x24 + 0x264ac1c) = sfx_handle;
    *(int *)(iVar4 + 0x264ac18) = sample_buffer_id;
  }
  uVar2 = *(uint *)(iVar3 + 0x264a5f8);
  *(uint *)(iVar4 + 0x264ac1c) = 0;
  *(uint *)(iVar4 + 0x264ac20) = uVar2;
  *(int *)(iVar3 + 0x264a5f8) = sfx_handle;
  if (_DAT_0264a5d0 != 0) {
    uVar5 = (*(code *)**(uint **)*piVar6)();
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00554ad0(uVar5);
      _sprintf(&stack0xfffffcc4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005549c0(&stack0xfffffcc4);
    }
    if (*(int *)(iVar4 + 0x264ac14) == 0) {
      sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_00554e50(sfx_handle);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x264ac2c) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac30) = 0xffffffff;
  *(uint *)(iVar4 + 0x264ac28) = 0;
  *(uint *)(iVar4 + 0x264ac24) = 0;
  return sfx_handle;
}
