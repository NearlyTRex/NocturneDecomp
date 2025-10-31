// Name: core_skeledit.cpp_FUN_00589530
// Address: 00589530
// Address Range: [[00589530, 005895e1]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589530()
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589530(void)

{
  BADSPACEBASE *in_ESP;
  char in_stack_00000008;
  char *in_stack_00000010;
  char *in_stack_00000018;
  char acStack_2f4 [248];
  char acStack_1fc [8];
  char acStack_1f4 [248];
  char acStack_fc [4];
  char acStack_f8 [4];
  char acStack_f4 [236];
  undefined4 uStack_8;
  
  uStack_8 = 0x58953a;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x31c);
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_00000010,&stack0x00000004,acStack_fc,&stack0xfffffd04,acStack_1fc);
  if ((acStack_f8[0] == '\0') && (in_stack_00000008 == '\0')) {
    crt_string_c_splitpath_FUN_005ff178
              (in_stack_00000010,&stack0x00000008,acStack_f8,(char *)0x0,(char *)0x0);
    crt_file_c_makepath_FUN_005febfc
              (in_stack_00000018,&stack0x0000000c,acStack_f4,acStack_2f4,acStack_1f4);
    return;
  }
  return;
}


// Assembly code:
// 00589530: PUSH 0x31c
//   Label: core_skeledit.cpp_FUN_00589530
// 00589535: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058953a: SUB ESP,0x304
// 00589540: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x204] (DATA)
// 00589547: PUSH EAX
// 00589548: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x304] (DATA)
// 0058954c: PUSH EAX
// 0058954d: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x104] (DATA)
// 00589554: PUSH EAX
// 00589555: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x4] (DATA)
// 0058955c: PUSH EAX
// 0058955d: MOV EDX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[0x8] (READ)
// 00589564: PUSH EDX
// 00589565: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0058956a: ADD ESP,0x14
// 0058956d: CMP byte ptr [ESP + 0x200],0x0
//   XREF to: Stack[-0x104] (READ)
// 00589575: JNZ 0x00589581
//   XREF to: 00589581 (CONDITIONAL_JUMP)
// 00589577: CMP byte ptr [ESP + 0x300],0x0
//   XREF to: Stack[-0x4] (READ)
// 0058957f: JZ 0x00589588
//   XREF to: 00589588 (CONDITIONAL_JUMP)
// 00589581: ADD ESP,0x304
//   Label: LAB_00589581
// 00589587: RET
// 00589588: PUSH EBX
//   Label: LAB_00589588
// 00589589: PUSH 0x0
// 0058958b: PUSH 0x0
// 0058958d: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x104] (DATA)
// 00589594: PUSH EAX
// 00589595: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x4] (DATA)
// 0058959c: PUSH EAX
// 0058959d: MOV ECX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[0x4] (READ)
// 005895a4: PUSH ECX
// 005895a5: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005895aa: ADD ESP,0x14
// 005895ad: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x204] (DATA)
// 005895b4: PUSH EAX
// 005895b5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x304] (DATA)
// 005895b9: PUSH EAX
// 005895ba: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x104] (DATA)
// 005895c1: PUSH EAX
// 005895c2: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x4] (DATA)
// 005895c9: PUSH EAX
// 005895ca: MOV EBX,dword ptr [ESP + 0x320]
//   XREF to: Stack[0x8] (READ)
// 005895d1: PUSH EBX
// 005895d2: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 005895d7: ADD ESP,0x14
// 005895da: POP EBX
// 005895db: ADD ESP,0x304
// 005895e1: RET
