// Name: sound_sndmain.cpp_FUN_005ab970
// Address: 005ab970
// Address Range: [[005ab970, 005ab97f]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab970()
// Cross-references:
//   sound_sndmain.cpp_FUN_005ab980 (005ab980) at 005ab980 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aba90 (005aba90) at 005aba92 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 (005ab860) at 005ab865 [UNCONDITIONAL_CALL]
// Globals:
//   IDirectSoundCapture* g_RecordingDeviceInterface

#include "nocturne.h"

/* Signature: undefined1 sound_sndmain.cpp_FUN_005ab970() */

bool sound_sndmain_cpp_FUN_005ab970(void)

{
  return g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0;
}


// Assembly code:
// 005ab970: CMP dword ptr [0x03f69c54],0x0
//   Label: sound_sndmain.cpp_FUN_005ab970
//   XREF to: 03f69c54 (READ)
// 005ab977: SETNZ AL
// 005ab97a: AND EAX,0xff
// 005ab97f: RET
