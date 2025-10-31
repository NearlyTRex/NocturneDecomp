// Name: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// Address: 004807d0
// Address Range: [[004807d0, 004809dc]]
// Convention: __cdecl
// Signature: int core_door.cpp_CDoor_renderOpaque_FUN_004807d0(CDoor * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
//   undefined4 DAT_02f33768
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408f10
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_door.cpp_CDoor_reposition_FUN_0047fd20
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0

#include "nocturne.h"

int __cdecl core_door_cpp_CDoor_renderOpaque_FUN_004807d0(CDoor *this_ptr)

{
  CDoor *this_ptr_00;
  CBoundingBox3D *pCVar1;
  int iVar2;
  int iVar3;
  CQuaternion4f *pCVar4;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float in_stack_00000010;
  float fStack_50;
  int in_stack_ffffffd4;
  int in_stack_ffffffd8;
  float in_stack_ffffffdc;
  float in_stack_ffffffe8;
  
  if (2 < this_ptr->one_shot) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  pCVar1 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffa8);
  fStack_50 = 6.615051e-39;
  iVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(pCVar1);
  if (iVar2 != 0) {
    if (this_ptr->plot_as_box_in_shadow != 0) {
      iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
      if (iVar3 != 0) {
        pCVar1 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                           (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffdc);
        core_box_cpp_CBoundingBox3D_render_FUN_004210b0
                  (pCVar1,in_stack_ffffffd4,in_stack_ffffffd8,(int)in_stack_ffffffdc);
        goto LAB_0048085a;
      }
    }
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,0.0,-1);
  }
LAB_0048085a:
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  if ((iVar2 != 0) && (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0)) {
    iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar3 == 0) &&
       (this_ptr_00 = *(CDoor **)(g_CDemonMissionPtr->field2_0xc + 0x1c), this_ptr == this_ptr_00))
    {
      if (0.0 < this_ptr_00->param) {
        this_ptr_00->param = 0.0;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr_00);
        core_actor_cpp_renderActorBoundingBox_FUN_0040d940(&this_ptr_00->base_actor,2);
      }
      if (in_stack_ffffffe8 < this_ptr->max_param) {
        this_ptr->param = this_ptr->max_param;
        core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
        core_actor_cpp_renderActorBoundingBox_FUN_0040d940(&this_ptr->base_actor,1);
      }
      this_ptr->param = 0.0;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
      g_ActiveRenderColor = 2;
      pCVar4 = (CQuaternion4f *)core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,(int)unaff_EBP);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
      this_ptr->param = this_ptr->max_param;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
      g_ActiveRenderColor = 1;
      pCVar4 = (CQuaternion4f *)core_actor_cpp_CDemonActor_FUN_00408f10(&this_ptr->base_actor);
      shape_edittool_cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
                (g_CEditorToolsPtr,pCVar4,(int)this_ptr);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
      this_ptr->param = in_stack_00000010;
      core_door_cpp_CDoor_reposition_FUN_0047fd20(this_ptr);
    }
  }
  return iVar2;
}


