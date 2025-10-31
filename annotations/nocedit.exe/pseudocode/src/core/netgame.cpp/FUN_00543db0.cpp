// Name: core_netgame.cpp_FUN_00543db0
// Address: 00543db0
// Address Range: [[00543db0, 00543df8]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543db0()

#include "nocturne.h"

void core_netgame_cpp_FUN_00543db0(void)

{
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000004 = *in_stack_00000008;
  in_stack_00000004[1] = in_stack_00000008[1];
  in_stack_00000004[2] = in_stack_00000008[2];
  in_stack_00000004[3] = in_stack_00000008[3];
  in_stack_00000004[4] = in_stack_00000008[4];
  in_stack_00000004[5] = in_stack_00000008[5];
  in_stack_00000004[6] = in_stack_00000008[6];
  in_stack_00000004[7] = in_stack_00000008[7];
  in_stack_00000004[8] = in_stack_00000008[8];
  in_stack_00000004[9] = in_stack_00000008[9];
  in_stack_00000004[10] = in_stack_00000008[10];
  return;
}


// Assembly code:
// 00543db0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_netgame.cpp_FUN_00543db0
//   XREF to: Stack[0x4] (READ)
// 00543db4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00543db8: MOV ECX,dword ptr [EDX]
// 00543dba: MOV dword ptr [EAX],ECX
// 00543dbc: MOV ECX,dword ptr [EDX + 0x4]
// 00543dbf: MOV dword ptr [EAX + 0x4],ECX
// 00543dc2: MOV ECX,dword ptr [EDX + 0x8]
// 00543dc5: MOV dword ptr [EAX + 0x8],ECX
// 00543dc8: MOV ECX,dword ptr [EDX + 0xc]
// 00543dcb: MOV dword ptr [EAX + 0xc],ECX
// 00543dce: MOV ECX,dword ptr [EDX + 0x10]
// 00543dd1: MOV dword ptr [EAX + 0x10],ECX
// 00543dd4: MOV ECX,dword ptr [EDX + 0x14]
// 00543dd7: MOV dword ptr [EAX + 0x14],ECX
// 00543dda: MOV ECX,dword ptr [EDX + 0x18]
// 00543ddd: MOV dword ptr [EAX + 0x18],ECX
// 00543de0: MOV ECX,dword ptr [EDX + 0x1c]
// 00543de3: MOV dword ptr [EAX + 0x1c],ECX
// 00543de6: MOV ECX,dword ptr [EDX + 0x20]
// 00543de9: MOV dword ptr [EAX + 0x20],ECX
// 00543dec: MOV ECX,dword ptr [EDX + 0x24]
// 00543def: MOV dword ptr [EAX + 0x24],ECX
// 00543df2: MOV ECX,dword ptr [EDX + 0x28]
// 00543df5: MOV dword ptr [EAX + 0x28],ECX
// 00543df8: RET
