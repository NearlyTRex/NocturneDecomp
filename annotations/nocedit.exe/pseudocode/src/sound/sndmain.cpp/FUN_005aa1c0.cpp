// Name: sound_sndmain.cpp_FUN_005aa1c0
// Address: 005aa1c0
// Address Range: [[005aa1c0, 005aa233]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa1c0()
// Cross-references:
//   core_sound.cpp_CSound_FUN_005b2dd0 (005b2dd0) at 005b2e05 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b392b [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae86 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f68848
//   undefined4 DAT_03f6884c
//   undefined4 DAT_03f68850
//   undefined4 DAT_03f68854
//   undefined4 DAT_03f68858
//   undefined4 DAT_03f6885c
//   CSoundDevice* g_CSoundDevicePtr

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa1c0(void)

{
  float in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  DAT_03f68848 = in_stack_00000004;
  DAT_03f6884c = in_stack_00000008;
  DAT_03f68850 = in_stack_0000000c;
  DAT_03f68854 = in_stack_00000010;
  DAT_03f68858 = in_stack_00000014;
  DAT_03f6885c = in_stack_00000018;
  if (g_CSoundDevicePtr == (CSoundDevice *)0x0) {
    return;
  }
  (*g_CSoundDevicePtr->vtable->setDopplerFactor)(g_CSoundDevicePtr,in_stack_00000004);
  return;
}


// Assembly code:
// 005aa1c0: PUSH EBP
//   Label: sound_sndmain.cpp_FUN_005aa1c0
// 005aa1c1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aa1c5: MOV [0x03f68848],EAX
//   XREF to: 03f68848 (WRITE)
// 005aa1ca: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005aa1ce: MOV [0x03f6884c],EAX
//   XREF to: 03f6884c (WRITE)
// 005aa1d3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005aa1d7: MOV [0x03f68850],EAX
//   XREF to: 03f68850 (WRITE)
// 005aa1dc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005aa1e0: MOV [0x03f68854],EAX
//   XREF to: 03f68854 (WRITE)
// 005aa1e5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005aa1e9: MOV [0x03f68858],EAX
//   XREF to: 03f68858 (WRITE)
// 005aa1ee: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aa1f2: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aa1f8: MOV [0x03f6885c],EAX
//   XREF to: 03f6885c (WRITE)
// 005aa1fd: TEST EDX,EDX
// 005aa1ff: JNZ 0x005aa203
//   XREF to: 005aa203 (CONDITIONAL_JUMP)
// 005aa201: POP EBP
// 005aa202: RET
// 005aa203: PUSH EDI
//   Label: LAB_005aa203
// 005aa204: PUSH ESI
// 005aa205: PUSH EBX
// 005aa206: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005aa20a: PUSH ECX
// 005aa20b: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 005aa20f: PUSH EBX
// 005aa210: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 005aa214: PUSH ESI
// 005aa215: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005aa219: PUSH EDI
// 005aa21a: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005aa21e: PUSH EBP
// 005aa21f: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005aa223: PUSH ECX
// 005aa224: MOV EAX,EDX
// 005aa226: MOV EDX,dword ptr [EDX]
// 005aa228: PUSH EAX
// 005aa229: CALL dword ptr [EDX + 0x20]
// 005aa22c: ADD ESP,0x1c
// 005aa22f: POP EBX
// 005aa230: POP ESI
// 005aa231: POP EDI
// 005aa232: POP EBP
// 005aa233: RET
