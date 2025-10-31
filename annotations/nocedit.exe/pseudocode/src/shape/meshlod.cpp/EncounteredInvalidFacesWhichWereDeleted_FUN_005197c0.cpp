// Name: shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0
// Address: 005197c0
// Address Range: [[005197c0, 00519821]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516570 (00516570) at 005165b5 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_005165c0 (005165c0) at 0051660a [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051b330 (0051b330) at 0051b3b5 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_WARNING_encountered_d_in_00637a16
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_meshlod.cpp_FUN_00519830

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted(undefined4
   param_1) */

void shape_meshlod_cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  
  iVar4 = 0;
  iVar3 = 0;
  if (0 < *(int *)(in_stack_00000004 + 8)) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(in_stack_00000004 + 0xc) + iVar2 + 0x40) == 0) {
        iVar1 = shape_meshlod_cpp_FUN_00519830();
        if (iVar1 == 0) {
          iVar3 = iVar3 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0x8c;
    } while (iVar4 < *(int *)(in_stack_00000004 + 8));
  }
  if (iVar3 < 1) {
    return;
  }
  shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
            (g_CEditorToolsPtr,"WARNING - encountered %d invalid faces, which were deleted!",iVar3);
  return;
}


// Assembly code:
// 005197c0: PUSH EBX
//   Label: shape_meshlod.cpp_EncounteredInvalidFacesWhichWereDeleted_FUN_005197c0
// 005197c1: PUSH ESI
// 005197c2: PUSH EDI
// 005197c3: PUSH EBP
// 005197c4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005197c8: MOV EDX,dword ptr [EDI + 0x8]
// 005197cb: XOR ESI,ESI
// 005197cd: XOR EBP,EBP
// 005197cf: TEST EDX,EDX
// 005197d1: JLE 0x005197ee
//   XREF to: 005197ee (CONDITIONAL_JUMP)
// 005197d3: XOR EBX,EBX
// 005197d5: MOV EAX,dword ptr [EDI + 0xc]
//   Label: LAB_005197d5
// 005197d8: ADD EAX,EBX
// 005197da: CMP dword ptr [EAX + 0x40],0x0
// 005197de: JZ 0x005197f7
//   XREF to: 005197f7 (CONDITIONAL_JUMP)
// 005197e0: INC ESI
//   Label: LAB_005197e0
// 005197e1: MOV ECX,dword ptr [EDI + 0x8]
// 005197e4: ADD EBX,0x8c
// 005197ea: CMP ESI,ECX
// 005197ec: JL 0x005197d5
//   XREF to: 005197d5 (CONDITIONAL_JUMP)
// 005197ee: TEST EBP,EBP
//   Label: LAB_005197ee
// 005197f0: JG 0x00519808
//   XREF to: 00519808 (CONDITIONAL_JUMP)
// 005197f2: POP EBP
// 005197f3: POP EDI
// 005197f4: POP ESI
// 005197f5: POP EBX
// 005197f6: RET
// 005197f7: PUSH EAX
//   Label: LAB_005197f7
// 005197f8: PUSH EDI
// 005197f9: CALL shape_meshlod.cpp_FUN_00519830
//   XREF to: 00519830 (UNCONDITIONAL_CALL)
// 005197fe: ADD ESP,0x8
// 00519801: TEST EAX,EAX
// 00519803: JNZ 0x005197e0
//   XREF to: 005197e0 (CONDITIONAL_JUMP)
// 00519805: INC EBP
// 00519806: JMP 0x005197e0
//   XREF to: 005197e0 (UNCONDITIONAL_JUMP)
// 00519808: PUSH EBP
//   Label: LAB_00519808
// 00519809: PUSH 0x637a16
//   XREF to: 00637a16 (DATA)
// 0051980e: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00519814: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00519815: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0051981a: ADD ESP,0xc
// 0051981d: POP EBP
// 0051981e: POP EDI
// 0051981f: POP ESI
// 00519820: POP EBX
// 00519821: RET
