// Name: sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10
// Address: 005abb10
// Address Range: [[005abb10, 005abb53]]
// Convention: __cdecl
// Signature: HRESULT sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps)
// Globals:
//   IDirectSoundCapture* g_RecordingDeviceInterface
// Function calls:
//   sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

HRESULT __cdecl sound_sndmain_cpp_getRecordingDeviceCaps_FUN_005abb10(LPDSCCAPS pDSCCaps)

{
  int iVar1;
  HRESULT HVar2;
  LPDSCCAPS in_stack_0000000c;
  
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = sound_sndmain_cpp_isRecordingStarted_FUN_005ab980();
  if ((iVar1 != 0) && (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0)) {
    HVar2 = (*g_RecordingDeviceInterface->vtable->GetCaps)
                      (g_RecordingDeviceInterface,in_stack_0000000c);
    sound_sndmain_cpp_unlockSound_FUN_005abdc0();
    return HVar2;
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return -1;
}


// Assembly code:
// 005abb10: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   Label: sound_sndmain.cpp_getRecordingDeviceCaps_FUN_005abb10
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005abb15: CALL sound_sndmain.cpp_isRecordingStarted_FUN_005ab980
//   XREF to: 005ab980 (UNCONDITIONAL_CALL)
// 005abb1a: TEST EAX,EAX
// 005abb1c: JZ 0x005abb28
//   XREF to: 005abb28 (CONDITIONAL_JUMP)
// 005abb1e: MOV EDX,dword ptr [0x03f69c54]
//   XREF to: 03f69c54 (READ)
// 005abb24: TEST EDX,EDX
// 005abb26: JNZ 0x005abb33
//   XREF to: 005abb33 (CONDITIONAL_JUMP)
// 005abb28: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005abb28
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abb2d: MOV EAX,0xffffffff
// 005abb32: RET
// 005abb33: PUSH ESI
//   Label: LAB_005abb33
// 005abb34: PUSH EBX
// 005abb35: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005abb39: PUSH ECX
// 005abb3a: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005abb3e: PUSH ESI
// 005abb3f: MOV EBX,dword ptr [EDX]
// 005abb41: PUSH EDX
// 005abb42: CALL dword ptr [EBX + 0x10]
// 005abb45: ADD ESP,0xc
// 005abb48: MOV EBX,EAX
// 005abb4a: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abb4f: MOV EAX,EBX
// 005abb51: POP EBX
// 005abb52: POP ESI
// 005abb53: RET
