// Name: core_skeleton.cpp_CDeformableModel_FUN_0059b640
// Address: 0059b640
// Address Range: [[0059b640, 0059b7d8] [0059b7f0, 0059b7f7]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FUN_0059b640()
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtr1_FUN_005a17b0 (005a17b0) at 005a17d0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00662e98
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CDemonRenderer g_CDemonRendererInstance
//   CEditorTools g_CEditorToolsPtr
//   int g_ActiveRenderColor
// Function calls:
//   core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FUN_0059b640(undefined4 param_1,
   undefined4 param_2, undefined4 param_3, undefined1 param_4) */

void core_skeleton_cpp_CDeformableModel_FUN_0059b640(void)

{
  SRenderVertex *pSVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  SRenderVertex *pSVar6;
  undefined4 *puVar7;
  CVector3f *output_vector;
  int *piVar8;
  undefined4 *puVar9;
  byte bVar10;
  int in_stack_0000000c;
  CVector3f *in_stack_00000010;
  byte in_stack_00000014;
  SRenderVertex *in_stack_ffffff58;
  SRenderVertex *in_stack_ffffff5c;
  int aiStack_78 [7];
  undefined4 uStack_5c;
  undefined4 uStack_58;
  CMatrix3x3f CStack_3c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
  iVar2 = core_skeleton_cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810();
  if ((in_stack_00000014 & 1) != 0) {
    iVar5 = 0;
    output_vector = in_stack_00000010;
    if (0 < *(int *)(iVar2 + 0x28558)) {
      do {
        local_18 = iVar5 * 0x30;
        uStack_5c = 0x59b68d;
        core_xform_cpp_getTranslation_FUN_005f6110(output_vector,(CMatrix3x4f *)(CStack_3c.m + 2));
        iVar5 = iVar5 + 1;
        uStack_58 = 0x59b6d1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)
                   ((int)&(g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).transformed_x +
                   (int)CStack_3c.m[2].z),(CVector3i *)&stack0xffffffb4);
        output_vector = output_vector + 4;
      } while (iVar5 < *(int *)(iVar2 + 0x28558));
    }
    iVar5 = 0;
    g_ActiveRenderColor = in_stack_0000000c;
    if (0 < *(int *)(iVar2 + 0x28558)) {
      iVar4 = 0;
      local_14 = iVar2;
      do {
        if (-1 < *(int *)(local_14 + 0x2857c)) {
          pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
          pSVar6 = pSVar1 + *(int *)(local_14 + 0x2857c);
          piVar8 = aiStack_78;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *piVar8 = (pSVar6->projected_vertex).transformed_x;
            pSVar6 = (SRenderVertex *)((int)pSVar6 + ((uint)bVar10 * -2 + 1) * 4);
            piVar8 = piVar8 + (uint)bVar10 * -2 + 1;
          }
          puVar7 = (undefined4 *)((int)&(pSVar1->projected_vertex).transformed_x + iVar4);
          puVar9 = (undefined4 *)&stack0xffffff58;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar9 = *puVar7;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
            puVar9 = puVar9 + (uint)bVar10 * -2 + 1;
          }
          engine_3d_c_clipAndDrawLine2D_FUN_00407d70(in_stack_ffffff58,in_stack_ffffff5c);
        }
        iVar4 = iVar4 + 0x30;
        local_14 = local_14 + 0x24;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(iVar2 + 0x28558));
    }
  }
  if (((in_stack_00000014 & 2) != 0) && (iVar5 = 0, 0 < *(int *)(iVar2 + 0x28558))) {
    do {
      core_xform_cpp_matrixToEulerAngles_FUN_005f5690(in_stack_00000010,&CStack_3c);
      core_xform_cpp_getTranslation_FUN_005f6110(in_stack_00000010,(CMatrix3x4f *)&CStack_3c.m[1].y)
      ;
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,(CVector3i *)&CStack_3c.m[0].z,(CVector3i *)&CStack_3c.m[1].z);
      shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0(g_CEditorToolsPtr,0.5,0xff);
      CStack_3c.m[0].x = (float)g_CDemonRendererPtr;
      iVar5 = iVar5 + 1;
      in_stack_00000010 = in_stack_00000010 + 4;
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    } while (iVar5 < *(int *)(iVar2 + 0x28558));
  }
  return;
}


