// Name: core_gore.cpp_FUN_004ecb00
// Address: 004ecb00
// Address Range: [[004ecb00, 004ecb81]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecb00()
// Cross-references:
//   core_gore.cpp_FUN_004ee1e0 (004ee1e0) at 004ee267 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0062e322
//   TerminatedCString s_d_d_d_0062e32c
//   TerminatedCString s_f_f_f_0062e336
//   TerminatedCString s_d_d_d_d_d_d_d_0062e340
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ecb00(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ecb00
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,FILE *param_6)

{
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%f,%f,%f\n",param_5 + 4,param_5 + 8,param_5 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%d,%d\n",param_5 + 0x10,param_5 + 0x14,param_5,unaff_EBX);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%f,%f,%f\n",param_5 + 0x18,param_5 + 0x20,param_5 + 0x1c);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%d,%d,%d,%d,%d,%d\n",param_5 + 0x28,param_5 + 0x2c,param_5 + 0x30,
             param_5 + 0x34,param_5 + 0x38,param_5 + 0x3c);
  return;
}


// Assembly code:
// 004ecb00: PUSH EBX
//   Label: core_gore.cpp_FUN_004ecb00
// 004ecb01: PUSH ESI
// 004ecb02: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ecb06: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ecb0a: LEA EAX,[EBX + 0xc]
// 004ecb0d: PUSH EAX
// 004ecb0e: LEA EAX,[EBX + 0x8]
// 004ecb11: PUSH EAX
// 004ecb12: LEA EAX,[EBX + 0x4]
// 004ecb15: PUSH EAX
// 004ecb16: PUSH 0x62e322
//   XREF to: 0062e322 (DATA)
// 004ecb1b: PUSH ESI
// 004ecb1c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ecb21: ADD ESP,0x14
// 004ecb24: PUSH EBX
// 004ecb25: LEA EAX,[EBX + 0x14]
// 004ecb28: PUSH EAX
// 004ecb29: LEA EAX,[EBX + 0x10]
// 004ecb2c: PUSH EAX
// 004ecb2d: PUSH 0x62e32c
//   XREF to: 0062e32c (DATA)
// 004ecb32: PUSH ESI
// 004ecb33: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ecb38: ADD ESP,0x14
// 004ecb3b: LEA EAX,[EBX + 0x1c]
// 004ecb3e: PUSH EAX
// 004ecb3f: LEA EAX,[EBX + 0x20]
// 004ecb42: PUSH EAX
// 004ecb43: LEA EAX,[EBX + 0x18]
// 004ecb46: PUSH EAX
// 004ecb47: PUSH 0x62e336
//   XREF to: 0062e336 (DATA)
// 004ecb4c: PUSH ESI
// 004ecb4d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ecb52: ADD ESP,0x14
// 004ecb55: LEA EAX,[EBX + 0x40]
// 004ecb58: PUSH EAX
// 004ecb59: LEA EAX,[EBX + 0x3c]
// 004ecb5c: PUSH EAX
// 004ecb5d: LEA EAX,[EBX + 0x38]
// 004ecb60: PUSH EAX
// 004ecb61: LEA EAX,[EBX + 0x34]
// 004ecb64: PUSH EAX
// 004ecb65: LEA EAX,[EBX + 0x30]
// 004ecb68: PUSH EAX
// 004ecb69: LEA EAX,[EBX + 0x2c]
// 004ecb6c: PUSH EAX
// 004ecb6d: ADD EBX,0x28
// 004ecb70: PUSH EBX
// 004ecb71: PUSH 0x62e340
//   XREF to: 0062e340 (DATA)
// 004ecb76: PUSH ESI
// 004ecb77: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ecb7c: ADD ESP,0x24
// 004ecb7f: POP ESI
// 004ecb80: POP EBX
// 004ecb81: RET
