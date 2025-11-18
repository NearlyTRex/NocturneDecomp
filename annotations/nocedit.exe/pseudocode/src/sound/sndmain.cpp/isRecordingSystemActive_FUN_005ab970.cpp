// Name: sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
// Address: 005ab970
// Address Range: [[005ab970, 005ab97f]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970(void)
// Cross-references:
//   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980 (005ab980) at 005ab980 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 (005ab860) at 005ab865 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startRecording_FUN_005aba90 (005aba90) at 005aba92 [UNCONDITIONAL_CALL]
// Globals:
//   IDirectSoundCapture* g_RecordingDeviceInterface

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970(void)

{
  return (uint)(g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0);
}


// Assembly code:
// 005ab970: CMP dword ptr [0x03f69c54],0x0
//   Label: sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
//   XREF to: 03f69c54 (READ)
// 005ab977: SETNZ AL
// 005ab97a: AND EAX,0xff
// 005ab97f: RET
