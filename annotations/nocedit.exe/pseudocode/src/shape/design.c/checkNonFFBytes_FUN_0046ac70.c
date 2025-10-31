// Name: shape_design.c_checkNonFFBytes_FUN_0046ac70
// Address: 0046ac70
// Address Range: [[0046ac70, 0046acb6]]
// Convention: __cdecl
// Signature: int shape_design.c_checkNonFFBytes_FUN_0046ac70(char * buffer_ptr, int buffer_length)
// Cross-references:
//   shape_design.c_cramTextureList_FUN_0046bb80 (0046bb80) at 0046dd85 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl shape_design_c_checkNonFFBytes_FUN_0046ac70(char *buffer_ptr,int buffer_length)

{
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (buffer_length <= local_14) {
      return 0;
    }
    if (buffer_ptr[local_14] != -1) break;
    local_14 = local_14 + 1;
  }
  return 1;
}


// Assembly code:
// 0046ac70: PUSH EBX
//   Label: shape_design.c_checkNonFFBytes_FUN_0046ac70
// 0046ac71: PUSH ESI
// 0046ac72: PUSH EDI
// 0046ac73: PUSH EBP
// 0046ac74: MOV EBP,ESP
// 0046ac76: SUB ESP,0x8
// 0046ac7c: MOV dword ptr [EBP + -0x4],0x0
//   XREF to: Stack[-0x14] (WRITE)
// 0046ac83: JMP 0x0046ac88
//   XREF to: 0046ac88 (UNCONDITIONAL_JUMP)
// 0046ac85: INC dword ptr [EBP + -0x4]
//   Label: LAB_0046ac85
//   XREF to: Stack[-0x14] (READ_WRITE)
// 0046ac88: MOV EAX,dword ptr [EBP + -0x4]
//   Label: LAB_0046ac88
//   XREF to: Stack[-0x14] (READ)
// 0046ac8b: CMP EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0046ac8e: JGE 0x0046aca6
//   XREF to: 0046aca6 (CONDITIONAL_JUMP)
// 0046ac90: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0046ac93: ADD EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0046ac96: CMP byte ptr [EAX],0xff
// 0046ac99: JZ 0x0046aca4
//   XREF to: 0046aca4 (CONDITIONAL_JUMP)
// 0046ac9b: MOV dword ptr [EBP + -0x8],0x1
//   XREF to: Stack[-0x18] (WRITE)
// 0046aca2: JMP 0x0046acad
//   XREF to: 0046acad (UNCONDITIONAL_JUMP)
// 0046aca4: JMP 0x0046ac85
//   Label: LAB_0046aca4
//   XREF to: 0046ac85 (UNCONDITIONAL_JUMP)
// 0046aca6: MOV dword ptr [EBP + -0x8],0x0
//   Label: LAB_0046aca6
//   XREF to: Stack[-0x18] (WRITE)
// 0046acad: MOV EAX,dword ptr [EBP + -0x8]
//   Label: LAB_0046acad
//   XREF to: Stack[-0x18] (READ)
// 0046acb0: MOV ESP,EBP
// 0046acb2: POP EBP
// 0046acb3: POP EDI
// 0046acb4: POP ESI
// 0046acb5: POP EBX
// 0046acb6: RET
