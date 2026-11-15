// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_0055be30
// Address: 0055be30
// Address Range: [[0055be30, 0055c0b5]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0055be30(CDirectSoundDevice *this_ptr,int sample_buffer_id)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_0055be30(CDirectSoundDevice *this_ptr,int sample_buffer_id)

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
      (*(int *)(sample_buffer_id * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(sample_buffer_id * 0x18 + 0x2cf49fc) < 1)) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x472;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::allocateSfx - Invalid sample handle: %d");
  }
  if (_DAT_02cf49c4 == (int *)0x0) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x473;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  sfx_handle = 1;
  iVar3 = 0x24;
  iVar1 = _DAT_02cf5030;
  while (iVar1 != 0) {
    sfx_handle = sfx_handle + 1;
    if (0x45b < iVar3 + 0x24) break;
    iVar1 = *(int *)(&DAT_02cf5030 + iVar3);
    iVar3 = iVar3 + 0x24;
  }
  if (0x1e < sfx_handle) {
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  iVar3 = sample_buffer_id * 0x18;
  iVar4 = sfx_handle * 0x24;
  piVar6 = (int *)(iVar4 + 0x2cf500c);
  for (iVar1 = *(int *)(iVar3 + 0x2cf49f8);
      (iVar1 != 0 && (*(int *)(iVar1 * 0x24 + 0x2cf500c) != *(int *)(iVar3 + 0x2cf49f4)));
      iVar1 = *(int *)(iVar1 * 0x24 + 0x2cf501c)) {
  }
  if (iVar1 == 0) {
    *piVar6 = *(int *)(iVar3 + 0x2cf49f4);
    *(int *)(iVar4 + 0x2cf5014) = sample_buffer_id;
    if (*(int *)(iVar3 + 0x2cf49f8) != 0) {
      *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = sfx_handle;
    }
  }
  else {
    uVar5 = (**(code **)(*_DAT_02cf49c4 + 0x14))();
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar5);
      _sprintf(acStack_1a0,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_1a0);
      return 0;
    }
    if (*piVar6 == 0) {
      return 0;
    }
    *(int *)(*(int *)(iVar3 + 0x2cf49f8) * 0x24 + 0x2cf5018) = sfx_handle;
    *(int *)(iVar4 + 0x2cf5014) = sample_buffer_id;
  }
  uVar2 = *(uint *)(iVar3 + 0x2cf49f8);
  *(uint *)(iVar4 + 0x2cf5018) = 0;
  *(uint *)(iVar4 + 0x2cf501c) = uVar2;
  *(int *)(iVar3 + 0x2cf49f8) = sfx_handle;
  if (_DAT_02cf49d0 != 0) {
    uVar5 = (*(code *)**(uint **)*piVar6)();
    if (uVar5 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(uVar5);
      _sprintf(&stack0xfffffcc4,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(&stack0xfffffcc4);
    }
    if (*(int *)(iVar4 + 0x2cf5010) == 0) {
      sound_snddx_cpp_releaseSfxHardwareBuffers_FUN_0055a9f0(sfx_handle);
      return 0;
    }
  }
  *(uint *)(iVar4 + 0x2cf5028) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf502c) = 0xffffffff;
  *(uint *)(iVar4 + 0x2cf5024) = 0;
  *(uint *)(iVar4 + 0x2cf5020) = 0;
  return sfx_handle;
}
