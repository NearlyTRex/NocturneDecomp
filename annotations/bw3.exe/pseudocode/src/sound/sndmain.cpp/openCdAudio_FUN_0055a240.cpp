// Name: sound_sndmain.cpp_openCdAudio_FUN_0055a240
// Address: 0055a240
// Address Range: [[0055a240, 0055a319]]
// Convention: __cdecl
// Signature: int __cdecl sound_sndmain_cpp_openCdAudio_FUN_0055a240(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl sound_sndmain_cpp_openCdAudio_FUN_0055a240(void)

{
  MCIERROR MVar1;
  byte auStack_30 [4];
  MCIDEVICEID MStack_2c;
  uint uStack_28;
  byte auStack_1c [4];
  uint uStack_18;
  
  if (_DAT_02ce7214 != 0) {
    return 1;
  }
  memset(auStack_30,0,0x14);
  uStack_28 = 0x5d3f32;
  MStack_2c = 0;
  MVar1 = mciSendCommandA(0,0x803,0x2102,(DWORD_PTR)auStack_30);
  if (MVar1 == 0) {
    memset(auStack_1c,0,0xc);
    uStack_18 = 10;
    MVar1 = mciSendCommandA(MStack_2c,0x80d,0x400,(DWORD_PTR)auStack_1c);
    if (MVar1 == 0) {
      _DAT_02ce7218 = MStack_2c;
      _DAT_02ce7214 = 1;
      return 1;
    }
    sound_sndmain_cpp_logSoundError_FUN_0055a560("Error setting CD time format");
    return 0;
  }
  sound_sndmain_cpp_logSoundError_FUN_0055a560("Error opening CD device");
  return 0;
}
