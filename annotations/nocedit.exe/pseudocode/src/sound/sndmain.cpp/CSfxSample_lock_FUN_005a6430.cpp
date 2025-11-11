// Name: sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
// Address: 005a6430
// Address Range: [[005a6430, 005a6530]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430(CSfxSample * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_pollStream_FUN_005a6730 (005a6730) at 005a69c2 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a50ed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0064fd57
//   TerminatedCString s_SfxSample_lock_already_l_0064fd6c
//   TerminatedCString s_sound_sndmain_cpp_0064fd8e
//   TerminatedCString s_SfxSample_lock_invalid_r_0064fda3
//   TerminatedCString s_sound_sndmain_cpp_0064fdc4
//   TerminatedCString s_SfxSample_lock_nothing_a_0064fdd9
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CSound* g_CSoundInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_CSfxSample_FUN_005a8550

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSfxSample_lock_FUN_005a6430(CSfxSample *this_ptr)

{
  int iVar1;
  void *pvVar2;
  void *in_stack_00000008;
  void *in_stack_0000000c;
  
  if (this_ptr->sound_buffer != (void *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x753;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - already locked!");
  }
  if (((int)in_stack_00000008 < 0) ||
     (*(int *)this_ptr->field8_0x160 < (int)in_stack_00000008 + (int)in_stack_0000000c)) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x758;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - invalid region");
  }
  if (this_ptr->buffer_id == (void *)0x0) {
    if (this_ptr->sample_data == (void *)0x0) {
      g_CurrentFilename = "..\\sound\\sndmain.cpp";
      g_CurrentLineNumber = 0x75f;
      core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSample::lock - nothing allocated!");
    }
    iVar1 = sound_sndmain_cpp_CSfxSample_FUN_005a8550(this_ptr);
    pvVar2 = (void *)(iVar1 * (int)in_stack_00000008 + (int)this_ptr->sample_data);
  }
  else {
    if (g_CSoundInstance == (CSound *)0x0) {
      return 0;
    }
    pvVar2 = (void *)(*(code *)g_CSoundInstance->vtable->field_52)();
  }
  if (pvVar2 != (void *)0x0) {
    this_ptr->sound_buffer = in_stack_0000000c;
    this_ptr->field12_0x178 = in_stack_00000008;
  }
  return (int)pvVar2;
}


// Assembly code:
// 005a6430: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSample_lock_FUN_005a6430
// 005a6431: PUSH ESI
// 005a6432: PUSH EDI
// 005a6433: PUSH EBP
// 005a6434: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a6438: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a643c: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a6440: CMP dword ptr [EBX + 0x17c],0x0
// 005a6447: JNZ 0x005a64e2
//   XREF to: 005a64e2 (CONDITIONAL_JUMP)
// 005a644d: TEST ESI,ESI
//   Label: LAB_005a644d
// 005a644f: JL 0x005a645e
//   XREF to: 005a645e (CONDITIONAL_JUMP)
// 005a6451: MOV EDX,dword ptr [EBX + 0x160]
// 005a6457: LEA EAX,[ESI + EDI*0x1]
// 005a645a: CMP EAX,EDX
// 005a645c: JLE 0x005a6481
//   XREF to: 005a6481 (CONDITIONAL_JUMP)
// 005a645e: MOV ECX,0x64fd8e
//   Label: LAB_005a645e
//   XREF to: 0064fd8e (PARAM)
// 005a6463: MOV EBP,0x758
// 005a6468: PUSH 0x64fda3
//   XREF to: 0064fda3 (DATA)
// 005a646d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6473: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a6479: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a647e: ADD ESP,0x4
// 005a6481: CMP dword ptr [EBX + 0x158],0x0
//   Label: LAB_005a6481
// 005a6488: JNZ 0x005a650a
//   XREF to: 005a650a (CONDITIONAL_JUMP)
// 005a648e: CMP dword ptr [EBX + 0x120],0x0
// 005a6495: JNZ 0x005a64b9
//   XREF to: 005a64b9 (CONDITIONAL_JUMP)
// 005a6497: MOV EAX,0x64fdc4
//   XREF to: 0064fdc4 (PARAM)
// 005a649c: MOV EDX,0x75f
// 005a64a1: PUSH 0x64fdd9
//   XREF to: 0064fdd9 (DATA)
// 005a64a6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a64ab: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a64b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a64b6: ADD ESP,0x4
// 005a64b9: PUSH EBX
//   Label: LAB_005a64b9
// 005a64ba: CALL sound_sndmain.cpp_CSfxSample_FUN_005a8550
//   XREF to: 005a8550 (UNCONDITIONAL_CALL)
// 005a64bf: IMUL EAX,ESI
// 005a64c2: MOV EDX,dword ptr [EBX + 0x120]
// 005a64c8: ADD ESP,0x4
// 005a64cb: ADD EAX,EDX
// 005a64cd: TEST EAX,EAX
//   Label: LAB_005a64cd
// 005a64cf: JZ 0x005a64dd
//   XREF to: 005a64dd (CONDITIONAL_JUMP)
// 005a64d1: MOV dword ptr [EBX + 0x17c],EDI
// 005a64d7: MOV dword ptr [EBX + 0x178],ESI
// 005a64dd: POP EBP
//   Label: LAB_005a64dd
// 005a64de: POP EDI
// 005a64df: POP ESI
// 005a64e0: POP EBX
// 005a64e1: RET
// 005a64e2: MOV ECX,0x64fd57
//   Label: LAB_005a64e2
//   XREF to: 0064fd57 (PARAM)
// 005a64e7: MOV EBP,0x753
// 005a64ec: PUSH 0x64fd6c
//   XREF to: 0064fd6c (DATA)
// 005a64f1: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a64f7: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a64fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6502: ADD ESP,0x4
// 005a6505: JMP 0x005a644d
//   XREF to: 005a644d (UNCONDITIONAL_JUMP)
// 005a650a: MOV EDX,dword ptr [0x03f69268]
//   Label: LAB_005a650a
//   XREF to: 03f69268 (READ)
// 005a6510: TEST EDX,EDX
// 005a6512: JNZ 0x005a651b
//   XREF to: 005a651b (CONDITIONAL_JUMP)
// 005a6514: XOR EAX,EAX
// 005a6516: POP EBP
// 005a6517: POP EDI
// 005a6518: POP ESI
// 005a6519: POP EBX
// 005a651a: RET
// 005a651b: PUSH EDI
//   Label: LAB_005a651b
// 005a651c: PUSH ESI
// 005a651d: MOV ECX,dword ptr [EBX + 0x158]
// 005a6523: PUSH ECX
// 005a6524: MOV EAX,EDX
// 005a6526: MOV EDX,dword ptr [EDX]
// 005a6528: PUSH EAX
// 005a6529: CALL dword ptr [EDX + 0x34]
// 005a652c: ADD ESP,0x10
// 005a652f: JMP 0x005a64cd
//   XREF to: 005a64cd (UNCONDITIONAL_JUMP)
