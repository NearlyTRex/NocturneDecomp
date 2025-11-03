// Name: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
// Address: 00477850
// Address Range: [[00477850, 0047788e]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850(CKeyFramedModel * this_ptr, CKeyFramedModelInstance * instance, int frame_index, int render_flags)
// Cross-references:
//   core_course.cpp_FUN_00443bc0 (00443bc0) at 00443f18 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20 (00478d20) at 00478d49 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047cddb [UNCONDITIONAL_CALL]
//   core_fire.cpp_CBulletTrail_render_FUN_004c21f0 (004c21f0) at 004c23ed [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c192b [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c62dd [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504580 [UNCONDITIONAL_CALL]
//   core_moon.cpp_CMoon_FUN_00529ed0 (00529ed0) at 00529fbf [UNCONDITIONAL_CALL]
//   core_moon.cpp_FUN_0052a2c0 (0052a2c0) at 0052a3c2 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_renderSceneGeometry_FUN_0056a190 (0056a190) at 0056a29f [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 0059795b [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
//   core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
          (CKeyFramedModel *this_ptr,CKeyFramedModelInstance *instance,int frame_index,
          int render_flags)

{
  CKeyFramedModelInstance *unaff_EDI;
  int in_stack_00000014;
  
  if (this_ptr->poly_count < 1) {
    return;
  }
  core_dmodel_cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0(this_ptr,instance,frame_index)
  ;
  core_dmodel_cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
            (this_ptr,render_flags,in_stack_00000014,unaff_EDI);
  return;
}


// Assembly code:
// 00477850: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_prepareForRender_FUN_00477850
// 00477851: PUSH EBP
// 00477852: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00477856: CMP dword ptr [EBX + 0x110],0x1
// 0047785d: JGE 0x00477862
//   XREF to: 00477862 (CONDITIONAL_JUMP)
// 0047785f: POP EBP
// 00477860: POP EBX
// 00477861: RET
// 00477862: PUSH EDI
//   Label: LAB_00477862
// 00477863: PUSH ESI
// 00477864: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00477868: PUSH ECX
// 00477869: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0047786d: PUSH ESI
// 0047786e: PUSH EBX
// 0047786f: CALL core_dmodel.cpp_CKeyFramedModel_rotateAndLightVertices_FUN_004778d0
//   XREF to: 004778d0 (UNCONDITIONAL_CALL)
// 00477874: ADD ESP,0xc
// 00477877: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0047787b: PUSH EDI
// 0047787c: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 00477880: PUSH EBP
// 00477881: PUSH EBX
// 00477882: CALL core_dmodel.cpp_CKeyFramedModel_submitToRenderer_FUN_00477980
//   XREF to: 00477980 (UNCONDITIONAL_CALL)
// 00477887: ADD ESP,0xc
// 0047788a: POP ESI
// 0047788b: POP EDI
// 0047788c: POP EBP
// 0047788d: POP EBX
// 0047788e: RET
