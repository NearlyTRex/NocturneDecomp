// Name: sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
// Address: 005ab930
// Address Range: [[005ab930, 005ab964]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930(void)
// Cross-references:
//   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 (005ab8d0) at 005ab8d0 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abf95 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_shutdownSoundSystem_FUN_005aaeb0 (005aaeb0) at 005aaed3 [UNCONDITIONAL_CALL]
// Globals:
//   IDirectSoundCapture* g_RecordingDeviceInterface
// Function calls:
//   sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930(void)

{
  int iVar1;
  void *in_stack_00000004;
  void **in_stack_00000008;
  
  iVar1 = sound_sndmain_cpp_stopRecordingDevice_FUN_005abb60();
  if (iVar1 != 0) {
    if (g_RecordingDeviceInterface == (IDirectSoundCapture *)0x0) {
      iVar1 = 1;
    }
    else {
      iVar1 = (*g_RecordingDeviceInterface->vtable->QueryInterface)
                        ((IUnknown *)g_RecordingDeviceInterface,in_stack_00000004,in_stack_00000008)
      ;
      if (iVar1 != 0) {
        g_RecordingDeviceInterface = (IDirectSoundCapture *)0x0;
        return 1;
      }
    }
  }
  return iVar1;
}


// Assembly code:
// 005ab930: CALL sound_sndmain.cpp_stopRecordingDevice_FUN_005abb60
//   Label: sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   XREF to: 005abb60 (UNCONDITIONAL_CALL)
// 005ab935: TEST EAX,EAX
// 005ab937: JZ 0x005ab948
//   XREF to: 005ab948 (CONDITIONAL_JUMP)
// 005ab939: MOV EDX,dword ptr [0x03f69c54]
//   XREF to: 03f69c54 (READ)
// 005ab93f: TEST EDX,EDX
// 005ab941: JNZ 0x005ab949
//   XREF to: 005ab949 (CONDITIONAL_JUMP)
// 005ab943: MOV EAX,0x1
// 005ab948: RET
//   Label: LAB_005ab948
// 005ab949: MOV EAX,EDX
//   Label: LAB_005ab949
// 005ab94b: PUSH EAX
// 005ab94c: MOV EDX,dword ptr [EDX]
// 005ab94e: CALL dword ptr [EDX]
// 005ab950: ADD ESP,0x4
// 005ab953: TEST EAX,EAX
// 005ab955: JZ 0x005ab948
//   XREF to: 005ab948 (CONDITIONAL_JUMP)
// 005ab957: XOR ECX,ECX
// 005ab959: MOV EAX,0x1
// 005ab95e: MOV dword ptr [0x03f69c54],ECX
//   XREF to: 03f69c54 (WRITE)
// 005ab964: RET
