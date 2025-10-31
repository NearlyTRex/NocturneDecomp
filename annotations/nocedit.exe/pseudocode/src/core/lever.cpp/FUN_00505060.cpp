// Name: core_lever.cpp_FUN_00505060
// Address: 00505060
// Address Range: [[00505060, 00505073]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505060()

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00505060(undefined4 param_1) */

bool core_lever_cpp_FUN_00505060(void)

{
  int in_stack_00000004;
  
  return *(int *)(in_stack_00000004 + 0x810) != 0;
}


// Assembly code:
// 00505060: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_lever.cpp_FUN_00505060
//   XREF to: Stack[0x4] (READ)
// 00505064: CMP dword ptr [EAX + 0x810],0x0
// 0050506b: SETNZ AL
// 0050506e: AND EAX,0xff
// 00505073: RET
