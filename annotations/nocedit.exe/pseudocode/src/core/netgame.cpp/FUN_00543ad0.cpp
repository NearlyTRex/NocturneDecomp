// Name: core_netgame.cpp_FUN_00543ad0
// Address: 00543ad0
// Address Range: [[00543ad0, 00543af3]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_FUN_00543ad0()

#include "nocturne.h"

undefined4 core_netgame_cpp_FUN_00543ad0(void)

{
  int *in_stack_00000004;
  int *in_stack_00000008;
  
  if (((short)in_stack_00000008[1] == (short)in_stack_00000004[1]) &&
     (*in_stack_00000004 == *in_stack_00000008)) {
    return 1;
  }
  return 0;
}


// Assembly code:
// 00543ad0: PUSH EBX
//   Label: core_netgame.cpp_FUN_00543ad0
// 00543ad1: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00543ad5: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00543ad9: MOV BX,word ptr [EDX + 0x4]
// 00543add: CMP BX,word ptr [ECX + 0x4]
// 00543ae1: JNZ 0x00543ae9
//   XREF to: 00543ae9 (CONDITIONAL_JUMP)
// 00543ae3: MOV EAX,dword ptr [ECX]
// 00543ae5: CMP EAX,dword ptr [EDX]
// 00543ae7: JZ 0x00543aed
//   XREF to: 00543aed (CONDITIONAL_JUMP)
// 00543ae9: XOR EAX,EAX
//   Label: LAB_00543ae9
// 00543aeb: POP EBX
// 00543aec: RET
// 00543aed: MOV EAX,0x1
//   Label: LAB_00543aed
// 00543af2: POP EBX
// 00543af3: RET
