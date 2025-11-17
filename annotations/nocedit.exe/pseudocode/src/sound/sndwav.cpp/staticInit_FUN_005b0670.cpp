// Name: sound_sndwav.cpp_staticInit_FUN_005b0670
// Address: 005b0670
// Address Range: [[005b0670, 005b0686]]
// Convention: __cdecl
// Signature: void sound_sndwav.cpp_staticInit_FUN_005b0670(void)
// Globals:
//   CSoundDeviceBasic_vtable g_CWavInDeviceVTable
//   CSoundDeviceFull_vtable g_CWavOutDeviceVTable
//   CWavOutDevice g_CWavOutDeviceInstance
//   CWavInDevice g_CWavInDeviceInstance

#include "nocturne.h"

void __cdecl sound_sndwav_cpp_staticInit_FUN_005b0670(void)

{
  g_CWavInDeviceInstance.base.vtable = (CSoundDevice)&g_CWavInDeviceVTable;
  g_CWavOutDeviceInstance.base.vtable = (CSoundDevice)&g_CWavOutDeviceVTable;
  return;
}


// Assembly code:
// 005b0670: MOV ECX,0x663264
//   Label: sound_sndwav.cpp_staticInit_FUN_005b0670
//   XREF to: 00663264 (DATA)
// 005b0675: MOV EDX,0x663284
//   XREF to: 00663284 (DATA)
// 005b067a: MOV dword ptr [0x03f6af44],ECX
//   XREF to: 03f6af44 (WRITE)
// 005b0680: MOV dword ptr [0x03f6af40],EDX
//   XREF to: 03f6af40 (WRITE)
// 005b0686: RET
