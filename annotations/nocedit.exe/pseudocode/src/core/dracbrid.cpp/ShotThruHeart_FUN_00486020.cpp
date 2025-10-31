// Name: core_dracbrid.cpp_ShotThruHeart_FUN_00486020
// Address: 00486020
// Address Range: [[00486020, 0048606e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_ShotThruHeart_FUN_00486020()
// Cross-references:
//   core_dracbrid.cpp_FUN_00486070 (00486070) at 004860de [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Shot_thru_the_heart_00621bd2
//   double DOUBLE_00621bee = 20
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
// Function calls:
//   engine_console.cpp_CConsole_printf_FUN_00441890

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_ShotThruHeart(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_ShotThruHeart_FUN_00486020(void)

{
  CConsole *this_ptr;
  int in_stack_00000004;
  int *in_stack_00000008;
  
  this_ptr = g_CConsolePtr;
  if (((in_stack_00000008[0xc] != 0x6c) &&
      (*in_stack_00000008 == *(int *)(in_stack_00000004 + 0xbed4))) &&
     (in_stack_00000008[0xc] == 0x68)) {
    in_stack_00000008[1] = (int)((float)in_stack_00000008[1] * (float)DOUBLE_00621bee);
    engine_console_cpp_CConsole_printf_FUN_00441890(this_ptr,"Shot thru the heart\n");
    return;
  }
  return;
}


// Assembly code:
// 00486020: SUB ESP,0x8
//   Label: core_dracbrid.cpp_ShotThruHeart_FUN_00486020
// 00486023: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00486027: CMP dword ptr [EAX + 0x30],0x6c
// 0048602b: JZ 0x00486041
//   XREF to: 00486041 (CONDITIONAL_JUMP)
// 0048602d: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00486031: MOV EDX,dword ptr [EAX]
// 00486033: CMP EDX,dword ptr [ECX + 0xbed4]
// 00486039: JNZ 0x00486041
//   XREF to: 00486041 (CONDITIONAL_JUMP)
// 0048603b: CMP dword ptr [EAX + 0x30],0x68
// 0048603f: JZ 0x00486045
//   XREF to: 00486045 (CONDITIONAL_JUMP)
// 00486041: ADD ESP,0x8
//   Label: LAB_00486041
// 00486044: RET
// 00486045: PUSH EDI
//   Label: LAB_00486045
// 00486046: FLD float ptr [EAX + 0x4]
// 00486049: PUSH 0x621bd2
//   XREF to: 00621bd2 (DATA)
// 0048604e: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00486054: FLD ST0
// 00486056: FMUL double ptr [0x00621bee]
//   XREF to: 00621bee (READ)
// 0048605c: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 0048605d: FSTP ST1
// 0048605f: FSTP float ptr [EAX + 0x4]
// 00486062: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00486067: ADD ESP,0x8
// 0048606a: POP EDI
// 0048606b: ADD ESP,0x8
// 0048606e: RET
