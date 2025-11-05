// Name: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
// Address: 005a03b0
// Address Range: [[005a03b0, 005a0401]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c292 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ee91
//   TerminatedCString s_CDeformableModelInstance_0064eea6
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
          (CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  int unaff_EBX;
  
  if (this_ptr->cached_skinned_lod_index < 0) {
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xd33;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::outlinePolygons called but LOD is not set!");
  }
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderWireframe_FUN_0059b5a0(this_ptr_00,unaff_EBX);
  return;
}


// Assembly code:
// 005a03b0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0
// 005a03b1: PUSH EDI
// 005a03b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a03b6: CMP dword ptr [EBX + 0x2230],0x0
// 005a03bd: JL 0x005a03db
//   XREF to: 005a03db (CONDITIONAL_JUMP)
// 005a03bf: MOV EDI,dword ptr [EBX + 0x2230]
//   Label: LAB_005a03bf
// 005a03c5: PUSH EDI
// 005a03c6: PUSH EBX
// 005a03c7: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005a03cc: ADD ESP,0x4
// 005a03cf: PUSH EAX
// 005a03d0: CALL core_skeleton.cpp_CDeformableModel_renderWireframe_FUN_0059b5a0
//   XREF to: 0059b5a0 (UNCONDITIONAL_CALL)
// 005a03d5: ADD ESP,0x8
// 005a03d8: POP EDI
// 005a03d9: POP EBX
// 005a03da: RET
// 005a03db: PUSH ESI
//   Label: LAB_005a03db
// 005a03dc: MOV ECX,0x64ee91
//   XREF to: 0064ee91 (PARAM)
// 005a03e1: MOV ESI,0xd33
// 005a03e6: PUSH 0x64eea6
//   XREF to: 0064eea6 (DATA)
// 005a03eb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a03f1: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a03f7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a03fc: ADD ESP,0x4
// 005a03ff: POP ESI
// 005a0400: JMP 0x005a03bf
//   XREF to: 005a03bf (UNCONDITIONAL_JUMP)
