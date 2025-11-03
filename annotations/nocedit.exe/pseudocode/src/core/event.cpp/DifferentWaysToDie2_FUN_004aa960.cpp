// Name: core_event.cpp_DifferentWaysToDie2_FUN_004aa960
// Address: 004aa960
// Address Range: [[004aa960, 004aaa4e]]
// Convention: unknown
// Signature: undefined core_event.cpp_DifferentWaysToDie2_FUN_004aa960()
// Cross-references:
//   core_event.cpp_CEventList_FUN_004aacc0 (004aacc0) at 004aba9c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_generic_006245d3
//   TerminatedCString s_bullet_006245db
//   TerminatedCString s_Fire_006245e2
//   TerminatedCString s_Blade_006245e7
//   TerminatedCString s_Stake_006245ed
//   TerminatedCString s_Gas_006245f3
//   TerminatedCString s_electrocute_006245f7
// Function calls:
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

undefined4 core_event_cpp_DifferentWaysToDie2_FUN_004aa960(void)

{
  int iVar1;
  char *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"generic");
  if (iVar1 == 0) {
    *in_stack_00000008 = 100;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"bullet");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x65;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Fire");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x66;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Blade");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x67;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Stake");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x68;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Gas");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x69;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"electrocute");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x6a;
    return 1;
  }
  return 0;
}


// Assembly code:
// 004aa960: PUSH EBX
//   Label: core_event.cpp_DifferentWaysToDie2_FUN_004aa960
// 004aa961: PUSH ESI
// 004aa962: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aa966: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004aa96a: PUSH 0x6245d3
//   XREF to: 006245d3 (DATA)
// 004aa96f: PUSH ESI
// 004aa970: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa975: ADD ESP,0x8
// 004aa978: TEST EAX,EAX
// 004aa97a: JNZ 0x004aa98a
//   XREF to: 004aa98a (CONDITIONAL_JUMP)
// 004aa97c: MOV dword ptr [EBX],0x64
// 004aa982: MOV EAX,0x1
// 004aa987: POP ESI
// 004aa988: POP EBX
// 004aa989: RET
// 004aa98a: PUSH 0x6245db
//   Label: LAB_004aa98a
//   XREF to: 006245db (DATA)
// 004aa98f: PUSH ESI
// 004aa990: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa995: ADD ESP,0x8
// 004aa998: TEST EAX,EAX
// 004aa99a: JNZ 0x004aa9aa
//   XREF to: 004aa9aa (CONDITIONAL_JUMP)
// 004aa99c: MOV dword ptr [EBX],0x65
// 004aa9a2: MOV EAX,0x1
// 004aa9a7: POP ESI
// 004aa9a8: POP EBX
// 004aa9a9: RET
// 004aa9aa: PUSH 0x6245e2
//   Label: LAB_004aa9aa
//   XREF to: 006245e2 (DATA)
// 004aa9af: PUSH ESI
// 004aa9b0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa9b5: ADD ESP,0x8
// 004aa9b8: TEST EAX,EAX
// 004aa9ba: JNZ 0x004aa9ca
//   XREF to: 004aa9ca (CONDITIONAL_JUMP)
// 004aa9bc: MOV dword ptr [EBX],0x66
// 004aa9c2: MOV EAX,0x1
// 004aa9c7: POP ESI
// 004aa9c8: POP EBX
// 004aa9c9: RET
// 004aa9ca: PUSH 0x6245e7
//   Label: LAB_004aa9ca
//   XREF to: 006245e7 (DATA)
// 004aa9cf: PUSH ESI
// 004aa9d0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa9d5: ADD ESP,0x8
// 004aa9d8: TEST EAX,EAX
// 004aa9da: JNZ 0x004aa9ea
//   XREF to: 004aa9ea (CONDITIONAL_JUMP)
// 004aa9dc: MOV dword ptr [EBX],0x67
// 004aa9e2: MOV EAX,0x1
// 004aa9e7: POP ESI
// 004aa9e8: POP EBX
// 004aa9e9: RET
// 004aa9ea: PUSH 0x6245ed
//   Label: LAB_004aa9ea
//   XREF to: 006245ed (DATA)
// 004aa9ef: PUSH ESI
// 004aa9f0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aa9f5: ADD ESP,0x8
// 004aa9f8: TEST EAX,EAX
// 004aa9fa: JNZ 0x004aaa0a
//   XREF to: 004aaa0a (CONDITIONAL_JUMP)
// 004aa9fc: MOV dword ptr [EBX],0x68
// 004aaa02: MOV EAX,0x1
// 004aaa07: POP ESI
// 004aaa08: POP EBX
// 004aaa09: RET
// 004aaa0a: PUSH 0x6245f3
//   Label: LAB_004aaa0a
//   XREF to: 006245f3 (DATA)
// 004aaa0f: PUSH ESI
// 004aaa10: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aaa15: ADD ESP,0x8
// 004aaa18: TEST EAX,EAX
// 004aaa1a: JNZ 0x004aaa2a
//   XREF to: 004aaa2a (CONDITIONAL_JUMP)
// 004aaa1c: MOV dword ptr [EBX],0x69
// 004aaa22: MOV EAX,0x1
// 004aaa27: POP ESI
// 004aaa28: POP EBX
// 004aaa29: RET
// 004aaa2a: PUSH 0x6245f7
//   Label: LAB_004aaa2a
//   XREF to: 006245f7 (DATA)
// 004aaa2f: PUSH ESI
// 004aaa30: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004aaa35: ADD ESP,0x8
// 004aaa38: TEST EAX,EAX
// 004aaa3a: JNZ 0x004aaa4a
//   XREF to: 004aaa4a (CONDITIONAL_JUMP)
// 004aaa3c: MOV dword ptr [EBX],0x6a
// 004aaa42: MOV EAX,0x1
// 004aaa47: POP ESI
// 004aaa48: POP EBX
// 004aaa49: RET
// 004aaa4a: XOR EAX,EAX
//   Label: LAB_004aaa4a
// 004aaa4c: POP ESI
// 004aaa4d: POP EBX
// 004aaa4e: RET
