// Name: crt_unknown.c_staticFinal_FUN_0060c73c
// Address: 0060c73c
// Address Range: [[0060c73c, 0060c78c]]
// Convention: unknown
// Signature: undefined crt_unknown.c_staticFinal_FUN_0060c73c()
// Globals:
//   FreeEnvironmentStringsA* PTR_FreeEnvironmentStringsA_00611558 = 00211dba
//   char* g_EnvironmentStrings = 00000000
//   char** g_EnvironmentBlock
//   undefined4 DAT_03f9c150
// Function calls:
//   crt_memory.c_free_FUN_00601cd0
//   crt_unknown.c_FUN_0060e4f0

#include "nocturne.h"

void crt_unknown_c_staticFinal_FUN_0060c73c(void)

{
  crt_unknown_c_FUN_0060e4f0();
  if (g_EnvironmentBlock != (char **)0x0) {
    crt_memory_c_free_FUN_00601cd0(g_EnvironmentBlock);
    g_EnvironmentBlock = (char **)0x0;
  }
  if (DAT_03f9c150 != (void *)0x0) {
    crt_memory_c_free_FUN_00601cd0(DAT_03f9c150);
    DAT_03f9c150 = (void *)0x0;
  }
  if (g_EnvironmentStrings != (char *)0x0) {
    (*PTR_FreeEnvironmentStringsA_00611558)(g_EnvironmentStrings);
  }
  return;
}


// Assembly code:
// 0060c73c: PUSH ESI
//   Label: crt_unknown.c_staticFinal_FUN_0060c73c
// 0060c73d: PUSH EBP
// 0060c73e: CALL crt_unknown.c_FUN_0060e4f0
//   XREF to: 0060e4f0 (UNCONDITIONAL_CALL)
// 0060c743: MOV EDX,dword ptr [0x03f9b864]
//   XREF to: 03f9b864 (READ)
// 0060c749: TEST EDX,EDX
// 0060c74b: JZ 0x0060c75e
//   XREF to: 0060c75e (CONDITIONAL_JUMP)
// 0060c74d: PUSH EDX
// 0060c74e: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060c753: XOR ECX,ECX
// 0060c755: ADD ESP,0x4
// 0060c758: MOV dword ptr [0x03f9b864],ECX
//   XREF to: 03f9b864 (WRITE)
// 0060c75e: MOV ESI,dword ptr [0x03f9c150]
//   Label: LAB_0060c75e
//   XREF to: 03f9c150 (READ)
// 0060c764: TEST ESI,ESI
// 0060c766: JZ 0x0060c779
//   XREF to: 0060c779 (CONDITIONAL_JUMP)
// 0060c768: PUSH ESI
// 0060c769: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060c76e: XOR EBP,EBP
// 0060c770: ADD ESP,0x4
// 0060c773: MOV dword ptr [0x03f9c150],EBP
//   XREF to: 03f9c150 (WRITE)
// 0060c779: MOV EAX,[0x00685011]
//   Label: LAB_0060c779
//   XREF to: 00685011 (READ)
// 0060c77e: TEST EAX,EAX
// 0060c780: JZ 0x0060c78a
//   XREF to: 0060c78a (CONDITIONAL_JUMP)
// 0060c782: PUSH EAX
// 0060c783: CALL dword ptr CS:[0x611558]
//   XREF to: 00611558 (READ)
// 0060c78a: POP EBP
//   Label: LAB_0060c78a
// 0060c78b: POP ESI
// 0060c78c: RET
