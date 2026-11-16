// Name: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_00579ad0
// Address: 00579ad0
// Address Range: [[00579ad0, 00579f2a]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_00579ad0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_00579ad0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char acStack_9a8 [440];
  char acStack_7f0 [392];
  char acStack_668 [384];
  char acStack_4e8 [400];
  char acStack_358 [392];
  char acStack_1d0 [424];
  uint uStack_28;
  
  iVar1 = slot->hardware_buffer_handle;
  if (((iVar1 < 1) || (0x1e < iVar1)) || (*(int *)(iVar1 * 0x24 + 0x2c823e0) == 0)) {
    _DAT_01d1d400 = "..\\sound\\snddx.cpp";
    _DAT_01d1d404 = 0x61a;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - invalid handle: %d");
  }
  iVar3 = (*((this_ptr->base).vtable)->applySfxChanges)(&this_ptr->base,slot,-1);
  iVar5 = 0;
  if (iVar3 != 0) {
    if (slot->sample == (CSfxSample *)0x0) {
      _DAT_01d1d400 = "..\\sound\\snddx.cpp";
      _DAT_01d1d404 = 0x624;
      core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - no sample??");
    }
    if ((1 < slot->sample->loop_marker_count) || (0 < slot->sample->loop_destinations[0])) {
      _DAT_01d1d400 = "..\\sound\\snddx.cpp";
      _DAT_01d1d404 = 0x626;
      core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds");
    }
    uVar4 = (**(code **)(**(int **)(iVar1 * 0x24 + 0x2c823e0) + 0x30))();
    if (uVar4 == 0x88780064) {
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x44))(piVar2,0);
      if (uVar4 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
        _sprintf(acStack_7f0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_7f0);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,0xffffd8f0);
      if (uVar4 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
        _sprintf(acStack_668,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_668);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x30))(piVar2,0,0,uStack_28);
      if (uVar4 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
        _sprintf(acStack_358,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_358);
        return 0;
      }
      iVar5 = iVar1 * 0x24;
      if (((*(int *)(iVar5 + 0x2c823fc) != -1) &&
          (*(int *)(iVar5 + 0x2c823fc) != (slot->sample->sample_info).sample_rate)) &&
         (iVar3 = sound_snddx_cpp_clampDirectSoundFrequency_FUN_00577a50
                            ((float)(slot->sample->sample_info).sample_rate *
                             (slot->options).base_frequency),
         1 < (uint)(iVar3 - *(int *)(iVar5 + 0x2c823fc)))) {
        uVar4 = (**(code **)(**(int **)(iVar5 + 0x2c823e0) + 0x44))
                          (*(int **)(iVar5 + 0x2c823e0),iVar3);
        if (uVar4 != 0) {
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
          _sprintf(acStack_4e8,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_4e8);
        }
        *(int *)(iVar1 * 0x24 + 0x2c823fc) = iVar3;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
      if (uVar4 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
        _sprintf(acStack_1d0,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_1d0);
        return 0;
      }
      piVar2 = *(int **)(iVar1 * 0x24 + 0x2c823e0);
      uVar4 = (**(code **)(*piVar2 + 0x3c))(piVar2,*(uint *)(iVar1 * 0x24 + 0x2c823f4));
      if (uVar4 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
        _sprintf(acStack_9a8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_9a8);
        return 0;
      }
    }
    else if (uVar4 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar4);
      _sprintf(&stack0xfffff4f8,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(&stack0xfffff4f8);
      return 0;
    }
    iVar5 = 1;
    *(byte *)((int)&slot->changed_flags + 3) = *(byte *)((int)&slot->changed_flags + 3) & 0xbf;
  }
  return iVar5;
}
