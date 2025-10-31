// Name: core_event.cpp_FUN_004aa3c0
// Address: 004aa3c0
// Address Range: [[004aa3c0, 004aa3fd]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa3c0()
// Globals:
//   TerminatedCString s_d_00624449
//   CEventList* g_CEventListInstance = 02d05310
//   undefined4 DAT_02d05310
// Function calls:
//   core_event.cpp_FUN_004b0830
//   crt_stdio.c_sscanf_FUN_0060013c

#include "nocturne.h"

undefined4 core_event_cpp_FUN_004aa3c0(void)

{
  int iVar1;
  undefined4 uVar2;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_retaddr;
  char *in_stack_00000004;
  
  iVar1 = crt_stdio_c_sscanf_FUN_0060013c(in_stack_00000004,"%d",&stack0xfffffffc);
  if (iVar1 == 1) {
    return unaff_retaddr;
  }
  uVar2 = core_event_cpp_FUN_004b0830();
  return uVar2;
}


// Assembly code:
// 004aa3c0: SUB ESP,0x4
//   Label: core_event.cpp_FUN_004aa3c0
// 004aa3c3: MOV EAX,ESP
// 004aa3c5: PUSH EAX
// 004aa3c6: PUSH 0x624449
//   XREF to: 00624449 (DATA)
// 004aa3cb: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004aa3cf: PUSH EDX
// 004aa3d0: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004aa3d5: ADD ESP,0xc
// 004aa3d8: CMP EAX,0x1
// 004aa3db: JNZ 0x004aa3e4
//   XREF to: 004aa3e4 (CONDITIONAL_JUMP)
// 004aa3dd: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x4] (DATA)
// 004aa3e0: ADD ESP,0x4
// 004aa3e3: RET
// 004aa3e4: PUSH EBX
//   Label: LAB_004aa3e4
// 004aa3e5: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004aa3e9: PUSH ECX
// 004aa3ea: MOV EBX,dword ptr [0x006793d0]
//   XREF to: 006793d0 (READ)
//   XREF to: 02d05310 (PARAM)
// 004aa3f0: PUSH EBX
//   XREF to: 02d05310 (DATA)
// 004aa3f1: CALL core_event.cpp_FUN_004b0830
//   XREF to: 004b0830 (UNCONDITIONAL_CALL)
// 004aa3f6: ADD ESP,0x8
// 004aa3f9: POP EBX
// 004aa3fa: ADD ESP,0x4
// 004aa3fd: RET
