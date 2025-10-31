// Name: crt_unknown.c_staticFinal_FUN_00602748
// Address: 00602748
// Address Range: [[00602748, 00602782]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_00602748()
// Globals:
//   char* g_CommandLineA
//   WCHAR* g_CommandLineW
// Function calls:
//   crt_memory.c_free_FUN_00601cd0

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_00602748(void)

{
  if (g_CommandLineA != (char *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_CommandLineA);
    g_CommandLineA = (char *)0x0;
  }
  if (g_CommandLineW != (WCHAR *)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_CommandLineW);
    g_CommandLineW = (WCHAR *)0x0;
  }
  return;
}


// Assembly code:
// 00602748: PUSH ESI
//   Label: crt_unknown.c_staticFinal_FUN_00602748
// 00602749: PUSH EBP
// 0060274a: MOV EDX,dword ptr [0x03f9b224]
//   XREF to: 03f9b224 (READ)
// 00602750: TEST EDX,EDX
// 00602752: JZ 0x00602765
//   XREF to: 00602765 (CONDITIONAL_JUMP)
// 00602754: PUSH EDX
// 00602755: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060275a: XOR ECX,ECX
// 0060275c: ADD ESP,0x4
// 0060275f: MOV dword ptr [0x03f9b224],ECX
//   XREF to: 03f9b224 (WRITE)
// 00602765: MOV ESI,dword ptr [0x03f9b228]
//   Label: LAB_00602765
//   XREF to: 03f9b228 (READ)
// 0060276b: TEST ESI,ESI
// 0060276d: JZ 0x00602780
//   XREF to: 00602780 (CONDITIONAL_JUMP)
// 0060276f: PUSH ESI
// 00602770: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 00602775: XOR EBP,EBP
// 00602777: ADD ESP,0x4
// 0060277a: MOV dword ptr [0x03f9b228],EBP
//   XREF to: 03f9b228 (WRITE)
// 00602780: POP EBP
//   Label: LAB_00602780
// 00602781: POP ESI
// 00602782: RET
