// Name: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
// Address: 005abb60
// Address Range: [[005abb60, 005abb98]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60(void)
// Cross-references:
//   sound_sndmain.cpp_FUN_005aaeb0 (005aaeb0) at 005aaece [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930 (005ab930) at 005ab930 [UNCONDITIONAL_CALL]
// Globals:
//   IDirectSoundCapture* g_RecordingDeviceInterface
//   void* g_RecordingContext
// Function calls:
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60(void)

{
  DWORD DVar1;
  undefined4 uStack0000000c;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  if (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0) {
    DVar1 = (*g_RecordingDeviceInterface->vtable->Release)((IUnknown *)g_RecordingDeviceInterface);
    if (DVar1 == 0) {
      uStack0000000c = 0x5abb96;
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 0;
    }
  }
  g_RecordingContext = (void *)0x0;
  uStack0000000c = 0x5abb8b;
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 1;
}


// Assembly code:
// 005abb60: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   Label: sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005abb65: MOV EDX,dword ptr [0x03f69c54]
//   XREF to: 03f69c54 (READ)
// 005abb6b: TEST EDX,EDX
// 005abb6d: JZ 0x005abb7e
//   XREF to: 005abb7e (CONDITIONAL_JUMP)
// 005abb6f: MOV EAX,EDX
// 005abb71: PUSH EAX
// 005abb72: MOV EDX,dword ptr [EDX]
// 005abb74: CALL dword ptr [EDX + 0x8]
// 005abb77: ADD ESP,0x4
// 005abb7a: TEST EAX,EAX
// 005abb7c: JZ 0x005abb91
//   XREF to: 005abb91 (CONDITIONAL_JUMP)
// 005abb7e: XOR ECX,ECX
//   Label: LAB_005abb7e
// 005abb80: MOV dword ptr [0x03f69c58],ECX
//   XREF to: 03f69c58 (WRITE)
// 005abb86: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abb8b: MOV EAX,0x1
// 005abb90: RET
// 005abb91: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005abb91
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abb96: XOR EAX,EAX
// 005abb98: RET