// Assembly code:
// 0059b640: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FUN_0059b640
// 0059b641: PUSH ESI
// 0059b642: PUSH EDI
// 0059b643: PUSH EBP
// 0059b644: SUB ESP,0x3c
// 0059b647: MOV EDX,dword ptr [ESP + 0x50]
// 0059b64b: PUSH EDX
// 0059b64c: CALL core_skeleton.cpp_CDeformableModel_SkeletonPtrNotSet_FUN_0059a810
//   XREF to: 0059a810 (UNCONDITIONAL_CALL)
// 0059b651: ADD ESP,0x4
// 0059b654: MOV DL,byte ptr [ESP + 0x5c]
// 0059b658: MOV EBP,EAX
// 0059b65a: TEST DL,0x1
// 0059b65d: JZ 0x0059b75d
//   XREF to: 0059b75d (CONDITIONAL_JUMP)
// 0059b663: MOV ECX,dword ptr [EAX + 0x28558]
// 0059b669: XOR ESI,ESI
// 0059b66b: TEST ECX,ECX
// 0059b66d: JLE 0x0059b6e0
//   XREF to: 0059b6e0 (CONDITIONAL_JUMP)
// 0059b673: MOV EDI,dword ptr [ESP + 0x58]
// 0059b677: LEA EAX,[ESP + 0x24]
//   Label: LAB_0059b677
// 0059b67b: PUSH EAX
// 0059b67c: IMUL EAX,ESI,0x30
// 0059b67f: PUSH EDI
// 0059b680: LEA EBX,[ESP + 0x8]
// 0059b684: MOV dword ptr [ESP + 0x38],EAX
// 0059b688: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 0059b68d: ADD ESP,0x8
// 0059b690: LEA EAX,[ESP + 0x24]
// 0059b694: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059b69a: FLD float ptr [EAX]
// 0059b69c: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b6a2: FISTP dword ptr [EBX]
// 0059b6a4: FLD float ptr [EAX + 0x4]
// 0059b6a7: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b6ad: FISTP dword ptr [EBX + 0x4]
// 0059b6b0: FLD float ptr [EAX + 0x8]
// 0059b6b3: FMUL float ptr [0x00662e98]
//   XREF to: 00662e98 (READ)
// 0059b6b9: FISTP dword ptr [EBX + 0x8]
// 0059b6bc: MOV EAX,ESP
// 0059b6be: MOV EBX,dword ptr [ESP + 0x30]
// 0059b6c2: PUSH EAX
// 0059b6c3: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0059b6c5: ADD EAX,EBX
// 0059b6c7: PUSH EAX
// 0059b6c8: ADD EDI,0x30
// 0059b6cb: INC ESI
// 0059b6cc: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 0059b6d1: MOV EAX,dword ptr [EBP + 0x28558]
// 0059b6d7: ADD ESP,0x8
// 0059b6da: CMP ESI,EAX
// 0059b6dc: JL 0x0059b677
//   XREF to: 0059b677 (CONDITIONAL_JUMP)
// 0059b6de: MOV EAX,EAX
// 0059b6e0: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_0059b6e0
// 0059b6e4: XOR EDX,EDX
// 0059b6e6: MOV ECX,dword ptr [EBP + 0x28558]
// 0059b6ec: MOV dword ptr [ESP + 0x38],EDX
// 0059b6f0: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 0059b6f5: TEST ECX,ECX
// 0059b6f7: JLE 0x0059b75d
//   XREF to: 0059b75d (CONDITIONAL_JUMP)
// 0059b6f9: MOV dword ptr [ESP + 0x34],EBP
// 0059b6fd: XOR EBX,EBX
// 0059b6ff: MOV EAX,dword ptr [ESP + 0x34]
//   Label: LAB_0059b6ff
// 0059b703: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059b709: TEST EAX,EAX
// 0059b70b: JL 0x0059b73c
//   XREF to: 0059b73c (CONDITIONAL_JUMP)
// 0059b70d: IMUL ESI,EAX,0x30
// 0059b710: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0059b715: MOV ECX,0xc
// 0059b71a: SUB ESP,0x30
// 0059b71d: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 0059b71f: MOV EDI,ESP
// 0059b721: ADD ESI,EAX
// 0059b723: MOVSD.REP ES:EDI,ESI
// 0059b725: SUB ESP,0x30
// 0059b728: MOV ECX,0xc
// 0059b72d: MOV EDI,ESP
// 0059b72f: LEA ESI,[EAX + EBX*0x1]
// 0059b732: MOVSD.REP ES:EDI,ESI
// 0059b734: CALL engine_3d.c_clipAndDrawLine2D_FUN_00407d70
//   XREF to: 00407d70 (UNCONDITIONAL_CALL)
// 0059b739: ADD ESP,0x60
// 0059b73c: MOV ESI,dword ptr [ESP + 0x34]
//   Label: LAB_0059b73c
// 0059b740: MOV EDI,dword ptr [ESP + 0x38]
// 0059b744: ADD EBX,0x30
// 0059b747: MOV EDX,dword ptr [EBP + 0x28558]
// 0059b74d: ADD ESI,0x24
// 0059b750: INC EDI
// 0059b751: MOV dword ptr [ESP + 0x34],ESI
// 0059b755: MOV dword ptr [ESP + 0x38],EDI
// 0059b759: CMP EDI,EDX
// 0059b75b: JL 0x0059b6ff
//   XREF to: 0059b6ff (CONDITIONAL_JUMP)
// 0059b75d: TEST byte ptr [ESP + 0x5c],0x2
//   Label: LAB_0059b75d
// 0059b762: JZ 0x0059b7f0
//   XREF to: 0059b7f0 (CONDITIONAL_JUMP)
// 0059b768: MOV ECX,dword ptr [EBP + 0x28558]
// 0059b76e: XOR EBX,EBX
// 0059b770: TEST ECX,ECX
// 0059b772: JLE 0x0059b7f0
//   XREF to: 0059b7f0 (CONDITIONAL_JUMP)
// 0059b778: MOV ESI,dword ptr [ESP + 0x58]
// 0059b77c: LEA EAX,[ESP + 0xc]
//   Label: LAB_0059b77c
// 0059b780: PUSH EAX
// 0059b781: PUSH ESI
// 0059b782: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0059b787: ADD ESP,0x8
// 0059b78a: LEA EAX,[ESP + 0x18]
// 0059b78e: PUSH EAX
// 0059b78f: PUSH ESI
// 0059b790: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 0059b795: ADD ESP,0x8
// 0059b798: LEA EAX,[ESP + 0x18]
// 0059b79c: PUSH EAX
// 0059b79d: LEA EAX,[ESP + 0x10]
// 0059b7a1: PUSH EAX
// 0059b7a2: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059b7a8: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 0059b7a9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 0059b7ae: ADD ESP,0xc
// 0059b7b1: PUSH 0xff
// 0059b7b6: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 0059b7bb: PUSH 0x3f000000
// 0059b7c0: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0059b7c1: CALL shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
//   XREF to: 004a1ca0 (UNCONDITIONAL_CALL)
// 0059b7c6: ADD ESP,0xc
// 0059b7c9: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0059b7cf: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0059b7d0: INC EBX
// 0059b7d1: ADD ESI,0x30
// 0059b7d4: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 0059b7f0: ADD ESP,0x3c
//   Label: LAB_0059b7f0
// 0059b7f3: POP EBP
// 0059b7f4: POP EDI
// 0059b7f5: POP ESI
// 0059b7f6: POP EBX
// 0059b7f7: RET
