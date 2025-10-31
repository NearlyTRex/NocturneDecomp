// Name: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
// Address: 0049d6c0
// Address Range: [[0049d6c0, 0049d8ef]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString * this_ptr)
// Cross-references:
//   shape_edittool.cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70 (0049fb70) at 0049fdce [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_showTextInputDialog_FUN_0049db10 (0049db10) at 0049df0a [UNCONDITIONAL_CALL]
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
//   shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
//   shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   wincore_winrun.cpp_clearKeypresses_FUN_005f2e70

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CInputString_handleKeyboardInput_FUN_0049d6c0(CInputString *this_ptr)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack0000000c;
  undefined4 uStack00000020;
  undefined4 uStack00000034;
  undefined4 uStack00000048;
  undefined4 uStack0000005c;
  undefined4 uStack00000070;
  undefined4 uStack00000090;
  undefined4 uStack000000d0;
  
  bVar1 = false;
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4b);
  if (iVar2 != 0) {
    bVar1 = true;
    if (0 < this_ptr->cursor_position) {
      this_ptr->cursor_position = this_ptr->cursor_position + -1;
    }
  }
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4d);
  if (iVar2 != 0) {
    bVar1 = true;
    if (this_ptr->cursor_position < this_ptr->current_length) {
      this_ptr->cursor_position = this_ptr->cursor_position + 1;
    }
  }
  uStack0000000c = 0x49d736;
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x47);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = 0;
  }
  uStack00000020 = 0x49d759;
  iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x4f);
  if (iVar2 != 0) {
    bVar1 = true;
    this_ptr->cursor_position = this_ptr->current_length;
  }
  uStack00000034 = 0x49d77d;
  iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar2 == 0) {
    uStack00000048 = 0x49d843;
    iVar2 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
    if (iVar2 == 0) {
      if (bVar1) {
        shape_edittool_cpp_CInputString_setSelectionToCursor_FUN_0049d460(this_ptr);
      }
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x53);
      if (iVar2 != 0) {
        iVar2 = this_ptr->cursor_position;
        if (iVar2 != this_ptr->selection_start) {
          shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
          return;
        }
        uStack00000070 = 0x49d8e8;
        shape_edittool_cpp_CInputString_deleteRange_FUN_0049d510(this_ptr,iVar2,iVar2 + 1);
        return;
      }
    }
    else {
      uStack0000005c = 0x49d857;
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x52);
      if (iVar2 != 0) {
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
        shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(this_ptr);
      }
      iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x53);
      if (iVar2 != 0) {
        uStack00000090 = 0x49d88a;
        shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
        shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
        return;
      }
    }
  }
  else {
    uStack00000048 = 0x49d796;
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2d);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x52);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2e);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_copySelectionToClipboard_FUN_0049d610(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x2f);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
      shape_edittool_cpp_CInputString_pasteFromClipboard_FUN_0049d660(this_ptr);
    }
    iVar2 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x53);
    if (iVar2 != 0) {
      shape_edittool_cpp_CInputString_deleteSelection_FUN_0049d580(this_ptr);
    }
    uStack000000d0 = 0x49d832;
    wincore_winrun_cpp_clearKeypresses_FUN_005f2e70();
  }
  return;
}


