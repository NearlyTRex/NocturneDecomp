// Name: core_skeledit.cpp_FUN_0058b8e0
// Address: 0058b8e0
// Address Range: [[0058b8e0, 0058b9a7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058b8e0()
// Cross-references:
//   core_skeledit.cpp_FUN_0058b660 (0058b660) at 0058b862 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c315 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_0064a8c3
//   TerminatedCString s_raw_0064a8ca
// Function calls:
//   crt_file.c_makepath_FUN_005febfc
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_splitpath_FUN_005ff178

#include "nocturne.h"

undefined4 core_skeledit_cpp_FUN_0058b8e0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *path_buffer;
  int in_stack_0000000c;
  FILE *in_stack_00000010;
  char acStack_104 [4];
  char acStack_100 [248];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x22c);
  iVar2 = 1;
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000010);
    if (iVar1 < 0) break;
  } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
  iVar2 = 0;
  if (0 < *(int *)(in_stack_0000000c + 0xbc)) {
    path_buffer = (char *)(in_stack_0000000c + 200);
    do {
      iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000010,"%[^\n]\n",&stack0xfffffdf4);
      if (iVar1 != 1) {
        return 0;
      }
      crt_string_c_splitpath_FUN_005ff178
                (&stack0xfffffdf8,(char *)0x0,(char *)0x0,acStack_104,(char *)0x0);
      iVar2 = iVar2 + 1;
      crt_file_c_makepath_FUN_005febfc
                (path_buffer,(char *)0x0,(char *)0x0,acStack_100,".raw");
      path_buffer = path_buffer + 0x48;
    } while (iVar2 < *(int *)(in_stack_0000000c + 0xbc));
  }
  return 1;
}


// Assembly code:
// 0058b8e0: PUSH 0x22c
//   Label: core_skeledit.cpp_FUN_0058b8e0
// 0058b8e5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058b8ea: PUSH EBX
// 0058b8eb: PUSH ESI
// 0058b8ec: PUSH EDI
// 0058b8ed: PUSH EBP
// 0058b8ee: SUB ESP,0x204
// 0058b8f4: MOV EDI,dword ptr [ESP + 0x218]
//   XREF to: Stack[0x4] (READ)
// 0058b8fb: MOV EBP,dword ptr [ESP + 0x21c]
//   XREF to: Stack[0x8] (READ)
// 0058b902: MOV EBX,0x1
// 0058b907: MOV ESI,EBP
// 0058b909: PUSH ESI
//   Label: LAB_0058b909
// 0058b90a: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058b90f: ADD ESP,0x4
// 0058b912: TEST EAX,EAX
// 0058b914: JL 0x0058b920
//   XREF to: 0058b920 (CONDITIONAL_JUMP)
// 0058b916: CMP EAX,0xa
// 0058b919: JNZ 0x0058b909
//   XREF to: 0058b909 (CONDITIONAL_JUMP)
// 0058b91b: DEC EBX
// 0058b91c: TEST EBX,EBX
// 0058b91e: JG 0x0058b909
//   XREF to: 0058b909 (CONDITIONAL_JUMP)
// 0058b920: MOV EDX,dword ptr [EDI + 0xbc]
//   Label: LAB_0058b920
// 0058b926: XOR EBX,EBX
// 0058b928: TEST EDX,EDX
// 0058b92a: JLE 0x0058b998
//   XREF to: 0058b998 (CONDITIONAL_JUMP)
// 0058b92c: LEA ESI,[EDI + 0xc8]
// 0058b932: MOV EAX,ESP
//   Label: LAB_0058b932
// 0058b934: PUSH EAX
// 0058b935: PUSH 0x64a8c3
//   XREF to: 0064a8c3 (DATA)
// 0058b93a: PUSH EBP
// 0058b93b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0058b940: ADD ESP,0xc
// 0058b943: CMP EAX,0x1
// 0058b946: JZ 0x0058b955
//   XREF to: 0058b955 (CONDITIONAL_JUMP)
// 0058b948: XOR EAX,EAX
// 0058b94a: ADD ESP,0x204
// 0058b950: POP EBP
// 0058b951: POP EDI
// 0058b952: POP ESI
// 0058b953: POP EBX
// 0058b954: RET
// 0058b955: PUSH 0x0
//   Label: LAB_0058b955
// 0058b957: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x110] (DATA)
// 0058b95e: PUSH EAX
// 0058b95f: PUSH 0x0
// 0058b961: PUSH 0x0
// 0058b963: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x214] (DATA)
// 0058b967: PUSH EAX
// 0058b968: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 0058b96d: ADD ESP,0x14
// 0058b970: PUSH 0x64a8ca
//   XREF to: 0064a8ca (DATA)
// 0058b975: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x110] (DATA)
// 0058b97c: PUSH EAX
// 0058b97d: PUSH 0x0
// 0058b97f: PUSH 0x0
// 0058b981: PUSH ESI
// 0058b982: INC EBX
// 0058b983: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0058b988: ADD ESP,0x14
// 0058b98b: MOV ECX,dword ptr [EDI + 0xbc]
// 0058b991: ADD ESI,0x48
// 0058b994: CMP EBX,ECX
// 0058b996: JL 0x0058b932
//   XREF to: 0058b932 (CONDITIONAL_JUMP)
// 0058b998: MOV EAX,0x1
//   Label: LAB_0058b998
// 0058b99d: ADD ESP,0x204
// 0058b9a3: POP EBP
// 0058b9a4: POP EDI
// 0058b9a5: POP ESI
// 0058b9a6: POP EBX
// 0058b9a7: RET
