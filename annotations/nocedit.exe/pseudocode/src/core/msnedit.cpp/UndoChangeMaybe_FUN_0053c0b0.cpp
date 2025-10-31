// Name: core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0
// Address: 0053c0b0
// Address Range: [[0053c0b0, 0053c135]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 00539cb3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_msnedit_cpp_0063c7eb
//   TerminatedCString s_rt_0063c7ff
//   TerminatedCString s_Can_t_open_s_0063c802
//   TerminatedCString s_core_msnedit_cpp_0063c811
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   TerminatedCString s_UNDO_TMP_00680800
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_0040b050
//   core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_UndoChangeMaybe(undefined4 param_1) */

void core_msnedit_cpp_UndoChangeMaybe_FUN_0053c0b0(void)

{
  FILE *file_ptr;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x28) == 0) {
    return;
  }
  core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0();
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("$$UNDO$$.TMP",(char *)0x0,"rt","..\\core\\msnedit.cpp",
                        0x9ca);
  if (file_ptr == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s.","$$UNDO$$.TMP");
    return;
  }
  core_actor_cpp_CDemonActor_FUN_0040b050(*(CDemonActor **)(in_stack_00000004 + 0x28));
  (*(code *)**(undefined4 **)(*(int *)(in_stack_00000004 + 0x28) + 0x154))();
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x9d1);
  return;
}


// Assembly code:
// 0053c0b0: PUSH EBX
//   Label: core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0
// 0053c0b1: PUSH ESI
// 0053c0b2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053c0b6: CMP dword ptr [ESI + 0x28],0x0
// 0053c0ba: JNZ 0x0053c0bf
//   XREF to: 0053c0bf (CONDITIONAL_JUMP)
// 0053c0bc: POP ESI
// 0053c0bd: POP EBX
// 0053c0be: RET
// 0053c0bf: CALL core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
//   Label: LAB_0053c0bf
//   XREF to: 0040c7c0 (UNCONDITIONAL_CALL)
// 0053c0c4: PUSH 0x9ca
// 0053c0c9: PUSH 0x63c7eb
//   XREF to: 0063c7eb (DATA)
// 0053c0ce: PUSH 0x63c7ff
//   XREF to: 0063c7ff (DATA)
// 0053c0d3: PUSH 0x0
// 0053c0d5: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053c0da: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0053c0df: MOV EBX,EAX
// 0053c0e1: ADD ESP,0x14
// 0053c0e4: TEST EAX,EAX
// 0053c0e6: JNZ 0x0053c104
//   XREF to: 0053c104 (CONDITIONAL_JUMP)
// 0053c0e8: PUSH 0x680800
//   XREF to: 00680800 (DATA)
// 0053c0ed: PUSH 0x63c802
//   XREF to: 0063c802 (DATA)
// 0053c0f2: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0053c0f8: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0053c0f9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0053c0fe: ADD ESP,0xc
// 0053c101: POP ESI
// 0053c102: POP EBX
// 0053c103: RET
// 0053c104: PUSH EAX
//   Label: LAB_0053c104
// 0053c105: MOV ECX,dword ptr [ESI + 0x28]
// 0053c108: PUSH ECX
// 0053c109: CALL core_actor.cpp_CDemonActor_FUN_0040b050
//   XREF to: 0040b050 (UNCONDITIONAL_CALL)
// 0053c10e: ADD ESP,0x8
// 0053c111: MOV EAX,dword ptr [ESI + 0x28]
// 0053c114: PUSH EAX
// 0053c115: MOV ESI,dword ptr [EAX + 0x154]
// 0053c11b: CALL dword ptr [ESI]
// 0053c11d: ADD ESP,0x4
// 0053c120: PUSH 0x9d1
// 0053c125: PUSH 0x63c811
//   XREF to: 0063c811 (DATA)
// 0053c12a: PUSH EBX
// 0053c12b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0053c130: ADD ESP,0xc
// 0053c133: POP ESI
// 0053c134: POP EBX
// 0053c135: RET
