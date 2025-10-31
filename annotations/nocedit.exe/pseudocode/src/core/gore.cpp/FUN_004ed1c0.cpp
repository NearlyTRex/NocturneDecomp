// Name: core_gore.cpp_FUN_004ed1c0
// Address: 004ed1c0
// Address Range: [[004ed1c0, 004ed235]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed1c0()
// Cross-references:
//   core_gore.cpp_FUN_004ee290 (004ee290) at 004ee2cf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_0062e3bf
//   TerminatedCString s_d_d_0062e3c9
//   TerminatedCString s_d_f_d_d_d_0062e3d0
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ed1c0(undefined4 param_1, undefined4 param_2) */

void core_gore_cpp_FUN_004ed1c0(void)

{
  undefined4 *in_stack_00000004;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%f,%f,%f\n",(double)(float)in_stack_00000004[1],
             SUB84((double)(float)in_stack_00000004[2],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[2] >> 0x20),
             SUB84((double)(float)in_stack_00000004[3],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[3] >> 0x20));
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%d,%d\n",*in_stack_00000004,in_stack_00000004[4]);
  crt_stdio_c_fprintf_FUN_005fe6d0
            (in_stack_00000008,"%d,%f,%d,%d,%d\n",in_stack_00000004[5],
             SUB84((double)(float)in_stack_00000004[6],0),
             (int)((ulonglong)(double)(float)in_stack_00000004[6] >> 0x20),in_stack_00000004[7],
             in_stack_00000004[8],in_stack_00000004[9]);
  return;
}


// Assembly code:
// 004ed1c0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ed1c0
// 004ed1c1: PUSH ESI
// 004ed1c2: PUSH EDI
// 004ed1c3: PUSH EBP
// 004ed1c4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ed1c8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ed1cc: SUB ESP,0x8
// 004ed1cf: FLD float ptr [EBX + 0xc]
// 004ed1d2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004ed1d5: SUB ESP,0x8
// 004ed1d8: FLD float ptr [EBX + 0x8]
// 004ed1db: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ed1de: SUB ESP,0x8
// 004ed1e1: FLD float ptr [EBX + 0x4]
// 004ed1e4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004ed1e7: PUSH 0x62e3bf
//   XREF to: 0062e3bf (DATA)
// 004ed1ec: PUSH ESI
// 004ed1ed: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ed1f2: ADD ESP,0x20
// 004ed1f5: MOV EDX,dword ptr [EBX + 0x10]
// 004ed1f8: PUSH EDX
// 004ed1f9: MOV ECX,dword ptr [EBX]
// 004ed1fb: PUSH ECX
// 004ed1fc: PUSH 0x62e3c9
//   XREF to: 0062e3c9 (DATA)
// 004ed201: PUSH ESI
// 004ed202: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ed207: ADD ESP,0x10
// 004ed20a: MOV EDI,dword ptr [EBX + 0x24]
// 004ed20d: PUSH EDI
// 004ed20e: MOV EBP,dword ptr [EBX + 0x20]
// 004ed211: PUSH EBP
// 004ed212: MOV EAX,dword ptr [EBX + 0x1c]
// 004ed215: PUSH EAX
// 004ed216: SUB ESP,0x8
// 004ed219: FLD float ptr [EBX + 0x18]
// 004ed21c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004ed21f: MOV EDX,dword ptr [EBX + 0x14]
// 004ed222: PUSH EDX
// 004ed223: PUSH 0x62e3d0
//   XREF to: 0062e3d0 (DATA)
// 004ed228: PUSH ESI
// 004ed229: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ed22e: ADD ESP,0x20
// 004ed231: POP EBP
// 004ed232: POP EDI
// 004ed233: POP ESI
// 004ed234: POP EBX
// 004ed235: RET
