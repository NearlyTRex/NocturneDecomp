// Name: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
// Address: 005a8580
// Address Range: [[005a8580, 005a86e7]]
// Convention: __cdecl
// Signature: int sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSampleInfo_FUN_005a86f0 (005a86f0) at 005a870d [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390 (005a8390) at 005a83d6 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a9720 (005a9720) at 005a9770 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650688
//   TerminatedCString s_SampleInfo_cvtPlaybackPo_0065069d
//   TerminatedCString s_sound_sndmain_cpp_006506fd
//   TerminatedCString s_SampleInfo_cvtPlaybackPo_00650712
//   TerminatedCString s_sound_sndmain_cpp_0065074d
//   TerminatedCString s_SampleInfo_cvtPlaybackPo_00650762
//   TerminatedCString s_sound_sndmain_cpp_006507c2
//   TerminatedCString s_SampleInfo_cvtPlaybackPo_006507d7
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

int __cdecl sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580(CSampleInfo *this_ptr)

{
  int iStack00000008;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if (in_stack_00000010 != in_stack_00000014) {
    if (in_stack_00000010 != 0) {
      if (in_stack_00000010 < 2) {
        _iStack00000008 = (double)this_ptr->bytes_per_second * _iStack00000008;
      }
      else if (in_stack_00000010 == 2) {
        if (*(int *)this_ptr->field5_0x110 < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0xc44;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr)
          ;
          _iStack00000008 = (double)*(int *)this_ptr->field5_0x110 * _iStack00000008;
        }
        else {
          _iStack00000008 = (double)*(int *)this_ptr->field5_0x110 * _iStack00000008;
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xc49;
        core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
    if (in_stack_00000014 != 0) {
      if (in_stack_00000014 < 2) {
        _iStack00000008 = _iStack00000008 / (double)this_ptr->bytes_per_second;
      }
      else if (in_stack_00000014 == 2) {
        if (*(int *)this_ptr->field5_0x110 < 1) {
          g_CurrentFilename = "..\\sound\\sndmain.cpp";
          g_CurrentLineNumber = 0xc57;
          core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - can't use relative sample position when length of %s is not known.",this_ptr)
          ;
          _iStack00000008 = _iStack00000008 / (double)*(int *)this_ptr->field5_0x110;
        }
        else {
          _iStack00000008 = _iStack00000008 / (double)*(int *)this_ptr->field5_0x110;
        }
      }
      else {
        g_CurrentFilename = "..\\sound\\sndmain.cpp";
        g_CurrentLineNumber = 0xc5c;
        core_main_c_displayErrorAndQuit_FUN_00506f10("SampleInfo::cvtPlaybackPos - Invalid input sample pos type");
      }
    }
  }
  return iStack00000008;
}


// Assembly code:
// 005a8580: PUSH EBX
//   Label: sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
// 005a8581: PUSH ESI
// 005a8582: PUSH EDI
// 005a8583: PUSH EBP
// 005a8584: MOV EBP,ESP
// 005a8586: SUB ESP,0x8
// 005a8589: AND ESP,0xfffffff8
// 005a858c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a858f: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a8592: MOV ESI,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 005a8595: CMP EAX,ESI
// 005a8597: JZ 0x005a85d9
//   XREF to: 005a85d9 (CONDITIONAL_JUMP)
// 005a8599: CMP EAX,0x1
// 005a859c: JNC 0x005a864e
//   XREF to: 005a864e (CONDITIONAL_JUMP)
// 005a85a2: TEST EAX,EAX
// 005a85a4: JNZ 0x005a8655
//   XREF to: 005a8655 (CONDITIONAL_JUMP)
// 005a85aa: CMP ESI,0x1
//   Label: LAB_005a85aa
// 005a85ad: JNC 0x005a86dc
//   XREF to: 005a86dc (CONDITIONAL_JUMP)
// 005a85b3: TEST ESI,ESI
// 005a85b5: JZ 0x005a85d9
//   XREF to: 005a85d9 (CONDITIONAL_JUMP)
// 005a85b7: MOV EAX,0x6507c2
//   Label: LAB_005a85b7
//   XREF to: 006507c2 (PARAM)
// 005a85bc: MOV EDX,0xc5c
// 005a85c1: PUSH 0x6507d7
//   XREF to: 006507d7 (DATA)
// 005a85c6: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a85cb: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a85d1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a85d6: ADD ESP,0x4
// 005a85d9: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005a85d9
//   XREF to: Stack[0x8] (READ)
// 005a85dc: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 005a85df: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a85e2: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a85e6: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 005a85e9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 005a85ed: MOV ESP,EBP
// 005a85ef: POP EBP
// 005a85f0: POP EDI
// 005a85f1: POP ESI
// 005a85f2: POP EBX
// 005a85f3: RET
// 005a85f4: FILD dword ptr [EBX + 0x10c]
//   Label: LAB_005a85f4
// 005a85fa: FMUL double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a85fd: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a8600: JMP 0x005a85aa
//   XREF to: 005a85aa (UNCONDITIONAL_JUMP)
// 005a8602: CMP dword ptr [EBX + 0x110],0x0
//   Label: LAB_005a8602
// 005a8609: JLE 0x005a8619
//   XREF to: 005a8619 (CONDITIONAL_JUMP)
// 005a860b: FILD dword ptr [EBX + 0x110]
// 005a8611: FMUL double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a8614: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a8617: JMP 0x005a85aa
//   XREF to: 005a85aa (UNCONDITIONAL_JUMP)
// 005a8619: PUSH EBX
//   Label: LAB_005a8619
// 005a861a: MOV ECX,0x650688
//   XREF to: 00650688 (PARAM)
// 005a861f: MOV EDI,0xc44
// 005a8624: PUSH 0x65069d
//   XREF to: 0065069d (DATA)
// 005a8629: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a862f: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a8635: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a863a: ADD ESP,0x8
// 005a863d: FILD dword ptr [EBX + 0x110]
// 005a8643: FMUL double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a8646: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a8649: JMP 0x005a85aa
//   XREF to: 005a85aa (UNCONDITIONAL_JUMP)
// 005a864e: JBE 0x005a85f4
//   Label: LAB_005a864e
//   XREF to: 005a85f4 (CONDITIONAL_JUMP)
// 005a8650: CMP EAX,0x2
// 005a8653: JZ 0x005a8602
//   XREF to: 005a8602 (CONDITIONAL_JUMP)
// 005a8655: MOV EAX,0x6506fd
//   Label: LAB_005a8655
//   XREF to: 006506fd (PARAM)
// 005a865a: MOV EDX,0xc49
// 005a865f: PUSH 0x650712
//   XREF to: 00650712 (DATA)
// 005a8664: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005a8669: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005a866f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8674: ADD ESP,0x4
// 005a8677: JMP 0x005a85aa
//   XREF to: 005a85aa (UNCONDITIONAL_JUMP)
// 005a867c: FILD dword ptr [EBX + 0x10c]
//   Label: LAB_005a867c
// 005a8682: FDIVR double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a8685: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a8688: JMP 0x005a85d9
//   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)
// 005a868d: CMP dword ptr [EBX + 0x110],0x0
//   Label: LAB_005a868d
// 005a8694: JLE 0x005a86a7
//   XREF to: 005a86a7 (CONDITIONAL_JUMP)
// 005a8696: FILD dword ptr [EBX + 0x110]
// 005a869c: FDIVR double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a869f: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a86a2: JMP 0x005a85d9
//   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)
// 005a86a7: PUSH EBX
//   Label: LAB_005a86a7
// 005a86a8: MOV ESI,0x65074d
//   XREF to: 0065074d (DATA)
// 005a86ad: MOV EDI,0xc57
// 005a86b2: PUSH 0x650762
//   XREF to: 00650762 (DATA)
// 005a86b7: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 005a86bd: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a86c3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a86c8: ADD ESP,0x8
// 005a86cb: FILD dword ptr [EBX + 0x110]
// 005a86d1: FDIVR double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a86d4: FSTP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 005a86d7: JMP 0x005a85d9
//   XREF to: 005a85d9 (UNCONDITIONAL_JUMP)
// 005a86dc: JBE 0x005a867c
//   Label: LAB_005a86dc
//   XREF to: 005a867c (CONDITIONAL_JUMP)
// 005a86de: CMP ESI,0x2
// 005a86e1: JZ 0x005a868d
//   XREF to: 005a868d (CONDITIONAL_JUMP)
// 005a86e3: JMP 0x005a85b7
//   XREF to: 005a85b7 (UNCONDITIONAL_JUMP)
