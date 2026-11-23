// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50
// Address: 0055bd50
// Address Range: [[0055bd50, 0055be29]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  uint error_code;
  char acStack_198 [400];
  
  if ((((buffer_id < 1) || (0x40 < buffer_id)) ||
      (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6] == (IDirectSoundBuffer *)0x0)) ||
     ((int)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 2] < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 1116;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d");
  }
  if (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4] != (IDirectSoundBuffer *)0x0) {
    error_code = (*g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6]->vtable->Unlock)
                           (g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6],
                            g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4],
                            (DWORD)g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 5],
                            (LPVOID)0x0,0);
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
      _sprintf(acStack_198,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560(acStack_198);
    }
    g_IDirectSoundBuffer_PTR_ARRAY_02cf49f4[buffer_id * 6 + 4] = (IDirectSoundBuffer *)0x0;
  }
  return;
}
