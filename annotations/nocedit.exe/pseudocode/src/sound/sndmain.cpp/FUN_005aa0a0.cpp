// Name: sound_sndmain.cpp_FUN_005aa0a0
// Address: 005aa0a0
// Address Range: [[005aa0a0, 005aa1bb]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005aa0a0()
// Cross-references:
//   core_setedit.cpp_DementedFogEditor_FUN_00580730 (00580730) at 00580fce [UNCONDITIONAL_CALL]
//   core_sound.cpp_CSound_FUN_005b3830 (005b3830) at 005b3917 [UNCONDITIONAL_CALL]
//   core_sound.cpp_FUN_005b1870 (005b1870) at 005b1acf [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005aae00 (005aae00) at 005aae72 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005ad3b0 (005ad3b0) at 005ad44b [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f68860
//   undefined4 DAT_03f68864
//   undefined4 DAT_03f68868
//   undefined4 DAT_03f6886c
//   undefined4 DAT_03f68870
//   undefined4 DAT_03f68874
//   undefined4 DAT_03f68878
//   undefined4 DAT_03f6887c
//   undefined4 DAT_03f68880
//   undefined4 DAT_03f68884
//   undefined4 DAT_03f68888
//   undefined4 DAT_03f6888c
//   undefined4 DAT_03f68890
//   undefined4 DAT_03f68894
//   undefined4 DAT_03f68898
//   undefined4 DAT_03f6889c
//   undefined4 DAT_03f688a0
//   undefined4 DAT_03f688a4
//   CSound* g_CSoundInstance

#include "nocturne.h"

void sound_sndmain_cpp_FUN_005aa0a0(void)

{
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  
  DAT_03f68860 = in_stack_00000004;
  DAT_03f68864 = in_stack_00000008;
  DAT_03f68868 = in_stack_0000000c;
  DAT_03f6886c = in_stack_00000010;
  DAT_03f68870 = in_stack_00000014;
  DAT_03f68874 = in_stack_00000018;
  DAT_03f68878 = in_stack_0000001c;
  DAT_03f6887c = in_stack_00000020;
  DAT_03f68880 = in_stack_00000024;
  DAT_03f68884 = in_stack_00000028;
  DAT_03f68888 = in_stack_0000002c;
  DAT_03f6888c = in_stack_00000030;
  DAT_03f68890 = in_stack_00000034;
  DAT_03f68894 = in_stack_00000038;
  DAT_03f68898 = in_stack_0000003c;
  DAT_03f6889c = in_stack_00000040;
  DAT_03f688a0 = in_stack_00000044;
  DAT_03f688a4 = in_stack_00000048;
  if (g_CSoundInstance == (CSound *)0x0) {
    return;
  }
  (*(code *)g_CSoundInstance->vtable->field_28)();
  return;
}


