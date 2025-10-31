// Name: sound_snddx.cpp_WaveOutGetDevCapsA2_FUN_005b1510
// Address: 005b1510
// Address Range: [[005b1510, 005b1556]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_WaveOutGetDevCapsA2_FUN_005b1510()
// Cross-references:
//   sound_sndmain.cpp_allocBuffers_FUN_005ab5b0 (005ab5b0) at 005ab5f7 [UNCONDITIONAL_CALL]
// Globals:
//   waveOutGetDevCapsA* waveOutGetDevCapsA = 0021192e
//   undefined4 DAT_00681e04
//   undefined4 DAT_03f6af40
// Function calls:
//   sound_snddx.cpp_waveOutClose_FUN_005b0840
//   waveOutGetDevCapsA

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_WaveOutGetDevCapsA2(undefined4 param_1) */

undefined * sound_snddx_cpp_WaveOutGetDevCapsA2_FUN_005b1510(void)

{
  int iVar1;
  MMRESULT MVar2;
  BADSPACEBASE *in_ESP;
  UINT in_stack_00000008;
  undefined4 in_stack_00000018;
  
  iVar1 = sound_snddx_cpp_waveOutClose_FUN_005b0840();
  if (iVar1 == 0) {
    return (undefined *)0x0;
  }
  MVar2 = (*waveOutGetDevCapsA)(in_stack_00000008,(LPWAVEOUTCAPSA)&stack0xffffffd0,0x34);
  if (MVar2 != 0) {
    return (undefined *)0x0;
  }
  DAT_00681e04 = in_stack_00000018;
  return &DAT_03f6af40;
}


// Assembly code:
// 005b1510: SUB ESP,0x34
//   Label: sound_snddx.cpp_WaveOutGetDevCapsA2_FUN_005b1510
// 005b1513: PUSH 0x3f6af40
//   XREF to: 03f6af40 (DATA)
// 005b1518: CALL sound_snddx.cpp_waveOutClose_FUN_005b0840
//   XREF to: 005b0840 (UNCONDITIONAL_CALL)
// 005b151d: ADD ESP,0x4
// 005b1520: TEST EAX,EAX
// 005b1522: JNZ 0x005b1528
//   XREF to: 005b1528 (CONDITIONAL_JUMP)
// 005b1524: ADD ESP,0x34
// 005b1527: RET
// 005b1528: PUSH 0x34
//   Label: LAB_005b1528
// 005b152a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x34] (DATA)
// 005b152e: PUSH EAX
// 005b152f: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 005b1533: PUSH EDX
// 005b1534: CALL dword ptr CS:[0x611444]
//   XREF to: EXTERNAL:0000001f (COMPUTED_CALL)
//   XREF to: 00611444 (READ)
// 005b153b: TEST EAX,EAX
// 005b153d: JZ 0x005b1545
//   XREF to: 005b1545 (CONDITIONAL_JUMP)
// 005b153f: XOR EAX,EAX
// 005b1541: ADD ESP,0x34
// 005b1544: RET
// 005b1545: MOV EAX,dword ptr [ESP + 0x38]
//   Label: LAB_005b1545
// 005b1549: MOV [0x00681e04],EAX
//   XREF to: 00681e04 (WRITE)
// 005b154e: MOV EAX,0x3f6af40
//   XREF to: 03f6af40 (DATA)
// 005b1553: ADD ESP,0x34
// 005b1556: RET
