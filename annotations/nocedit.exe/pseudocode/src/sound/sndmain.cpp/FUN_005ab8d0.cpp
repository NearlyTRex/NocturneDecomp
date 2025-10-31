// Name: sound_sndmain.cpp_FUN_005ab8d0
// Address: 005ab8d0
// Address Range: [[005ab8d0, 005ab92b]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ab8d0()
// Globals:
//   undefined4 DAT_00681b50
//   int g_SoundLockCount
//   undefined4 DAT_03f69410
//   IDirectSoundCapture* g_RecordingDeviceInterface
// Function calls:
//   sound_snddx.cpp_FUN_005b1600
//   sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860

#include "nocturne.h"

undefined4 sound_sndmain_cpp_FUN_005ab8d0(void)

{
  int iVar1;
  
  iVar1 = sound_sndmain_cpp_releaseRecordingDevice_FUN_005ab930();
  if (iVar1 == 0) {
    return 0;
  }
  sound_sndmain_cpp_selectRecordingDevice_FUN_005ab860();
  if (-1 < DAT_00681b50) {
    if (g_RecordingDevices[DAT_00681b50].api_type == 0) {
      g_RecordingDeviceInterface = (IDirectSoundCapture *)sound_snddx_cpp_FUN_005b1600();
    }
    if (g_RecordingDeviceInterface != (IDirectSoundCapture *)0x0) {
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 005ab8d0: CALL sound_sndmain.cpp_releaseRecordingDevice_FUN_005ab930
//   Label: sound_sndmain.cpp_FUN_005ab8d0
//   XREF to: 005ab930 (UNCONDITIONAL_CALL)
// 005ab8d5: TEST EAX,EAX
// 005ab8d7: JNZ 0x005ab8da
//   XREF to: 005ab8da (CONDITIONAL_JUMP)
// 005ab8d9: RET
// 005ab8da: MOV EDX,dword ptr [0x00681b50]
//   Label: LAB_005ab8da
//   XREF to: 00681b50 (READ)
// 005ab8e0: PUSH EDX
// 005ab8e1: CALL sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860
//   XREF to: 005ab860 (UNCONDITIONAL_CALL)
// 005ab8e6: MOV ECX,dword ptr [0x00681b50]
//   XREF to: 00681b50 (READ)
// 005ab8ec: ADD ESP,0x4
// 005ab8ef: TEST ECX,ECX
// 005ab8f1: JL 0x005ab929
//   XREF to: 005ab929 (CONDITIONAL_JUMP)
// 005ab8f3: MOV EAX,ECX
// 005ab8f5: SHL EAX,0x5
// 005ab8f8: ADD EAX,ECX
// 005ab8fa: SHL EAX,0x3
// 005ab8fd: CMP dword ptr [EAX + 0x3f69514],0x0
//   XREF to: 03f6940c (READ)
// 005ab904: JNZ 0x005ab91c
//   XREF to: 005ab91c (CONDITIONAL_JUMP)
// 005ab906: PUSH ESI
// 005ab907: MOV ESI,dword ptr [EAX + 0x3f69518]
//   XREF to: 03f69410 (READ)
// 005ab90d: PUSH ESI
// 005ab90e: CALL sound_snddx.cpp_FUN_005b1600
//   XREF to: 005b1600 (UNCONDITIONAL_CALL)
// 005ab913: ADD ESP,0x4
// 005ab916: MOV [0x03f69c54],EAX
//   XREF to: 03f69c54 (WRITE)
// 005ab91b: POP ESI
// 005ab91c: CMP dword ptr [0x03f69c54],0x0
//   Label: LAB_005ab91c
//   XREF to: 03f69c54 (READ)
// 005ab923: JNZ 0x005ab15c
//   XREF to: 005ab15c (CONDITIONAL_JUMP)
// 005ab929: XOR EAX,EAX
//   Label: LAB_005ab929
// 005ab92b: RET
