// Name: sound_snddx.cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50
// Address: 0055bd50
// Address Range: [[0055bd50, 0055be29]]
// Convention: __cdecl
// Signature: void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl sound_snddx_cpp_CDirectSoundDevice_unlockSample_FUN_0055bd50(CDirectSoundDevice *this_ptr,int buffer_id,int offset,int size)

{
  int iVar1;
  uint error_code;
  int *piStack_1ac;
  
  if ((((buffer_id < 1) || (0x40 < buffer_id)) || (*(int *)(buffer_id * 0x18 + 0x2cf49f4) == 0)) ||
     (*(int *)(buffer_id * 0x18 + 0x2cf49fc) < 1)) {
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x45c;
    piStack_1ac = (int *)0x55bd8f;
    core_main_c_displayErrorAndQuit_FUN_004e4330("DirectSoundDevice::unlockSample - Can't unlock invalid handle: %d");
  }
  iVar1 = buffer_id * 0x18;
  if (*(int *)(iVar1 + 0x2cf4a04) != 0) {
    piStack_1ac = *(int **)(iVar1 + 0x2cf49f4);
    error_code = (**(code **)(*piStack_1ac + 0x4c))();
    if (error_code != 0) {
      sound_snddx_cpp_getDirectSoundErrorString_FUN_0055a670(error_code);
      _sprintf((char *)&piStack_1ac,"DirectSux: Unable to %s.  (%s)");
      sound_sndmain_cpp_logSoundError_FUN_0055a560((char *)&piStack_1ac);
    }
    *(uint *)(iVar1 + 0x2cf4a04) = 0;
  }
  return;
}
