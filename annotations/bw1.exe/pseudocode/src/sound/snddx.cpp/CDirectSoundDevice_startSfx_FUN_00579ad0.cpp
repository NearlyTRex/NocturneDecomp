// Name: sound_snddx.cpp_CDirectSoundDevice_startSfx_FUN_00579ad0
// Address: 00579ad0
// Address Range: [[00579ad0, 00579f2a]]
// Convention: __cdecl
// Signature: int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_00579ad0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

#include "nocturne.h"

int __cdecl sound_snddx_cpp_CDirectSoundDevice_startSfx_FUN_00579ad0(CDirectSoundDevice *this_ptr,CSfxSlot *slot)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  IDirectSoundBuffer *dwFrequency;
  char acStack_af8 [400];
  char acStack_968 [400];
  char acStack_7d8 [400];
  char acStack_648 [400];
  char acStack_4b8 [400];
  char acStack_328 [400];
  char acStack_198 [392];
  DWORD dwFlags;
  
  iVar1 = slot->hardware_buffer_handle;
  if (((iVar1 < 1) || (0x1e < iVar1)) ||
     (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9] == (IDirectSoundBuffer *)0x0)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1562;
    core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - invalid handle: %d");
  }
  iVar2 = (*((this_ptr->base).vtable)->applySfxChanges)(&this_ptr->base,slot,-1);
  iVar4 = 0;
  if (iVar2 != 0) {
    dwFlags = 0;
    if (slot->sample == (CSfxSample *)0x0) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 1572;
      core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - no sample??");
    }
    if ((1 < slot->sample->loop_marker_count) || (0 < slot->sample->loop_destinations[0])) {
      g_CurrentFilename = "..\\sound\\snddx.cpp";
      g_CurrentLineNumber = 1574;
      core_main_c_displayErrorAndQuit_FUN_005030e0("DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds");
    }
    if ((slot->sample->loop_marker_count == 1) && (-1 < slot->sample->loop_destinations[0])) {
      dwFlags = 1;
    }
    if (slot->sample->streaming_buffer_size != (slot->sample->sample_info).sample_count) {
      dwFlags = 1;
    }
    uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->Play)
                      (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],0,0,dwFlags);
    if (uVar3 == 0x88780064) {
      uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->SetFrequency)
                        (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],0);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
        _sprintf(acStack_7d8,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_7d8);
        return 0;
      }
      uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->SetVolume)
                        (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],-10000);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
        _sprintf(acStack_648,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_648);
        return 0;
      }
      uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->Play)
                        (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],0,0,dwFlags);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
        _sprintf(acStack_328,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_328);
        return 0;
      }
      if (((g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9 + 7] !=
            (IDirectSoundBuffer *)0xffffffff) &&
          (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9 + 7] !=
           (IDirectSoundBuffer *)(slot->sample->sample_info).sample_rate)) &&
         (dwFrequency = (IDirectSoundBuffer *)
                        sound_snddx_cpp_clampDirectSoundFrequency_FUN_00577a50
                                  ((float)(slot->sample->sample_info).sample_rate *
                                   (slot->options).base_frequency),
         1 < (uint)((int)dwFrequency - (int)g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9 + 7]))
         ) {
        uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->SetFrequency)
                          (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],(DWORD)dwFrequency);
        if (uVar3 != 0) {
          sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
          _sprintf(acStack_4b8,"DirectSux: Unable to %s.  (%s)");
          sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_4b8);
        }
        g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9 + 7] = dwFrequency;
      }
      uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->SetCurrentPosition)
                        (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],0);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
        _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_198);
        return 0;
      }
      uVar3 = (*g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9]->vtable->SetVolume)
                        (g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9],
                         (long)g_IDirectSoundBuffer_PTR_ARRAY_02c823e0[iVar1 * 9 + 5]);
      if (uVar3 != 0) {
        sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
        _sprintf(acStack_968,"DirectSux: Unable to %s.  (%s)");
        sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_968);
        return 0;
      }
    }
    else if (uVar3 != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_00577500(uVar3);
      _sprintf(acStack_af8,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_005773f0(acStack_af8);
      return 0;
    }
    iVar4 = 1;
    *(byte *)((int)&slot->changed_flags + 3) = *(byte *)((int)&slot->changed_flags + 3) & 0xbf;
  }
  return iVar4;
}
