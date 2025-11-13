// Name: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
// Address: 005ab720
// Address Range: [[005ab720, 005ab77d]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720(void)
// Cross-references:
//   sound_sndmain.cpp_GetAllRecordingDevices_FUN_005ab7e0 (005ab7e0) at 005ab7e8 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getRecordingDeviceInfo_FUN_005ab780 (005ab780) at 005ab787 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_readIni_FUN_005abf20 (005abf20) at 005abf9a [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_selectRecordingDevice_FUN_005ab860 (005ab860) at 005ab878 [UNCONDITIONAL_CALL]
// Globals:
//   int g_SoundDeviceCount = -0x1
//   int g_RecordingDeviceCount = -0x1
//   SRecordingDeviceInfo[8] g_RecordingDevices
//   undefined4 g_RecordingDevices[1].device_name[0]
// Function calls:
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_getRecordingDeviceCount_FUN_005ab720(void)

{
  int iVar1;
  UINT device_id;
  
  if (-1 < g_RecordingDeviceCount) {
    return g_RecordingDeviceCount;
  }
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  g_RecordingDeviceCount = 0;
  device_id = 0;
  do {
    iVar1 = sound_sndwav_cpp_enumerateWavInDevice_FUN_005b1560
                      (device_id,g_RecordingDevices + g_RecordingDeviceCount);
    if (iVar1 == 0) {
      return g_SoundDeviceCount;
    }
    g_RecordingDeviceCount = g_RecordingDeviceCount + 1;
    device_id = device_id + 1;
  } while (g_RecordingDeviceCount < 8);
  return g_SoundDeviceCount;
}


// Assembly code:
// 005ab720: PUSH ESI
//   Label: sound_sndmain.cpp_getRecordingDeviceCount_FUN_005ab720
// 005ab721: MOV ESI,dword ptr [0x00681b4c]
//   XREF to: 00681b4c (READ)
// 005ab727: TEST ESI,ESI
// 005ab729: JL 0x005ab735
//   XREF to: 005ab735 (CONDITIONAL_JUMP)
// 005ab72b: MOV EAX,ESI
// 005ab72d: MOV dword ptr [0x00681b4c],ESI
//   XREF to: 00681b4c (WRITE)
// 005ab733: POP ESI
// 005ab734: RET
// 005ab735: PUSH EBX
//   Label: LAB_005ab735
// 005ab736: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005ab73b: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005ab740: XOR ESI,ESI
// 005ab742: XOR EBX,EBX
// 005ab744: IMUL EAX,ESI,0x108
//   Label: LAB_005ab744
// 005ab74a: ADD EAX,0x3f69414
//   XREF to: 03f69414 (DATA)
// 005ab74f: PUSH EAX
//   XREF to: 03f69414 (DATA)
//   XREF to: 03f6951c (DATA)
// 005ab750: PUSH EBX
// 005ab751: MOV dword ptr [0x00681b4c],ESI
//   XREF to: 00681b4c (WRITE)
// 005ab757: CALL sound_sndwav.cpp_enumerateWavInDevice_FUN_005b1560
//   XREF to: 005b1560 (UNCONDITIONAL_CALL)
// 005ab75c: MOV ESI,dword ptr [0x00681b4c]
//   XREF to: 00681b4c (READ)
// 005ab762: ADD ESP,0x8
// 005ab765: TEST EAX,EAX
// 005ab767: JZ 0x005ab770
//   XREF to: 005ab770 (CONDITIONAL_JUMP)
// 005ab769: INC ESI
// 005ab76a: INC EBX
// 005ab76b: CMP ESI,0x8
// 005ab76e: JL 0x005ab744
//   XREF to: 005ab744 (CONDITIONAL_JUMP)
// 005ab770: MOV EAX,[0x00681b20]
//   Label: LAB_005ab770
//   XREF to: 00681b20 (READ)
// 005ab775: POP EBX
// 005ab776: MOV dword ptr [0x00681b4c],ESI
//   XREF to: 00681b4c (WRITE)
// 005ab77c: POP ESI
// 005ab77d: RET
