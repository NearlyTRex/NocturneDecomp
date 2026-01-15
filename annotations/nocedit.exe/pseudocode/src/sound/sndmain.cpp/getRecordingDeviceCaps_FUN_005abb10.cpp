// Name: sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10
// Address: 005abb10
// Address Range: [[005abb10, 005abb53]]
// Convention: __cdecl
// Signature: HRESULT sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps)

#include "nocturne.h"

HRESULT __cdecl sound_sndmain_cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps)

{
  int iVar1;
  HRESULT HVar2;
  LPDSCCAPS in_stack_00000004;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if ((iVar1 != 0) && (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0)) {
    HVar2 = (*g_RecordingDeviceInterface->vtable->GetCaps)
                      (g_RecordingDeviceInterface,in_stack_00000004);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return HVar2;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return -1;
}
