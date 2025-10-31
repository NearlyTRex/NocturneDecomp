// Name: core_script.cpp_FUN_00559ac0
// Address: 00559ac0
// Address Range: [[00559ac0, 00559b17]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00559ac0()
// Cross-references:
//   core_game.cpp_CGame_renderOverlay_FUN_004d8040 (004d8040) at 004d80eb [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559b20 (00559b20) at 00559ba3 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   undefined4 DAT_0310f4a0
// Function calls:
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: int core_script.cpp_FUN_00559ac0(CScript* param_1) */

int core_script_cpp_FUN_00559ac0(void)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = g_WindowHeight - (g_WindowWidth * 100) / 0xb9;
  iVar1 = iVar2 / 2;
  fVar3 = (float10)iVar1 * (float10)_DAT_0310f4a0;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2 >> 0x1f,iVar1));
  return (int)ROUND(fVar3);
}


// Assembly code:
// 00559ac0: PUSH EBX
//   Label: core_script.cpp_FUN_00559ac0
// 00559ac1: SUB ESP,0x8
// 00559ac4: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 00559aca: LEA EAX,[EDX*0x4 + 0x0]
// 00559ad1: SUB EAX,EDX
// 00559ad3: SHL EAX,0x3
// 00559ad6: ADD EDX,EAX
// 00559ad8: SHL EDX,0x2
// 00559adb: MOV EBX,0xb9
// 00559ae0: MOV EAX,EDX
// 00559ae2: SAR EDX,0x1f
// 00559ae5: IDIV EBX
// 00559ae7: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00559aed: MOV EDX,ECX
// 00559aef: SUB EDX,EAX
// 00559af1: MOV EAX,EDX
// 00559af3: SAR EDX,0x1f
// 00559af6: SUB EAX,EDX
// 00559af8: SAR EAX,0x1
// 00559afa: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00559afe: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 00559b02: FMUL float ptr [0x0310f4a0]
//   XREF to: 0310f4a0 (READ)
// 00559b08: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00559b0d: FISTP dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00559b10: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 00559b13: ADD ESP,0x8
// 00559b16: POP EBX
// 00559b17: RET
