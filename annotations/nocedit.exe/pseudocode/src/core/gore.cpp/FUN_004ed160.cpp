// Name: core_gore.cpp_FUN_004ed160
// Address: 004ed160
// Address Range: [[004ed160, 004ed1bb]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed160()
// Cross-references:
//   core_gore.cpp_FUN_004ee1e0 (004ee1e0) at 004ee22b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0062e39e
//   TerminatedCString s_d_d_0062e3a8
//   TerminatedCString s_d_f_d_d_d_0062e3af
// Function calls:
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ed160(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ed160
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int param_5,FILE *param_6)

{
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%f,%f,%f\n",param_5 + 4,param_5 + 8,param_5 + 0xc);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d,%d\n",param_5,param_5 + 0x10,unaff_EBX);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_6,"%d,%f,%d,%d,%d\n",param_5 + 0x14,param_5 + 0x18,param_5 + 0x1c,
             param_5 + 0x20,param_5 + 0x24);
  return;
}


// Assembly code:
// 004ed160: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed160
// 004ed161: PUSH ESI
// 004ed162: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ed166: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ed16a: LEA EAX,[EBX + 0xc]
// 004ed16d: PUSH EAX
// 004ed16e: LEA EAX,[EBX + 0x8]
// 004ed171: PUSH EAX
// 004ed172: LEA EAX,[EBX + 0x4]
// 004ed175: PUSH EAX
// 004ed176: PUSH 0x62e39e
//   XREF to: 0062e39e (DATA)
// 004ed17b: PUSH ESI
// 004ed17c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ed181: ADD ESP,0x14
// 004ed184: LEA EAX,[EBX + 0x10]
// 004ed187: PUSH EAX
// 004ed188: PUSH EBX
// 004ed189: PUSH 0x62e3a8
//   XREF to: 0062e3a8 (DATA)
// 004ed18e: PUSH ESI
// 004ed18f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ed194: ADD ESP,0x10
// 004ed197: LEA EAX,[EBX + 0x24]
// 004ed19a: PUSH EAX
// 004ed19b: LEA EAX,[EBX + 0x20]
// 004ed19e: PUSH EAX
// 004ed19f: LEA EAX,[EBX + 0x1c]
// 004ed1a2: PUSH EAX
// 004ed1a3: LEA EAX,[EBX + 0x18]
// 004ed1a6: PUSH EAX
// 004ed1a7: ADD EBX,0x14
// 004ed1aa: PUSH EBX
// 004ed1ab: PUSH 0x62e3af
//   XREF to: 0062e3af (DATA)
// 004ed1b0: PUSH ESI
// 004ed1b1: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ed1b6: ADD ESP,0x1c
// 004ed1b9: POP ESI
// 004ed1ba: POP EBX
// 004ed1bb: RET
