// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_00575b70
// Address: 00575b70
// Address Range: [[00575b70, 00575ba8]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70(void)

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_00575b70(void)

{
  int iVar1;
  
  sound_sndmain_cpp_lockSound_FUN_00575d20();
  if (g_CSoundDevice_PTR_02c81038 != (CSoundDevice *)0x0) {
    iVar1 = (*g_CSoundDevice_PTR_02c81038->vtable->reset)(g_CSoundDevice_PTR_02c81038);
    if (iVar1 == 0) {
      sound_sndmain_cpp_unlockSound_FUN_00573e70();
      return 0;
    }
  }
  g_INT_02c8103c = 0;
  sound_sndmain_cpp_unlockSound_FUN_00573e70();
  return 1;
}
