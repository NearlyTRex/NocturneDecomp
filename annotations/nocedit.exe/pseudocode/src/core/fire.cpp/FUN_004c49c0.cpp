// Name: core_fire.cpp_FUN_004c49c0
// Address: 004c49c0
// Address Range: [[004c49c0, 004c4afa]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FUN_004c49c0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c9380 (004c9380) at 004c93b0 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_d_f_f_00629e98
//   TerminatedCString s_f_f_f_00629ea5
//   TerminatedCString s_f_f_f_00629eaf
//   TerminatedCString s_f_f_f_00629eb9
//   TerminatedCString s_f_f_f_00629ec3
//   TerminatedCString s_f_f_f_00629ecd
//   TerminatedCString s_f_f_f_00629ed7
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"
// Decompilation failed or timed out

// Assembly code:
// 004c49c0: PUSH EBX
//   Label: core_fire.cpp_FUN_004c49c0
// 004c49c1: PUSH ESI
// 004c49c2: PUSH EDI
// 004c49c3: PUSH EBP
// 004c49c4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c49c8: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c49cc: SUB ESP,0x8
// 004c49cf: FLD float ptr [EBP + 0x18]
// 004c49d2: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c49d5: SUB ESP,0x8
// 004c49d8: FLD float ptr [EBP + 0x8]
// 004c49db: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c49de: MOV EDX,dword ptr [EBP + 0x4]
// 004c49e1: PUSH EDX
// 004c49e2: MOV ECX,dword ptr [EBP]
// 004c49e5: PUSH ECX
// 004c49e6: PUSH 0x629e98
//   XREF to: 00629e98 (DATA)
// 004c49eb: PUSH ESI
// 004c49ec: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c49f1: ADD ESP,0x20
// 004c49f4: SUB ESP,0x8
// 004c49f7: FLD float ptr [EBP + 0x14]
// 004c49fa: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c49fd: SUB ESP,0x8
// 004c4a00: FLD float ptr [EBP + 0x10]
// 004c4a03: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4a06: SUB ESP,0x8
// 004c4a09: FLD float ptr [EBP + 0xc]
// 004c4a0c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4a0f: PUSH 0x629ea5
//   XREF to: 00629ea5 (DATA)
// 004c4a14: PUSH ESI
// 004c4a15: MOV EBX,EBP
// 004c4a17: LEA EDI,[EBP + 0x24]
// 004c4a1a: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4a1f: ADD ESP,0x20
// 004c4a22: SUB ESP,0x8
//   Label: LAB_004c4a22
// 004c4a25: FLD float ptr [EBX + 0x24]
// 004c4a28: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c4a2b: SUB ESP,0x8
// 004c4a2e: FLD float ptr [EBX + 0x20]
// 004c4a31: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4a34: SUB ESP,0x8
// 004c4a37: FLD float ptr [EBX + 0x1c]
// 004c4a3a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4a3d: PUSH 0x629eaf
//   XREF to: 00629eaf (DATA)
// 004c4a42: PUSH ESI
// 004c4a43: ADD EBX,0xc
// 004c4a46: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4a4b: ADD ESP,0x20
// 004c4a4e: CMP EBX,EDI
// 004c4a50: JNZ 0x004c4a22
//   XREF to: 004c4a22 (CONDITIONAL_JUMP)
// 004c4a52: SUB ESP,0x8
// 004c4a55: FLD float ptr [EBP + 0x48]
// 004c4a58: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c4a5b: SUB ESP,0x8
// 004c4a5e: FLD float ptr [EBP + 0x44]
// 004c4a61: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4a64: SUB ESP,0x8
// 004c4a67: FLD float ptr [EBP + 0x40]
// 004c4a6a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4a6d: PUSH 0x629eb9
//   XREF to: 00629eb9 (DATA)
// 004c4a72: PUSH ESI
// 004c4a73: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4a78: ADD ESP,0x20
// 004c4a7b: SUB ESP,0x8
// 004c4a7e: FLD float ptr [EBP + 0x54]
// 004c4a81: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c4a84: SUB ESP,0x8
// 004c4a87: FLD float ptr [EBP + 0x50]
// 004c4a8a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4a8d: SUB ESP,0x8
// 004c4a90: FLD float ptr [EBP + 0x4c]
// 004c4a93: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4a96: PUSH 0x629ec3
//   XREF to: 00629ec3 (DATA)
// 004c4a9b: PUSH ESI
// 004c4a9c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4aa1: ADD ESP,0x20
// 004c4aa4: SUB ESP,0x8
// 004c4aa7: FLD float ptr [EBP + 0x60]
// 004c4aaa: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c4aad: SUB ESP,0x8
// 004c4ab0: FLD float ptr [EBP + 0x5c]
// 004c4ab3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4ab6: SUB ESP,0x8
// 004c4ab9: FLD float ptr [EBP + 0x58]
// 004c4abc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4abf: PUSH 0x629ecd
//   XREF to: 00629ecd (DATA)
// 004c4ac4: PUSH ESI
// 004c4ac5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4aca: ADD ESP,0x20
// 004c4acd: SUB ESP,0x8
// 004c4ad0: FLD float ptr [EBP + 0x6c]
// 004c4ad3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004c4ad6: SUB ESP,0x8
// 004c4ad9: FLD float ptr [EBP + 0x68]
// 004c4adc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004c4adf: SUB ESP,0x8
// 004c4ae2: FLD float ptr [EBP + 0x64]
// 004c4ae5: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004c4ae8: PUSH 0x629ed7
//   XREF to: 00629ed7 (DATA)
// 004c4aed: PUSH ESI
// 004c4aee: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c4af3: ADD ESP,0x20
// 004c4af6: POP EBP
// 004c4af7: POP EDI
// 004c4af8: POP ESI
// 004c4af9: POP EBX
// 004c4afa: RET
