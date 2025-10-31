// Name: shape_meshlod.cpp_FUN_005165c0
// Address: 005165c0
// Address Range: [[005165c0, 00516614]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_005165c0()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516e10 (00516e10) at 00516f40 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920 (0051b920) at 0051ba7d [UNCONDITIONAL_CALL]
// Function calls:
//   shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_005165c0(void)

{
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  float *in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *in_stack_00000004) {
    iVar1 = 0;
    do {
      *(float *)(in_stack_00000004[1] + iVar1) =
           *in_stack_00000008 * *(float *)(in_stack_00000004[1] + iVar1);
      *(float *)(in_stack_00000004[1] + 4 + iVar1) =
           in_stack_00000008[1] * *(float *)(in_stack_00000004[1] + 4 + iVar1);
      iVar2 = iVar2 + 1;
      *(float *)(in_stack_00000004[1] + 8 + iVar1) =
           in_stack_00000008[2] * *(float *)(in_stack_00000004[1] + 8 + iVar1);
      iVar1 = iVar1 + 0x4c4;
    } while (iVar2 < *in_stack_00000004);
  }
  shape_meshlod_cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0();
  return;
}


// Assembly code:
// 005165c0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_005165c0
// 005165c1: PUSH ESI
// 005165c2: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005165c6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005165ca: MOV EBX,dword ptr [EDX]
// 005165cc: XOR ECX,ECX
// 005165ce: TEST EBX,EBX
// 005165d0: JLE 0x00516609
//   XREF to: 00516609 (CONDITIONAL_JUMP)
// 005165d2: PUSH EDI
// 005165d3: XOR EAX,EAX
// 005165d5: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_005165d5
// 005165d8: FLD float ptr [ESI]
// 005165da: FMUL float ptr [EBX + EAX*0x1]
// 005165dd: FSTP float ptr [EBX + EAX*0x1]
// 005165e0: MOV EBX,dword ptr [EDX + 0x4]
// 005165e3: FLD float ptr [ESI + 0x4]
// 005165e6: FMUL float ptr [EBX + EAX*0x1 + 0x4]
// 005165ea: FSTP float ptr [EBX + EAX*0x1 + 0x4]
// 005165ee: MOV EBX,dword ptr [EDX + 0x4]
// 005165f1: FLD float ptr [ESI + 0x8]
// 005165f4: FMUL float ptr [EBX + EAX*0x1 + 0x8]
// 005165f8: INC ECX
// 005165f9: FSTP float ptr [EBX + EAX*0x1 + 0x8]
// 005165fd: MOV EDI,dword ptr [EDX]
// 005165ff: ADD EAX,0x4c4
// 00516604: CMP ECX,EDI
// 00516606: JL 0x005165d5
//   XREF to: 005165d5 (CONDITIONAL_JUMP)
// 00516608: POP EDI
// 00516609: PUSH EDX
//   Label: LAB_00516609
// 0051660a: CALL shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0
//   XREF to: 005197c0 (UNCONDITIONAL_CALL)
// 0051660f: ADD ESP,0x4
// 00516612: POP ESI
// 00516613: POP EBX
// 00516614: RET
