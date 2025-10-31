// Name: core_gore.cpp_FUN_004ecb90
// Address: 004ecb90
// Address Range: [[004ecb90, 004ecc35]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ecb90()
// Cross-references:
//   core_gore.cpp_FUN_004ee290 (004ee290) at 004ee318 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0062e356
//   TerminatedCString s_d_d_d_0062e360
//   TerminatedCString s_f_f_f_0062e36a
//   TerminatedCString s_d_d_d_d_d_d_d_0062e374
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ecb90(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ecb90
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               undefined4 *param_5,FILE *param_6)

{
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%f,%f,%f\n",(double)(float)param_5[1],(double)(float)param_5[2],
             (double)(float)param_5[3]);
  crt_stdio_c_fprintf_FUN_005fe6d0(param_6,"%d,%d,%d\n",param_5[4],param_5[5],*param_5);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%f,%f,%f\n",(double)(float)param_5[6],(double)(float)param_5[8],
             (double)(float)param_5[7]);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (param_6,"%d,%d,%d,%d,%d,%d,%d\n",param_5[10],param_5[0xb],param_5[0xc],param_5[0xd],
             param_5[0xe],param_5[0xf],param_5[0x10],unaff_EBX);
  return;
}


// Assembly code:
// 004ecb90: PUSH EBX
//   Label: core_gore.cpp_FUN_004ecb90
// 004ecb91: PUSH ESI
// 004ecb92: PUSH EDI
// 004ecb93: PUSH EBP
// 004ecb94: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ecb98: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ecb9c: SUB ESP,0x8
// 004ecb9f: FLD float ptr [EBX + 0xc]
// 004ecba2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004ecba5: SUB ESP,0x8
// 004ecba8: FLD float ptr [EBX + 0x8]
// 004ecbab: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ecbae: SUB ESP,0x8
// 004ecbb1: FLD float ptr [EBX + 0x4]
// 004ecbb4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004ecbb7: PUSH 0x62e356
//   XREF to: 0062e356 (DATA)
// 004ecbbc: PUSH ESI
// 004ecbbd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ecbc2: ADD ESP,0x20
// 004ecbc5: MOV EDX,dword ptr [EBX]
// 004ecbc7: PUSH EDX
// 004ecbc8: MOV ECX,dword ptr [EBX + 0x14]
// 004ecbcb: PUSH ECX
// 004ecbcc: MOV EDI,dword ptr [EBX + 0x10]
// 004ecbcf: PUSH EDI
// 004ecbd0: PUSH 0x62e360
//   XREF to: 0062e360 (DATA)
// 004ecbd5: PUSH ESI
// 004ecbd6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ecbdb: ADD ESP,0x14
// 004ecbde: SUB ESP,0x8
// 004ecbe1: FLD float ptr [EBX + 0x1c]
// 004ecbe4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004ecbe7: SUB ESP,0x8
// 004ecbea: FLD float ptr [EBX + 0x20]
// 004ecbed: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ecbf0: SUB ESP,0x8
// 004ecbf3: FLD float ptr [EBX + 0x18]
// 004ecbf6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004ecbf9: PUSH 0x62e36a
//   XREF to: 0062e36a (DATA)
// 004ecbfe: PUSH ESI
// 004ecbff: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ecc04: ADD ESP,0x20
// 004ecc07: MOV EBP,dword ptr [EBX + 0x40]
// 004ecc0a: PUSH EBP
// 004ecc0b: MOV EAX,dword ptr [EBX + 0x3c]
// 004ecc0e: PUSH EAX
// 004ecc0f: MOV EDX,dword ptr [EBX + 0x38]
// 004ecc12: PUSH EDX
// 004ecc13: MOV ECX,dword ptr [EBX + 0x34]
// 004ecc16: PUSH ECX
// 004ecc17: MOV EDI,dword ptr [EBX + 0x30]
// 004ecc1a: PUSH EDI
// 004ecc1b: MOV EBP,dword ptr [EBX + 0x2c]
// 004ecc1e: PUSH EBP
// 004ecc1f: MOV EAX,dword ptr [EBX + 0x28]
// 004ecc22: PUSH EAX
// 004ecc23: PUSH 0x62e374
//   XREF to: 0062e374 (DATA)
// 004ecc28: PUSH ESI
// 004ecc29: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ecc2e: ADD ESP,0x24
// 004ecc31: POP EBP
// 004ecc32: POP EDI
// 004ecc33: POP ESI
// 004ecc34: POP EBX
// 004ecc35: RET
