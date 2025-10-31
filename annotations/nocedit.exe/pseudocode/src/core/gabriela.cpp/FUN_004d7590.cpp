// Name: core_gabriela.cpp_FUN_004d7590
// Address: 004d7590
// Address Range: [[004d7590, 004d75a3]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d7590()

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d7590(undefined4 param_1) */

bool core_gabriela_cpp_FUN_004d7590(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x1fbd4) != 0;
}


// Assembly code:
// 004d7590: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_gabriela.cpp_FUN_004d7590
//   XREF to: Stack[0x4] (READ)
// 004d7594: CMP dword ptr [EAX + 0x1fbd4],0x0
// 004d759b: SETNZ AL
// 004d759e: AND EAX,0xff
// 004d75a3: RET
