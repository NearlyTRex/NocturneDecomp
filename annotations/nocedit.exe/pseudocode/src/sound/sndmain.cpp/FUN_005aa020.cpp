// Name: sound_sndmain.cpp_FUN_005aa020
// Address: 005aa020
// Address Range: [[005aa020, 005aa093]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa020()
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580f97 [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b38e2 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1870 (005b1870) at 005b19ab [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae3d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad416 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f68830
//   undefined4 DAT_03f68834
//   undefined4 DAT_03f68838
//   undefined4 DAT_03f6883c
//   undefined4 DAT_03f68840
//   undefined4 DAT_03f68844
//   CSound* g_CSoundInstance

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa020(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  
  DAT_03f68830 = in_stack_00000004;
  DAT_03f68834 = in_stack_00000008;
  DAT_03f68838 = in_stack_0000000c;
  DAT_03f6883c = in_stack_00000010;
  DAT_03f68840 = in_stack_00000014;
  DAT_03f68844 = in_stack_00000018;
  if (g_CSoundInstance == (CSound *)0x0) {
    return;
  }
  (*(code *)g_CSoundInstance->vtable->field_24)();
  return;
}


// Assembly code:
// 005aa020: PUSH EBP
//   Label: sound_sndmain.cpp_FUN_005aa020
// 005aa021: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aa025: MOV [0x03f68830],EAX
//   XREF to: 03f68830 (WRITE)
// 005aa02a: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005aa02e: MOV [0x03f68834],EAX
//   XREF to: 03f68834 (WRITE)
// 005aa033: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005aa037: MOV [0x03f68838],EAX
//   XREF to: 03f68838 (WRITE)
// 005aa03c: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005aa040: MOV [0x03f6883c],EAX
//   XREF to: 03f6883c (WRITE)
// 005aa045: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005aa049: MOV [0x03f68840],EAX
//   XREF to: 03f68840 (WRITE)
// 005aa04e: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aa052: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aa058: MOV [0x03f68844],EAX
//   XREF to: 03f68844 (WRITE)
// 005aa05d: TEST EDX,EDX
// 005aa05f: JNZ 0x005aa063
//   XREF to: 005aa063 (CONDITIONAL_JUMP)
// 005aa061: POP EBP
// 005aa062: RET
// 005aa063: PUSH EDI
//   Label: LAB_005aa063
// 005aa064: PUSH ESI
// 005aa065: PUSH EBX
// 005aa066: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 005aa06a: PUSH ECX
// 005aa06b: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 005aa06f: PUSH EBX
// 005aa070: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 005aa074: PUSH ESI
// 005aa075: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 005aa079: PUSH EDI
// 005aa07a: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005aa07e: PUSH EBP
// 005aa07f: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005aa083: PUSH ECX
// 005aa084: MOV EAX,EDX
// 005aa086: MOV EDX,dword ptr [EDX]
// 005aa088: PUSH EAX
// 005aa089: CALL dword ptr [EDX + 0x18]
// 005aa08c: ADD ESP,0x1c
// 005aa08f: POP EBX
// 005aa090: POP ESI
// 005aa091: POP EDI
// 005aa092: POP EBP
// 005aa093: RET
