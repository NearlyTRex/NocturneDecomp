// Name: sound_sndwav.cpp_getWavInDevice_FUN_005b1600
// Address: 005b1600
// Address Range: [[005b1600, 005b1646]]
// Convention: __cdecl
// Signature: CWavInDevice * sound_sndwav.cpp_getWavInDevice_FUN_005b1600(UINT device_id)
// Cross-references:
//   sound_sndmain.cpp_initializeRecordingDevice_FUN_005ab8d0 (005ab8d0) at 005ab90e [UNCONDITIONAL_CALL]
// Globals:
//   waveInGetDevCapsA* waveInGetDevCapsA = 002118b2
//   UINT g_WaveInDeviceID = 0xffffffff
//   CWavInDevice g_CWavInDeviceInstance
// Function calls:
//   sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70

#include "nocturne.h"

CWavInDevice * __cdecl sound_sndwav_cpp_getWavInDevice_FUN_005b1600(UINT device_id)

{
  int iVar1;
  MMRESULT MVar2;
  BADSPACEBASE *in_ESP;
  UINT in_stack_00000008;
  UINT in_stack_00000018;
  
  iVar1 = sound_sndwav_cpp_CWavInDevice_close_FUN_005b0d70(&g_CWavInDeviceInstance);
  if (iVar1 == 0) {
    return (CWavInDevice *)0x0;
  }
  MVar2 = (*waveInGetDevCapsA)(in_stack_00000008,(LPWAVEINCAPSA)&stack0xffffffd4,0x30);
  if (MVar2 != 0) {
    return (CWavInDevice *)0x0;
  }
  g_WaveInDeviceID = in_stack_00000018;
  return &g_CWavInDeviceInstance;
}


// Assembly code:
// 005b1600: SUB ESP,0x30
//   Label: sound_sndwav.cpp_getWavInDevice_FUN_005b1600
// 005b1603: PUSH 0x3f6af44
//   XREF to: 03f6af44 (DATA)
// 005b1608: CALL sound_sndwav.cpp_CWavInDevice_close_FUN_005b0d70
//   XREF to: 005b0d70 (UNCONDITIONAL_CALL)
// 005b160d: ADD ESP,0x4
// 005b1610: TEST EAX,EAX
// 005b1612: JNZ 0x005b1618
//   XREF to: 005b1618 (CONDITIONAL_JUMP)
// 005b1614: ADD ESP,0x30
// 005b1617: RET
// 005b1618: PUSH 0x30
//   Label: LAB_005b1618
// 005b161a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 005b161e: PUSH EAX
// 005b161f: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 005b1623: PUSH EDX
// 005b1624: CALL dword ptr CS:[0x611428]
//   XREF to: 00611428 (READ)
// 005b162b: TEST EAX,EAX
// 005b162d: JZ 0x005b1635
//   XREF to: 005b1635 (CONDITIONAL_JUMP)
// 005b162f: XOR EAX,EAX
// 005b1631: ADD ESP,0x30
// 005b1634: RET
// 005b1635: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_005b1635
// 005b1639: MOV [0x00681e08],EAX
//   XREF to: 00681e08 (WRITE)
// 005b163e: MOV EAX,0x3f6af44
//   XREF to: 03f6af44 (DATA)
// 005b1643: ADD ESP,0x30
// 005b1646: RET