// Assembly code:
// 005aa0a0: PUSH EBP
//   Label: sound_sndmain.cpp_FUN_005aa0a0
// 005aa0a1: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005aa0a5: MOV [0x03f68860],EAX
//   XREF to: 03f68860 (WRITE)
// 005aa0aa: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005aa0ae: MOV [0x03f68864],EAX
//   XREF to: 03f68864 (WRITE)
// 005aa0b3: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005aa0b7: MOV [0x03f68868],EAX
//   XREF to: 03f68868 (WRITE)
// 005aa0bc: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005aa0c0: MOV [0x03f6886c],EAX
//   XREF to: 03f6886c (WRITE)
// 005aa0c5: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x14] (READ)
// 005aa0c9: MOV [0x03f68870],EAX
//   XREF to: 03f68870 (WRITE)
// 005aa0ce: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x18] (READ)
// 005aa0d2: MOV [0x03f68874],EAX
//   XREF to: 03f68874 (WRITE)
// 005aa0d7: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x1c] (READ)
// 005aa0db: MOV [0x03f68878],EAX
//   XREF to: 03f68878 (WRITE)
// 005aa0e0: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x20] (READ)
// 005aa0e4: MOV [0x03f6887c],EAX
//   XREF to: 03f6887c (WRITE)
// 005aa0e9: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x24] (READ)
// 005aa0ed: MOV [0x03f68880],EAX
//   XREF to: 03f68880 (WRITE)
// 005aa0f2: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x28] (READ)
// 005aa0f6: MOV [0x03f68884],EAX
//   XREF to: 03f68884 (WRITE)
// 005aa0fb: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x2c] (READ)
// 005aa0ff: MOV [0x03f68888],EAX
//   XREF to: 03f68888 (WRITE)
// 005aa104: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x30] (READ)
// 005aa108: MOV [0x03f6888c],EAX
//   XREF to: 03f6888c (WRITE)
// 005aa10d: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x34] (READ)
// 005aa111: MOV [0x03f68890],EAX
//   XREF to: 03f68890 (WRITE)
// 005aa116: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x38] (READ)
// 005aa11a: MOV [0x03f68894],EAX
//   XREF to: 03f68894 (WRITE)
// 005aa11f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x3c] (READ)
// 005aa123: MOV [0x03f68898],EAX
//   XREF to: 03f68898 (WRITE)
// 005aa128: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x40] (READ)
// 005aa12c: MOV [0x03f6889c],EAX
//   XREF to: 03f6889c (WRITE)
// 005aa131: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x44] (READ)
// 005aa135: MOV [0x03f688a0],EAX
//   XREF to: 03f688a0 (WRITE)
// 005aa13a: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x48] (READ)
// 005aa13e: MOV EDX,dword ptr [0x03f69268]
//   XREF to: 03f69268 (READ)
// 005aa144: MOV [0x03f688a4],EAX
//   XREF to: 03f688a4 (WRITE)
// 005aa149: TEST EDX,EDX
// 005aa14b: JNZ 0x005aa14f
//   XREF to: 005aa14f (CONDITIONAL_JUMP)
// 005aa14d: POP EBP
// 005aa14e: RET
// 005aa14f: PUSH EDI
//   Label: LAB_005aa14f
// 005aa150: PUSH ESI
// 005aa151: PUSH EBX
// 005aa152: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x48] (READ)
// 005aa156: PUSH ECX
// 005aa157: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x44] (READ)
// 005aa15b: PUSH EBX
// 005aa15c: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x40] (READ)
// 005aa160: PUSH ESI
// 005aa161: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x3c] (READ)
// 005aa165: PUSH EDI
// 005aa166: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x38] (READ)
// 005aa16a: PUSH EBP
// 005aa16b: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x34] (READ)
// 005aa16f: PUSH ECX
// 005aa170: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x30] (READ)
// 005aa174: PUSH EBX
// 005aa175: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x2c] (READ)
// 005aa179: PUSH ESI
// 005aa17a: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x28] (READ)
// 005aa17e: PUSH EDI
// 005aa17f: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x24] (READ)
// 005aa183: PUSH EBP
// 005aa184: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x20] (READ)
// 005aa188: PUSH ECX
// 005aa189: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x1c] (READ)
// 005aa18d: PUSH EBX
// 005aa18e: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x18] (READ)
// 005aa192: PUSH ESI
// 005aa193: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x14] (READ)
// 005aa197: PUSH EDI
// 005aa198: MOV EBP,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x10] (READ)
// 005aa19c: PUSH EBP
// 005aa19d: MOV ECX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0xc] (READ)
// 005aa1a1: PUSH ECX
// 005aa1a2: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x8] (READ)
// 005aa1a6: PUSH EBX
// 005aa1a7: MOV ESI,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 005aa1ab: PUSH ESI
// 005aa1ac: MOV EAX,EDX
// 005aa1ae: MOV EDX,dword ptr [EDX]
// 005aa1b0: PUSH EAX
// 005aa1b1: CALL dword ptr [EDX + 0x1c]
// 005aa1b4: ADD ESP,0x4c
// 005aa1b7: POP EBX
// 005aa1b8: POP ESI
// 005aa1b9: POP EDI
// 005aa1ba: POP EBP
// 005aa1bb: RET
