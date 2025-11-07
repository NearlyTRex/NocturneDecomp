// Name: shape_meshlod.cpp_FUN_0051a980
// Address: 0051a980
// Address Range: [[0051a980, 0051a9c0]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051a980()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_00517630 (00517630) at 005180e5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_FUN_00518490 (00518490) at 00518506 [UNCONDITIONAL_CALL]

#include "nocturne.h"

undefined8 shape_meshlod_cpp_FUN_0051a980(void)

{
  int iVar1;
  int *piVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  piVar2 = (int *)(*(int *)(in_stack_00000004 + 0x48) +
                  *(int *)(in_stack_00000008 * 0x4c4 + *(int *)(in_stack_00000004 + 4) + 0x3fc +
                          in_stack_0000000c * 4) * 0xf0);
  iVar1 = *piVar2;
  if (iVar1 == in_stack_00000008) {
    iVar1 = piVar2[1];
  }
  return CONCAT44(piVar2,iVar1);
}


// Assembly code:
// 0051a980: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051a980
// 0051a981: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0051a985: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0051a989: IMUL EDX,EBX,0x4c4
// 0051a98f: MOV EAX,dword ptr [ECX + 0x4]
// 0051a992: ADD EDX,EAX
// 0051a994: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0051a998: MOV EAX,dword ptr [EDX + EAX*0x4 + 0x3fc]
// 0051a99f: SHL EAX,0x4
// 0051a9a2: MOV EDX,EAX
// 0051a9a4: SHL EAX,0x4
// 0051a9a7: SUB EAX,EDX
// 0051a9a9: MOV EDX,dword ptr [ECX + 0x48]
// 0051a9ac: ADD EDX,EAX
// 0051a9ae: MOV EAX,dword ptr [EDX]
// 0051a9b0: CMP EAX,EBX
// 0051a9b2: JNZ 0x0051a9b7
//   XREF to: 0051a9b7 (CONDITIONAL_JUMP)
// 0051a9b4: MOV EAX,dword ptr [EDX + 0x4]
// 0051a9b7: POP EBX
//   Label: LAB_0051a9b7
// 0051a9b8: LEA EAX,[EAX]
// 0051a9be: MOV EDX,EDX
// 0051a9c0: RET
