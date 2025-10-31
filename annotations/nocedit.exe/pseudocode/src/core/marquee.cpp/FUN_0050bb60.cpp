// Name: core_marquee.cpp_FUN_0050bb60
// Address: 0050bb60
// Address Range: [[0050bb60, 0050bc24]]
// Convention: __cdecl
// Signature: CMarquee * core_marquee.cpp_FUN_0050bb60(CMarquee * this_ptr)
// Cross-references:
//   core_marquee.cpp_FUN_0050bb20 (0050bb20) at 0050bb3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_menu1_pth_006359b7
//   undefined4 s_enu1.pth_006359b8
//   undefined4 s_nu1.pth_006359b9
//   undefined4 s_u1.pth_006359ba
//   CDemonActor_vtable PTR_core_marquee.cpp_FUN_00661044
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_course.cpp_CCourse_ctor_FUN_004424c0

#include "nocturne.h"

CMarquee * __cdecl core_marquee_cpp_FUN_0050bb60(CMarquee *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CCourse *pCVar3;
  char *pcVar4;
  int *piVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)&pCVar2[1].orient_matrix.m[1].y);
  pcVar4 = "menu1.pth";
  pCVar3[-7].frame_list = (CCourseFrameList *)&PTR_core_marquee_cpp_FUN_00661044;
  piVar5 = &pCVar3[-7].loop;
  pCVar3[-4].frame_list = (CCourseFrameList *)0x41200000;
  do {
    cVar1 = *pcVar4;
    *(char *)piVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    *(char *)((int)piVar5 + 1) = cVar1;
    piVar5 = (int *)((int)piVar5 + 2);
  } while (cVar1 != '\0');
  pCVar3[-4].loop = 0;
  pCVar3[-3].len = 3;
  pCVar3[-3].frame_list = (CCourseFrameList *)0x0;
  pCVar3[-3].loop = 0;
  pCVar3[-2].len = 0;
  pCVar3[-2].frame_list = (CCourseFrameList *)0x0;
  pCVar3[-2].loop = 0;
  pCVar3[-1].len = 0;
  pCVar3[-0xe].len = 1;
  pCVar3[-1].loop = 1;
  return (CMarquee *)(pCVar3 + -0x23);
}


// Assembly code:
// 0050bb60: PUSH ESI
//   Label: core_marquee.cpp_FUN_0050bb60
// 0050bb61: PUSH EDI
// 0050bb62: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050bb66: PUSH EDX
// 0050bb67: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0050bb6c: ADD ESP,0x4
// 0050bb6f: ADD EAX,0x1a4
// 0050bb74: PUSH EAX
// 0050bb75: CALL core_course.cpp_CCourse_ctor_FUN_004424c0
//   XREF to: 004424c0 (UNCONDITIONAL_CALL)
// 0050bb7a: LEA EDX,[EAX + 0xfffffe5c]
// 0050bb80: MOV ESI,0x6359b7
//   XREF to: 006359b7 (DATA)
// 0050bb85: ADD ESP,0x4
// 0050bb88: MOV dword ptr [EDX + 0x154],0x661044
//   XREF to: 00661044 (DATA)
// 0050bb92: LEA EDI,[EDX + 0x158]
// 0050bb98: MOV dword ptr [EDX + 0x178],0x41200000
// 0050bba2: PUSH EDI
// 0050bba3: MOV AL,byte ptr [ESI]
//   Label: LAB_0050bba3
//   XREF to: 006359b7 (READ)
//   XREF to: 006359b9 (READ)
// 0050bba5: MOV byte ptr [EDI],AL
// 0050bba7: CMP AL,0x0
// 0050bba9: JZ 0x0050bbbb
//   XREF to: 0050bbbb (CONDITIONAL_JUMP)
// 0050bbab: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006359b8 (READ)
//   XREF to: 006359ba (READ)
// 0050bbae: ADD ESI,0x2
// 0050bbb1: MOV byte ptr [EDI + 0x1],AL
// 0050bbb4: ADD EDI,0x2
// 0050bbb7: CMP AL,0x0
// 0050bbb9: JNZ 0x0050bba3
//   XREF to: 0050bba3 (CONDITIONAL_JUMP)
// 0050bbbb: POP EDI
//   Label: LAB_0050bbbb
// 0050bbbc: MOV dword ptr [EDX + 0x17c],0x0
// 0050bbc6: MOV dword ptr [EDX + 0x180],0x3
// 0050bbd0: MOV dword ptr [EDX + 0x184],0x0
// 0050bbda: MOV dword ptr [EDX + 0x188],0x0
// 0050bbe4: MOV dword ptr [EDX + 0x18c],0x0
// 0050bbee: MOV dword ptr [EDX + 0x190],0x0
// 0050bbf8: MOV dword ptr [EDX + 0x194],0x0
// 0050bc02: MOV dword ptr [EDX + 0x198],0x0
// 0050bc0c: MOV dword ptr [EDX + 0xfc],0x1
// 0050bc16: MOV EAX,EDX
// 0050bc18: MOV dword ptr [EDX + 0x1a0],0x1
// 0050bc22: POP EDI
// 0050bc23: POP ESI
// 0050bc24: RET
