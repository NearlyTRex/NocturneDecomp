// Name: core_skeledit.cpp_FUN_005896b0
// Address: 005896b0
// Address Range: [[005896b0, 00589733]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005896b0()
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

void core_skeledit_cpp_FUN_005896b0(void)

{
  BADSPACEBASE *in_ESP;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000014;
  char acStack_2f8 [252];
  char acStack_1fc [4];
  char cStack_1f8;
  char acStack_fc [4];
  char acStack_f8 [240];
  undefined4 uStack_8;
  
  uStack_8 = 0x5896ba;
  crt_stack_c_stack_probe_FUN_005ff9f3(0x31c);
  crt_string_c_splitpath_FUN_005ff178
            (in_stack_0000000c,&stack0x00000004,acStack_fc,&stack0xfffffd04,acStack_1fc);
  if (cStack_1f8 != '\0') {
    return;
  }
  crt_file_c_makepath_FUN_005febfc
            (in_stack_00000010,&stack0x00000008,acStack_f8,acStack_2f8,in_stack_00000014);
  return;
}


// Assembly code:
// 005896b0: PUSH 0x31c
//   Label: core_skeledit.cpp_FUN_005896b0
// 005896b5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 005896ba: SUB ESP,0x304
// 005896c0: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x204] (DATA)
// 005896c7: PUSH EAX
// 005896c8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x304] (DATA)
// 005896cc: PUSH EAX
// 005896cd: LEA EAX,[ESP + 0x208]
//   XREF to: Stack[-0x104] (DATA)
// 005896d4: PUSH EAX
// 005896d5: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x4] (DATA)
// 005896dc: PUSH EAX
// 005896dd: MOV EDX,dword ptr [ESP + 0x318]
//   XREF to: Stack[0x4] (READ)
// 005896e4: PUSH EDX
// 005896e5: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 005896ea: ADD ESP,0x14
// 005896ed: CMP byte ptr [ESP + 0x100],0x0
//   XREF to: Stack[-0x204] (READ)
// 005896f5: JZ 0x005896fe
//   XREF to: 005896fe (CONDITIONAL_JUMP)
// 005896f7: ADD ESP,0x304
// 005896fd: RET
// 005896fe: PUSH EBX
//   Label: LAB_005896fe
// 005896ff: MOV ECX,dword ptr [ESP + 0x310]
//   XREF to: Stack[0x8] (READ)
// 00589706: PUSH ECX
// 00589707: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x304] (DATA)
// 0058970b: PUSH EAX
// 0058970c: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x104] (DATA)
// 00589713: PUSH EAX
// 00589714: LEA EAX,[ESP + 0x310]
//   XREF to: Stack[-0x4] (DATA)
// 0058971b: PUSH EAX
// 0058971c: MOV EBX,dword ptr [ESP + 0x31c]
//   XREF to: Stack[0x4] (READ)
// 00589723: PUSH EBX
// 00589724: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 00589729: ADD ESP,0x14
// 0058972c: POP EBX
// 0058972d: ADD ESP,0x304
// 00589733: RET
