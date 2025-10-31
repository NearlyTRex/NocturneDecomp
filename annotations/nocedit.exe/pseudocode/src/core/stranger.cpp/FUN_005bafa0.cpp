// Name: core_stranger.cpp_FUN_005bafa0
// Address: 005bafa0
// Address Range: [[005bafa0, 005bafb9]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_FUN_005bafa0()
// Globals:
//   void* switchdataD_005baf70 = 005bafba

#include "nocturne.h"

undefined4 core_stranger_cpp_FUN_005bafa0(void)

{
  int in_stack_00000004;
  
  if (in_stack_00000004 != 0) {
    switch(*(undefined4 *)(in_stack_00000004 + 0x2e0)) {
    case 0:
    case 5:
      return 2;
    case 1:
      return 4;
    case 2:
      return 5;
    case 4:
      return 7;
    case 7:
      return 8;
    }
  }
  return 0;
}


// Assembly code:
// 005bafa0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_stranger.cpp_FUN_005bafa0
//   XREF to: Stack[0x4] (READ)
// 005bafa4: TEST EAX,EAX
// 005bafa6: JZ 0x005baf3d
//   XREF to: 005baf3d (CONDITIONAL_JUMP)
// 005bafa8: MOV EAX,dword ptr [EAX + 0x2e0]
// 005bafae: CMP EAX,0x8
// 005bafb1: JA 0x005baf3d
//   XREF to: 005baf3d (CONDITIONAL_JUMP)
// 005bafb3: JMP dword ptr [EAX*0x4 + 0x5baf70]
//   Label: switchD
//   XREF to: 005bafba (COMPUTED_JUMP)
//   XREF to: 005bafc0 (COMPUTED_JUMP)
//   XREF to: 005bafcc (COMPUTED_JUMP)
//   XREF to: 005baf3d (COMPUTED_JUMP)
//   XREF to: 005bafc6 (COMPUTED_JUMP)
//   XREF to: 005bafd2 (COMPUTED_JUMP)
//   XREF to: 005baf70 (DATA)