// Assembly code:
// 004807d0: PUSH EBX
//   Label: core_door.cpp_CDoor_renderOpaque_FUN_004807d0
// 004807d1: PUSH ESI
// 004807d2: PUSH EDI
// 004807d3: PUSH EBP
// 004807d4: MOV EBP,ESP
// 004807d6: SUB ESP,0x4c
// 004807d9: AND ESP,0xfffffff8
// 004807dc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004807df: CMP dword ptr [EBX + 0x9c8],0x2
// 004807e6: JLE 0x004807f1
//   XREF to: 004807f1 (CONDITIONAL_JUMP)
// 004807e8: XOR EAX,EAX
// 004807ea: MOV ESP,EBP
// 004807ec: POP EBP
// 004807ed: POP EDI
// 004807ee: POP ESI
// 004807ef: POP EBX
// 004807f0: RET
// 004807f1: PUSH EBX
//   Label: LAB_004807f1
// 004807f2: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004807f7: ADD ESP,0x4
// 004807fa: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 004807fe: PUSH ESI
// 004807ff: MOV EAX,dword ptr [EBX + 0x154]
// 00480805: PUSH EBX
// 00480806: CALL dword ptr [EAX + 0x14]
// 00480809: ADD ESP,0x8
// 0048080c: PUSH EAX
// 0048080d: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00480812: ADD ESP,0x4
// 00480815: MOV EDI,EAX
// 00480817: TEST EAX,EAX
// 00480819: JZ 0x0048085a
//   XREF to: 0048085a (CONDITIONAL_JUMP)
// 0048081b: CMP dword ptr [EBX + 0x9d4],0x0
// 00480822: JZ 0x004809c5
//   XREF to: 004809c5 (CONDITIONAL_JUMP)
// 00480828: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0048082e: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 0048082f: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00480834: ADD ESP,0x4
// 00480837: TEST EAX,EAX
// 00480839: JZ 0x004809c5
//   XREF to: 004809c5 (CONDITIONAL_JUMP)
// 0048083f: LEA EAX,[ESP + 0x1c]
// 00480843: PUSH EAX
// 00480844: MOV ESI,dword ptr [EBX + 0x154]
// 0048084a: PUSH EBX
// 0048084b: CALL dword ptr [ESI + 0x14]
// 0048084e: ADD ESP,0x8
// 00480851: PUSH EAX
// 00480852: CALL core_box.cpp_CBoundingBox3D_render_FUN_004210b0
//   XREF to: 004210b0 (UNCONDITIONAL_CALL)
// 00480857: ADD ESP,0x4
// 0048085a: PUSH EBX
//   Label: LAB_0048085a
// 0048085b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00480860: ADD ESP,0x4
// 00480863: TEST EDI,EDI
// 00480865: JZ 0x004809bc
//   XREF to: 004809bc (CONDITIONAL_JUMP)
// 0048086b: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 00480870: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 00480874: JZ 0x004809bc
//   XREF to: 004809bc (CONDITIONAL_JUMP)
// 0048087a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00480880: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00480881: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 00480886: ADD ESP,0x4
// 00480889: TEST EAX,EAX
// 0048088b: JNZ 0x004809bc
//   XREF to: 004809bc (CONDITIONAL_JUMP)
// 00480891: MOV EAX,[0x0067d550]
//   XREF to: 0067d550 (READ)
// 00480896: MOV ESI,dword ptr [EAX + 0x28]
//   XREF to: 02f33768 (READ)
// 00480899: CMP EBX,ESI
// 0048089b: JNZ 0x004809bc
//   XREF to: 004809bc (CONDITIONAL_JUMP)
// 004808a1: MOV EAX,dword ptr [ESI + 0x9ac]
// 004808a7: MOV dword ptr [ESP],EAX
// 004808aa: FLD float ptr [ESP]
// 004808ad: FLDZ
// 004808af: FCOMPP
// 004808b1: FNSTSW AX
// 004808b3: SAHF
// 004808b4: JNC 0x004808d4
//   XREF to: 004808d4 (CONDITIONAL_JUMP)
// 004808b6: PUSH ESI
// 004808b7: MOV dword ptr [ESI + 0x9ac],0x0
// 004808c1: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004808c6: ADD ESP,0x4
// 004808c9: PUSH 0x2
// 004808cb: PUSH ESI
// 004808cc: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 004808d1: ADD ESP,0x8
// 004808d4: FLD float ptr [ESP]
//   Label: LAB_004808d4
// 004808d7: FCOMP float ptr [EBX + 0x9b0]
// 004808dd: FNSTSW AX
// 004808df: SAHF
// 004808e0: JNC 0x00480902
//   XREF to: 00480902 (CONDITIONAL_JUMP)
// 004808e2: FLD float ptr [EBX + 0x9b0]
// 004808e8: PUSH EBX
// 004808e9: FSTP float ptr [EBX + 0x9ac]
// 004808ef: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004808f4: ADD ESP,0x4
// 004808f7: PUSH 0x1
// 004808f9: PUSH EBX
// 004808fa: CALL core_actor.cpp_renderActorBoundingBox_FUN_0040d940
//   XREF to: 0040d940 (UNCONDITIONAL_CALL)
// 004808ff: ADD ESP,0x8
// 00480902: PUSH EBX
//   Label: LAB_00480902
// 00480903: MOV dword ptr [EBX + 0x9ac],0x0
// 0048090d: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 00480912: ADD ESP,0x4
// 00480915: PUSH EBX
// 00480916: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0048091b: ADD ESP,0x4
// 0048091e: MOV EAX,0x2
// 00480923: PUSH EAX
// 00480924: LEA ESI,[EBX + 0x9bc]
// 0048092a: PUSH ESI
// 0048092b: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 00480930: LEA EAX,[ESP + 0x3c]
// 00480934: PUSH EAX
// 00480935: PUSH EBX
// 00480936: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0048093b: ADD ESP,0xc
// 0048093e: PUSH EAX
// 0048093f: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00480945: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00480946: CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
//   XREF to: 004a28a0 (UNCONDITIONAL_CALL)
// 0048094b: ADD ESP,0xc
// 0048094e: PUSH EBX
// 0048094f: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00480954: ADD ESP,0x4
// 00480957: FLD float ptr [EBX + 0x9b0]
// 0048095d: PUSH EBX
// 0048095e: FSTP float ptr [EBX + 0x9ac]
// 00480964: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 00480969: ADD ESP,0x4
// 0048096c: PUSH EBX
// 0048096d: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00480972: ADD ESP,0x4
// 00480975: PUSH 0x2
// 00480977: PUSH ESI
// 00480978: LEA EAX,[ESP + 0x48]
// 0048097c: PUSH EAX
// 0048097d: MOV ECX,0x1
// 00480982: PUSH EBX
// 00480983: MOV dword ptr [0x02d02570],ECX
//   XREF to: 02d02570 (WRITE)
// 00480989: CALL core_actor.cpp_CDemonActor_FUN_00408f10
//   XREF to: 00408f10 (UNCONDITIONAL_CALL)
// 0048098e: ADD ESP,0xc
// 00480991: PUSH EAX
// 00480992: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00480998: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00480999: CALL shape_edittool.cpp_CEditorTools_draw3DProjectedLine_FUN_004a28a0
//   XREF to: 004a28a0 (UNCONDITIONAL_CALL)
// 0048099e: ADD ESP,0xc
// 004809a1: PUSH EBX
// 004809a2: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004809a7: ADD ESP,0x4
// 004809aa: MOV EAX,dword ptr [ESP]
// 004809ad: PUSH EBX
// 004809ae: MOV dword ptr [EBX + 0x9ac],EAX
// 004809b4: CALL core_door.cpp_CDoor_reposition_FUN_0047fd20
//   XREF to: 0047fd20 (UNCONDITIONAL_CALL)
// 004809b9: ADD ESP,0x4
// 004809bc: MOV EAX,EDI
//   Label: LAB_004809bc
// 004809be: MOV ESP,EBP
// 004809c0: POP EBP
// 004809c1: POP EDI
// 004809c2: POP ESI
// 004809c3: POP EBX
// 004809c4: RET
// 004809c5: PUSH -0x1
//   Label: LAB_004809c5
// 004809c7: LEA EAX,[EBX + 0x158]
// 004809cd: PUSH 0x0
// 004809cf: PUSH EAX
// 004809d0: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004809d5: ADD ESP,0xc
// 004809d8: JMP 0x0048085a
//   XREF to: 0048085a (UNCONDITIONAL_JUMP)
