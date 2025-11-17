// Name: sound_sndmain.cpp_FUN_005aba90
// Address: 005aba90
// Address Range: [[005aba90, 005abb0e]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aba90()
// Globals:
//   undefined4 DAT_00681b54
//   undefined4 DAT_00681b58
//   undefined4 DAT_00681b5c
//   IDirectSoundCapture* g_RecordingDeviceInterface
//   void* g_RecordingContext
//   undefined4 DAT_03f69c5c
// Function calls:
//   sound_sndmain.cpp_FUN_005ab980
//   sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005aba90(void)

{
  int iVar1;
  DWORD DVar2;
  
  iVar1 = sound_sndmain_cpp_isRecordingSystemActive_FUN_005ab970();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = sound_sndmain_cpp_FUN_005ab980();
  if (iVar1 != 0) {
    return 1;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = sound_sndmain_cpp_setRecordingFormat_FUN_005ab9a0();
  if (iVar1 != 0) {
    DVar2 = (*g_RecordingDeviceInterface->vtable->AddRef)((IUnknown *)g_RecordingDeviceInterface);
    if (DVar2 != 0) {
      g_RecordingContext = &DAT_00000001;
      sound_sndmain_cpp_unlockSound_FUN_005abdc0();
      return 1;
    }
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  return 0;
}


// Assembly code:
// 005aba90: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005aba90
// 005aba91: PUSH ESI
// 005aba92: CALL sound_sndmain.cpp_isRecordingSystemActive_FUN_005ab970
//   XREF to: 005ab970 (UNCONDITIONAL_CALL)
// 005aba97: TEST EAX,EAX
// 005aba99: JNZ 0x005aba9e
//   XREF to: 005aba9e (CONDITIONAL_JUMP)
// 005aba9b: POP ESI
// 005aba9c: POP EBX
// 005aba9d: RET
// 005aba9e: CALL sound_sndmain.cpp_FUN_005ab980
//   Label: LAB_005aba9e
//   XREF to: 005ab980 (UNCONDITIONAL_CALL)
// 005abaa3: TEST EAX,EAX
// 005abaa5: JZ 0x005abaaf
//   XREF to: 005abaaf (CONDITIONAL_JUMP)
// 005abaa7: MOV EAX,0x1
// 005abaac: POP ESI
// 005abaad: POP EBX
// 005abaae: RET
// 005abaaf: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   Label: LAB_005abaaf
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005abab4: MOV EDX,dword ptr [0x03f69c5c]
//   XREF to: 03f69c5c (READ)
// 005ababa: PUSH EDX
// 005ababb: MOV ECX,dword ptr [0x00681b5c]
//   XREF to: 00681b5c (READ)
// 005abac1: PUSH ECX
// 005abac2: MOV EBX,dword ptr [0x00681b58]
//   XREF to: 00681b58 (READ)
// 005abac8: PUSH EBX
// 005abac9: MOV ESI,dword ptr [0x00681b54]
//   XREF to: 00681b54 (READ)
// 005abacf: PUSH ESI
// 005abad0: CALL sound_sndmain.cpp_setRecordingFormat_FUN_005ab9a0
//   XREF to: 005ab9a0 (UNCONDITIONAL_CALL)
// 005abad5: ADD ESP,0x10
// 005abad8: TEST EAX,EAX
// 005abada: JZ 0x005abb05
//   XREF to: 005abb05 (CONDITIONAL_JUMP)
// 005abadc: MOV EAX,[0x03f69c54]
//   XREF to: 03f69c54 (READ)
// 005abae1: PUSH EAX
// 005abae2: MOV EDX,dword ptr [EAX]
// 005abae4: CALL dword ptr [EDX + 0x4]
// 005abae7: ADD ESP,0x4
// 005abaea: TEST EAX,EAX
// 005abaec: JZ 0x005abb05
//   XREF to: 005abb05 (CONDITIONAL_JUMP)
// 005abaee: PUSH EDI
// 005abaef: MOV EDI,0x1
// 005abaf4: MOV dword ptr [0x03f69c58],EDI
//   XREF to: 03f69c58 (WRITE)
// 005abafa: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abaff: MOV EAX,EDI
// 005abb01: POP EDI
// 005abb02: POP ESI
// 005abb03: POP EBX
// 005abb04: RET
// 005abb05: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005abb05
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005abb0a: XOR EAX,EAX
// 005abb0c: POP ESI
// 005abb0d: POP EBX
// 005abb0e: RET
