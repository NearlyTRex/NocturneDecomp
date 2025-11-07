// Name: core_skeledit.cpp_FUN_005925c0
// Address: 005925c0
// Address Range: [[005925c0, 00592668]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005925c0()
// Cross-references:
//   core_skeledit.cpp_FUN_00592690 (00592690) at 00593c46 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_skipTo_0064bfff
//   TerminatedCString s_flowTo_0064c006
//   TerminatedCString s_tweenPoseToPose_0064c00d
//   TerminatedCString s_tweenPoseToMotion_0064c01d
//   TerminatedCString s_tweenMotionToPose_0064c02f
//   TerminatedCString s_tweenMotionToMotion_0064c041
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_005925c0(void)

{
  int iVar1;
  char *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"skipTo");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"flowTo");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"tweenPoseToPose");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"tweenPoseToMotion");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"tweenMotionToPose");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_0000000c,"tweenMotionToMotion");
  if (iVar1 == 0) {
    return 6;
  }
  return 0;
}


// Assembly code:
// 005925c0: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_005925c0
// 005925c5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005925ca: PUSH EBX
// 005925cb: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005925cf: PUSH 0x64bfff
//   XREF to: 0064bfff (DATA)
// 005925d4: PUSH EBX
// 005925d5: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005925da: ADD ESP,0x8
// 005925dd: TEST EAX,EAX
// 005925df: JNZ 0x005925e8
//   XREF to: 005925e8 (CONDITIONAL_JUMP)
// 005925e1: MOV EAX,0x1
// 005925e6: POP EBX
// 005925e7: RET
// 005925e8: PUSH 0x64c006
//   Label: LAB_005925e8
//   XREF to: 0064c006 (DATA)
// 005925ed: PUSH EBX
// 005925ee: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005925f3: ADD ESP,0x8
// 005925f6: TEST EAX,EAX
// 005925f8: JNZ 0x00592601
//   XREF to: 00592601 (CONDITIONAL_JUMP)
// 005925fa: MOV EAX,0x2
// 005925ff: POP EBX
// 00592600: RET
// 00592601: PUSH 0x64c00d
//   Label: LAB_00592601
//   XREF to: 0064c00d (DATA)
// 00592606: PUSH EBX
// 00592607: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0059260c: ADD ESP,0x8
// 0059260f: TEST EAX,EAX
// 00592611: JNZ 0x0059261a
//   XREF to: 0059261a (CONDITIONAL_JUMP)
// 00592613: MOV EAX,0x3
// 00592618: POP EBX
// 00592619: RET
// 0059261a: PUSH 0x64c01d
//   Label: LAB_0059261a
//   XREF to: 0064c01d (DATA)
// 0059261f: PUSH EBX
// 00592620: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00592625: ADD ESP,0x8
// 00592628: TEST EAX,EAX
// 0059262a: JNZ 0x00592633
//   XREF to: 00592633 (CONDITIONAL_JUMP)
// 0059262c: MOV EAX,0x4
// 00592631: POP EBX
// 00592632: RET
// 00592633: PUSH 0x64c02f
//   Label: LAB_00592633
//   XREF to: 0064c02f (DATA)
// 00592638: PUSH EBX
// 00592639: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0059263e: ADD ESP,0x8
// 00592641: TEST EAX,EAX
// 00592643: JNZ 0x0059264c
//   XREF to: 0059264c (CONDITIONAL_JUMP)
// 00592645: MOV EAX,0x5
// 0059264a: POP EBX
// 0059264b: RET
// 0059264c: PUSH 0x64c041
//   Label: LAB_0059264c
//   XREF to: 0064c041 (DATA)
// 00592651: PUSH EBX
// 00592652: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00592657: ADD ESP,0x8
// 0059265a: TEST EAX,EAX
// 0059265c: JNZ 0x00592665
//   XREF to: 00592665 (CONDITIONAL_JUMP)
// 0059265e: MOV EAX,0x6
// 00592663: POP EBX
// 00592664: RET
// 00592665: XOR EAX,EAX
//   Label: LAB_00592665
// 00592667: POP EBX
// 00592668: RET