// Assembly code:
// 0049d6c0: PUSH EBX
//   Label: shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0
// 0049d6c1: PUSH ESI
// 0049d6c2: PUSH EDI
// 0049d6c3: PUSH EBP
// 0049d6c4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0049d6c8: PUSH 0x4b
// 0049d6ca: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d6cf: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d6d0: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d6d2: XOR ESI,ESI
// 0049d6d4: CALL dword ptr [EDX + 0x4]
// 0049d6d7: ADD ESP,0x8
// 0049d6da: TEST EAX,EAX
// 0049d6dc: JZ 0x0049d6f7
//   XREF to: 0049d6f7 (CONDITIONAL_JUMP)
// 0049d6de: MOV EDX,dword ptr [EBX + 0x134]
// 0049d6e4: MOV ESI,0x1
// 0049d6e9: TEST EDX,EDX
// 0049d6eb: JLE 0x0049d6f7
//   XREF to: 0049d6f7 (CONDITIONAL_JUMP)
// 0049d6ed: MOV ECX,EDX
// 0049d6ef: SUB ECX,ESI
// 0049d6f1: MOV dword ptr [EBX + 0x134],ECX
// 0049d6f7: PUSH 0x4d
//   Label: LAB_0049d6f7
// 0049d6f9: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d6fe: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d6ff: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d701: CALL dword ptr [EDX + 0x4]
// 0049d704: ADD ESP,0x8
// 0049d707: TEST EAX,EAX
// 0049d709: JZ 0x0049d729
//   XREF to: 0049d729 (CONDITIONAL_JUMP)
// 0049d70b: MOV EAX,dword ptr [EBX + 0x134]
// 0049d711: MOV EDI,dword ptr [EBX + 0x130]
// 0049d717: MOV ESI,0x1
// 0049d71c: CMP EAX,EDI
// 0049d71e: JGE 0x0049d729
//   XREF to: 0049d729 (CONDITIONAL_JUMP)
// 0049d720: LEA EBP,[EAX + ESI*0x1]
// 0049d723: MOV dword ptr [EBX + 0x134],EBP
// 0049d729: PUSH 0x47
//   Label: LAB_0049d729
// 0049d72b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d730: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d731: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d733: CALL dword ptr [EDX + 0x4]
// 0049d736: ADD ESP,0x8
// 0049d739: TEST EAX,EAX
// 0049d73b: JZ 0x0049d74c
//   XREF to: 0049d74c (CONDITIONAL_JUMP)
// 0049d73d: MOV ESI,0x1
// 0049d742: MOV dword ptr [EBX + 0x134],0x0
// 0049d74c: PUSH 0x4f
//   Label: LAB_0049d74c
// 0049d74e: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d753: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d754: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d756: CALL dword ptr [EDX + 0x4]
// 0049d759: ADD ESP,0x8
// 0049d75c: TEST EAX,EAX
// 0049d75e: JZ 0x0049d771
//   XREF to: 0049d771 (CONDITIONAL_JUMP)
// 0049d760: MOV EAX,dword ptr [EBX + 0x130]
// 0049d766: MOV ESI,0x1
// 0049d76b: MOV dword ptr [EBX + 0x134],EAX
// 0049d771: PUSH 0x1d
//   Label: LAB_0049d771
// 0049d773: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d778: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d779: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d77b: CALL dword ptr [EDX]
// 0049d77d: ADD ESP,0x8
// 0049d780: TEST EAX,EAX
// 0049d782: JZ 0x0049d837
//   XREF to: 0049d837 (CONDITIONAL_JUMP)
// 0049d788: PUSH 0x2d
// 0049d78a: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d790: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 0049d791: MOV EAX,dword ptr [ESI]
//   XREF to: 02dcd7d4 (READ)
// 0049d793: CALL dword ptr [EAX + 0x4]
// 0049d796: ADD ESP,0x8
// 0049d799: TEST EAX,EAX
// 0049d79b: JZ 0x0049d7af
//   XREF to: 0049d7af (CONDITIONAL_JUMP)
// 0049d79d: PUSH EBX
// 0049d79e: CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
//   XREF to: 0049d610 (UNCONDITIONAL_CALL)
// 0049d7a3: ADD ESP,0x4
// 0049d7a6: PUSH EBX
// 0049d7a7: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d7ac: ADD ESP,0x4
// 0049d7af: PUSH 0x52
//   Label: LAB_0049d7af
// 0049d7b1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d7b6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d7b7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d7b9: CALL dword ptr [EDX + 0x4]
// 0049d7bc: ADD ESP,0x8
// 0049d7bf: TEST EAX,EAX
// 0049d7c1: JZ 0x0049d7cc
//   XREF to: 0049d7cc (CONDITIONAL_JUMP)
// 0049d7c3: PUSH EBX
// 0049d7c4: CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
//   XREF to: 0049d610 (UNCONDITIONAL_CALL)
// 0049d7c9: ADD ESP,0x4
// 0049d7cc: PUSH 0x2e
//   Label: LAB_0049d7cc
// 0049d7ce: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d7d3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d7d4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d7d6: CALL dword ptr [EDX + 0x4]
// 0049d7d9: ADD ESP,0x8
// 0049d7dc: TEST EAX,EAX
// 0049d7de: JZ 0x0049d7e9
//   XREF to: 0049d7e9 (CONDITIONAL_JUMP)
// 0049d7e0: PUSH EBX
// 0049d7e1: CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
//   XREF to: 0049d610 (UNCONDITIONAL_CALL)
// 0049d7e6: ADD ESP,0x4
// 0049d7e9: PUSH 0x2f
//   Label: LAB_0049d7e9
// 0049d7eb: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d7f0: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d7f1: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d7f3: CALL dword ptr [ESI + 0x4]
// 0049d7f6: ADD ESP,0x8
// 0049d7f9: TEST EAX,EAX
// 0049d7fb: JZ 0x0049d80f
//   XREF to: 0049d80f (CONDITIONAL_JUMP)
// 0049d7fd: PUSH EBX
// 0049d7fe: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d803: ADD ESP,0x4
// 0049d806: PUSH EBX
// 0049d807: CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
//   XREF to: 0049d660 (UNCONDITIONAL_CALL)
// 0049d80c: ADD ESP,0x4
// 0049d80f: PUSH 0x53
//   Label: LAB_0049d80f
// 0049d811: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d817: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 0049d818: MOV EAX,dword ptr [ESI]
//   XREF to: 02dcd7d4 (READ)
// 0049d81a: CALL dword ptr [EAX + 0x4]
// 0049d81d: ADD ESP,0x8
// 0049d820: TEST EAX,EAX
// 0049d822: JZ 0x0049d82d
//   XREF to: 0049d82d (CONDITIONAL_JUMP)
// 0049d824: PUSH EBX
// 0049d825: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d82a: ADD ESP,0x4
// 0049d82d: CALL wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
//   Label: LAB_0049d82d
//   XREF to: 005f2e70 (UNCONDITIONAL_CALL)
// 0049d832: POP EBP
//   Label: LAB_0049d832
// 0049d833: POP EDI
// 0049d834: POP ESI
// 0049d835: POP EBX
// 0049d836: RET
// 0049d837: PUSH 0x2a
//   Label: LAB_0049d837
// 0049d839: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d83e: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d83f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d841: CALL dword ptr [EDX]
// 0049d843: ADD ESP,0x8
// 0049d846: TEST EAX,EAX
// 0049d848: JZ 0x0049d89b
//   XREF to: 0049d89b (CONDITIONAL_JUMP)
// 0049d84a: PUSH 0x52
// 0049d84c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d851: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d852: MOV ESI,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d854: CALL dword ptr [ESI + 0x4]
// 0049d857: ADD ESP,0x8
// 0049d85a: TEST EAX,EAX
// 0049d85c: JZ 0x0049d870
//   XREF to: 0049d870 (CONDITIONAL_JUMP)
// 0049d85e: PUSH EBX
// 0049d85f: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d864: ADD ESP,0x4
// 0049d867: PUSH EBX
// 0049d868: CALL shape_edittool.cpp_CInputString_pasteFromClipboard_FUN_0049d660
//   XREF to: 0049d660 (UNCONDITIONAL_CALL)
// 0049d86d: ADD ESP,0x4
// 0049d870: PUSH 0x53
//   Label: LAB_0049d870
// 0049d872: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d877: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0049d878: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0049d87a: CALL dword ptr [EDX + 0x4]
// 0049d87d: ADD ESP,0x8
// 0049d880: TEST EAX,EAX
// 0049d882: JZ 0x0049d832
//   XREF to: 0049d832 (CONDITIONAL_JUMP)
// 0049d884: PUSH EBX
// 0049d885: CALL shape_edittool.cpp_CInputString_copySelectionToClipboard_FUN_0049d610
//   XREF to: 0049d610 (UNCONDITIONAL_CALL)
// 0049d88a: ADD ESP,0x4
// 0049d88d: PUSH EBX
// 0049d88e: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d893: ADD ESP,0x4
// 0049d896: POP EBP
// 0049d897: POP EDI
// 0049d898: POP ESI
// 0049d899: POP EBX
// 0049d89a: RET
// 0049d89b: TEST ESI,ESI
//   Label: LAB_0049d89b
// 0049d89d: JZ 0x0049d8a8
//   XREF to: 0049d8a8 (CONDITIONAL_JUMP)
// 0049d89f: PUSH EBX
// 0049d8a0: CALL shape_edittool.cpp_CInputString_setSelectionToCursor_FUN_0049d460
//   XREF to: 0049d460 (UNCONDITIONAL_CALL)
// 0049d8a5: ADD ESP,0x4
// 0049d8a8: PUSH 0x53
//   Label: LAB_0049d8a8
// 0049d8aa: MOV ESI,dword ptr [0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0049d8b0: PUSH ESI
//   XREF to: 02dcd7d4 (DATA)
// 0049d8b1: MOV EAX,dword ptr [ESI]
//   XREF to: 02dcd7d4 (READ)
// 0049d8b3: CALL dword ptr [EAX + 0x4]
// 0049d8b6: ADD ESP,0x8
// 0049d8b9: TEST EAX,EAX
// 0049d8bb: JZ 0x0049d832
//   XREF to: 0049d832 (CONDITIONAL_JUMP)
// 0049d8c1: MOV EDX,dword ptr [EBX + 0x134]
// 0049d8c7: CMP EDX,dword ptr [EBX + 0x138]
// 0049d8cd: JZ 0x0049d8dd
//   XREF to: 0049d8dd (CONDITIONAL_JUMP)
// 0049d8cf: PUSH EBX
// 0049d8d0: CALL shape_edittool.cpp_CInputString_deleteSelection_FUN_0049d580
//   XREF to: 0049d580 (UNCONDITIONAL_CALL)
// 0049d8d5: ADD ESP,0x4
// 0049d8d8: POP EBP
// 0049d8d9: POP EDI
// 0049d8da: POP ESI
// 0049d8db: POP EBX
// 0049d8dc: RET
// 0049d8dd: LEA EAX,[EDX + 0x1]
//   Label: LAB_0049d8dd
// 0049d8e0: PUSH EAX
// 0049d8e1: PUSH EDX
// 0049d8e2: PUSH EBX
// 0049d8e3: CALL shape_edittool.cpp_CInputString_deleteRange_FUN_0049d510
//   XREF to: 0049d510 (UNCONDITIONAL_CALL)
// 0049d8e8: ADD ESP,0xc
// 0049d8eb: POP EBP
// 0049d8ec: POP EDI
// 0049d8ed: POP ESI
// 0049d8ee: POP EBX
// 0049d8ef: RET
