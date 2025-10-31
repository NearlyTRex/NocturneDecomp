// Name: core_setedit.cpp_FUN_0057b600
// Address: 0057b600
// Address Range: [[0057b600, 0057b900]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_0057b600()
// Cross-references:
//   core_setedit.cpp_showDementedLightEditor_FUN_0057c5d0 (0057c5d0) at 0057ccaa [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Too_many_lights_already_00647814
//   TerminatedCString s_Enter_new_name_for_clone_0064782d
//   TerminatedCString s_Precompute_light_visibil_0064784d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   core_set.cpp_CDemonSet_FUN_0056d2d0
//   core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0

#include "nocturne.h"

/* Signature: undefined1 core_setedit.cpp_FUN_0057b600(undefined4 param_1, undefined4 param_2) */

void core_setedit_cpp_FUN_0057b600(void)

{
  C3DSLight *pCVar1;
  int iVar2;
  C3DSLight *pCVar3;
  C3DSLight *pCVar4;
  char *pcVar5;
  char (*pacVar6) [40];
  float *pfVar7;
  int *piVar8;
  CDemonFilter **ppCVar9;
  C3DSLight *pCVar10;
  char *pcVar11;
  char (*pacVar12) [40];
  float *pfVar13;
  int *piVar14;
  CDemonFilter **ppCVar15;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  
  if (in_stack_00000004->light_count < 200) {
    pCVar1 = in_stack_00000004->lights + in_stack_00000008;
    pCVar3 = in_stack_00000004->lights + in_stack_00000004->light_count;
    pCVar3->light_type = pCVar1->light_type;
    iVar2 = 0x40;
    pCVar4 = pCVar1;
    pCVar10 = pCVar3;
    while( true ) {
      pCVar10 = (C3DSLight *)pCVar10->name;
      pCVar4 = (C3DSLight *)pCVar4->name;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      *(undefined4 *)pCVar10 = *(undefined4 *)pCVar4;
    }
    if (&pCVar3->pos != &pCVar1->pos) {
      (pCVar3->pos).x = (pCVar1->pos).x;
      (pCVar3->pos).y = (pCVar1->pos).y;
      (pCVar3->pos).z = (pCVar1->pos).z;
    }
    if (&pCVar3->orient != &pCVar1->orient) {
      (pCVar3->orient).x = (pCVar1->orient).x;
      (pCVar3->orient).y = (pCVar1->orient).y;
      (pCVar3->orient).z = (pCVar1->orient).z;
    }
    pCVar3->fov = pCVar1->fov;
    pCVar3->aspect = pCVar1->aspect;
    pCVar3->intensity = pCVar1->intensity;
    pcVar5 = pCVar1->visible_flags;
    pcVar11 = pCVar3->visible_flags;
    for (iVar2 = 0x3e; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar11 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(undefined2 *)pcVar11 = *(undefined2 *)pcVar5;
    *(undefined4 *)(pCVar3->field8_0x21e + 6) = *(undefined4 *)(pCVar1->field8_0x21e + 6);
    *(undefined4 *)(pCVar3->field8_0x21e + 10) = *(undefined4 *)(pCVar1->field8_0x21e + 10);
    *(undefined4 *)(pCVar3->field8_0x21e + 0xe) = *(undefined4 *)(pCVar1->field8_0x21e + 0xe);
    *(undefined4 *)(pCVar3->field8_0x21e + 0x12) = *(undefined4 *)(pCVar1->field8_0x21e + 0x12);
    (pCVar3->color).r = (pCVar1->color).r;
    (pCVar3->color).g = (pCVar1->color).g;
    (pCVar3->color).b = (pCVar1->color).b;
    pCVar3->atten_start = pCVar1->atten_start;
    pCVar3->atten_end = pCVar1->atten_end;
    *(undefined4 *)pCVar3->field12_0x11d8 = *(undefined4 *)pCVar1->field12_0x11d8;
    *(undefined4 *)(pCVar3->field12_0x11d8 + 4) = *(undefined4 *)(pCVar1->field12_0x11d8 + 4);
    pCVar3->on_time = pCVar1->on_time;
    pCVar3->cycle_time = pCVar1->cycle_time;
    pCVar3->cycle_elapsed = pCVar1->cycle_elapsed;
    pCVar3->filter_count = pCVar1->filter_count;
    pCVar3->blend_filter = pCVar1->blend_filter;
    pacVar6 = pCVar1->filter_names;
    pacVar12 = pCVar3->filter_names;
    for (iVar2 = 0x140; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)*pacVar12 = *(undefined4 *)*pacVar6;
      pacVar6 = (char (*) [40])(*pacVar6 + 4);
      pacVar12 = (char (*) [40])(*pacVar12 + 4);
    }
    pfVar7 = pCVar1->filter_durations;
    pfVar13 = pCVar3->filter_durations;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar13 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar13 = pfVar13 + 1;
    }
    piVar8 = pCVar1->filter_indices;
    piVar14 = pCVar3->filter_indices;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar14 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar14 = piVar14 + 1;
    }
    pCVar3->move_filter = pCVar1->move_filter;
    (pCVar3->filter_vel).x = (pCVar1->filter_vel).x;
    (pCVar3->filter_vel).y = (pCVar1->filter_vel).y;
    (pCVar3->filter_pos).x = (pCVar1->filter_pos).x;
    (pCVar3->filter_pos).y = (pCVar1->filter_pos).y;
    (pCVar3->size).x = (pCVar1->size).x;
    (pCVar3->size).y = (pCVar1->size).y;
    ppCVar9 = pCVar1->filters;
    ppCVar15 = pCVar3->filters;
    for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppCVar15 = *ppCVar9;
      ppCVar9 = ppCVar9 + 1;
      ppCVar15 = ppCVar15 + 1;
    }
    pCVar3->current_filter_frame = pCVar1->current_filter_frame;
    pCVar3->filter_frame_elapsed = pCVar1->filter_frame_elapsed;
    do {
      iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter new name for cloned light",
                         in_stack_00000004->lights[in_stack_00000004->light_count].name,0x100,0);
      if (iVar2 == 0) {
        return;
      }
    } while (in_stack_00000004->lights[in_stack_00000004->light_count].name[0] == '\0');
    iVar2 = core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50();
    if (iVar2 != 0) {
      in_stack_00000004->light_count = in_stack_00000004->light_count + 1;
      core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
      iVar2 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Precompute light visibility?");
      if (iVar2 != 0) {
        core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
      }
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
      return;
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
  }
  return;
}


// Assembly code:
// 0057b600: PUSH EBX
//   Label: core_setedit.cpp_FUN_0057b600
// 0057b601: PUSH ESI
// 0057b602: PUSH EDI
// 0057b603: PUSH EBP
// 0057b604: SUB ESP,0x4
// 0057b607: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0057b60b: CMP dword ptr [EBX + 0x19a2c],0xc8
// 0057b615: JGE 0x0057b871
//   XREF to: 0057b871 (CONDITIONAL_JUMP)
// 0057b61b: IMUL EAX,dword ptr [ESP + 0x1c],0x1898
//   XREF to: Stack[0x8] (READ)
// 0057b623: LEA EBP,[EBX + 0x19a30]
// 0057b629: MOV ESI,dword ptr [EBX + 0x19a2c]
// 0057b62f: LEA EDX,[EAX + EBP*0x1]
// 0057b632: IMUL EAX,ESI,0x1898
// 0057b638: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x14] (DATA)
// 0057b63b: ADD EBP,EAX
// 0057b63d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0057b640: LEA EDI,[EBP + 0x4]
// 0057b643: MOV ECX,dword ptr [EAX]
// 0057b645: MOV ESI,EAX
// 0057b647: MOV dword ptr [EBP],ECX
// 0057b64a: MOV ECX,0x40
// 0057b64f: LEA ESI,[ESI + 0x4]
// 0057b652: MOVSD.REP ES:EDI,ESI
// 0057b654: MOV EDX,EBP
// 0057b656: LEA ESI,[EBP + 0x104]
// 0057b65c: LEA ECX,[EAX + 0x104]
// 0057b662: CMP ESI,ECX
// 0057b664: JNZ 0x0057b887
//   XREF to: 0057b887 (CONDITIONAL_JUMP)
// 0057b66a: LEA ESI,[EAX + 0x110]
//   Label: LAB_0057b66a
// 0057b670: LEA ECX,[EDX + 0x110]
// 0057b676: CMP ECX,ESI
// 0057b678: JNZ 0x0057b89c
//   XREF to: 0057b89c (CONDITIONAL_JUMP)
// 0057b67e: FLD float ptr [EAX + 0x11c]
//   Label: LAB_0057b67e
// 0057b684: MOV ECX,0x3e
// 0057b689: LEA EDI,[EDX + 0x128]
// 0057b68f: FSTP float ptr [EDX + 0x11c]
// 0057b695: MOV ESI,dword ptr [EAX + 0x120]
// 0057b69b: MOV dword ptr [EDX + 0x120],ESI
// 0057b6a1: MOV ESI,dword ptr [EAX + 0x124]
// 0057b6a7: MOV dword ptr [EDX + 0x124],ESI
// 0057b6ad: LEA ESI,[EAX + 0x128]
// 0057b6b3: MOVSD.REP ES:EDI,ESI
// 0057b6b5: MOVSW ES:EDI,ESI
// 0057b6b7: LEA EDI,[EDX + 0x224]
// 0057b6bd: LEA ESI,[EAX + 0x224]
// 0057b6c3: MOVSD ES:EDI,ESI
// 0057b6c4: MOVSD ES:EDI,ESI
// 0057b6c5: MOVSD ES:EDI,ESI
// 0057b6c6: MOVSD ES:EDI,ESI
// 0057b6c7: MOV ECX,dword ptr [EAX + 0x11c4]
// 0057b6cd: MOV dword ptr [EDX + 0x11c4],ECX
// 0057b6d3: MOV ECX,dword ptr [EAX + 0x11c8]
// 0057b6d9: MOV dword ptr [EDX + 0x11c8],ECX
// 0057b6df: MOV ECX,dword ptr [EAX + 0x11cc]
// 0057b6e5: MOV dword ptr [EDX + 0x11cc],ECX
// 0057b6eb: MOV ECX,dword ptr [EAX + 0x11d0]
// 0057b6f1: MOV dword ptr [EDX + 0x11d0],ECX
// 0057b6f7: MOV ECX,dword ptr [EAX + 0x11d4]
// 0057b6fd: MOV dword ptr [EDX + 0x11d4],ECX
// 0057b703: MOV ECX,dword ptr [EAX + 0x11d8]
// 0057b709: MOV dword ptr [EDX + 0x11d8],ECX
// 0057b70f: MOV ECX,dword ptr [EAX + 0x11dc]
// 0057b715: MOV dword ptr [EDX + 0x11dc],ECX
// 0057b71b: MOV ECX,dword ptr [EAX + 0x11e0]
// 0057b721: MOV dword ptr [EDX + 0x11e0],ECX
// 0057b727: MOV ECX,dword ptr [EAX + 0x11e4]
// 0057b72d: MOV dword ptr [EDX + 0x11e4],ECX
// 0057b733: MOV ECX,dword ptr [EAX + 0x11e8]
// 0057b739: MOV dword ptr [EDX + 0x11e8],ECX
// 0057b73f: MOV ECX,dword ptr [EAX + 0x11ec]
// 0057b745: MOV dword ptr [EDX + 0x11ec],ECX
// 0057b74b: MOV ECX,dword ptr [EAX + 0x11f0]
// 0057b751: LEA EDI,[EDX + 0x11f4]
// 0057b757: MOV dword ptr [EDX + 0x11f0],ECX
// 0057b75d: MOV ECX,0x140
// 0057b762: LEA ESI,[EAX + 0x11f4]
// 0057b768: MOVSD.REP ES:EDI,ESI
// 0057b76a: MOV ECX,0x20
// 0057b76f: LEA EDI,[EDX + 0x16f4]
// 0057b775: LEA ESI,[EAX + 0x16f4]
// 0057b77b: MOVSD.REP ES:EDI,ESI
// 0057b77d: MOV ECX,0x20
// 0057b782: LEA EDI,[EDX + 0x1774]
// 0057b788: LEA ESI,[EAX + 0x1774]
// 0057b78e: MOVSD.REP ES:EDI,ESI
// 0057b790: MOV ECX,dword ptr [EAX + 0x17f4]
// 0057b796: MOV dword ptr [EDX + 0x17f4],ECX
// 0057b79c: MOV ECX,dword ptr [EAX + 0x17f8]
// 0057b7a2: MOV dword ptr [EDX + 0x17f8],ECX
// 0057b7a8: MOV ECX,dword ptr [EAX + 0x17fc]
// 0057b7ae: MOV dword ptr [EDX + 0x17fc],ECX
// 0057b7b4: MOV ECX,dword ptr [EAX + 0x1800]
// 0057b7ba: MOV dword ptr [EDX + 0x1800],ECX
// 0057b7c0: MOV ECX,dword ptr [EAX + 0x1804]
// 0057b7c6: MOV dword ptr [EDX + 0x1804],ECX
// 0057b7cc: MOV ECX,dword ptr [EAX + 0x1808]
// 0057b7d2: MOV dword ptr [EDX + 0x1808],ECX
// 0057b7d8: MOV ECX,dword ptr [EAX + 0x180c]
// 0057b7de: LEA EDI,[EDX + 0x1810]
// 0057b7e4: MOV dword ptr [EDX + 0x180c],ECX
// 0057b7ea: MOV ECX,0x20
// 0057b7ef: LEA ESI,[EAX + 0x1810]
// 0057b7f5: MOVSD.REP ES:EDI,ESI
// 0057b7f7: MOV ECX,dword ptr [EAX + 0x1890]
// 0057b7fd: MOV dword ptr [EDX + 0x1890],ECX
// 0057b803: LEA ESI,[EBX + 0x19a30]
// 0057b809: MOV ECX,dword ptr [EAX + 0x1894]
// 0057b80f: MOV dword ptr [EDX + 0x1894],ECX
// 0057b815: IMUL EAX,dword ptr [EBX + 0x19a2c],0x1898
//   Label: LAB_0057b815
// 0057b81f: PUSH 0x0
// 0057b821: ADD EAX,ESI
// 0057b823: PUSH 0x100
// 0057b828: ADD EAX,0x4
// 0057b82b: PUSH EAX
// 0057b82c: PUSH 0x64782d
//   XREF to: 0064782d (DATA)
// 0057b831: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0057b836: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0057b837: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0057b83c: ADD ESP,0x14
// 0057b83f: TEST EAX,EAX
// 0057b841: JZ 0x0057b869
//   XREF to: 0057b869 (CONDITIONAL_JUMP)
// 0057b843: IMUL EAX,dword ptr [EBX + 0x19a2c],0x1898
// 0057b84d: LEA EDX,[EBX + EAX*0x1]
// 0057b850: CMP byte ptr [EDX + 0x19a34],0x0
// 0057b857: JZ 0x0057b815
//   XREF to: 0057b815 (CONDITIONAL_JUMP)
// 0057b859: ADD EAX,ESI
// 0057b85b: PUSH EAX
// 0057b85c: PUSH EBX
// 0057b85d: CALL core_setedit.cpp_CDemonSet_unk201_FUN_0057ae50
//   XREF to: 0057ae50 (UNCONDITIONAL_CALL)
// 0057b862: ADD ESP,0x8
// 0057b865: TEST EAX,EAX
// 0057b867: JNZ 0x0057b8b1
//   XREF to: 0057b8b1 (CONDITIONAL_JUMP)
// 0057b869: ADD ESP,0x4
//   Label: LAB_0057b869
// 0057b86c: POP EBP
// 0057b86d: POP EDI
// 0057b86e: POP ESI
// 0057b86f: POP EBX
// 0057b870: RET
// 0057b871: PUSH 0x647814
//   Label: LAB_0057b871
//   XREF to: 00647814 (DATA)
// 0057b876: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057b87c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 0057b87d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057b882: ADD ESP,0x8
// 0057b885: JMP 0x0057b869
//   XREF to: 0057b869 (UNCONDITIONAL_JUMP)
// 0057b887: MOV EDI,dword ptr [ECX]
//   Label: LAB_0057b887
// 0057b889: MOV dword ptr [ESI],EDI
// 0057b88b: MOV EDI,dword ptr [ECX + 0x4]
// 0057b88e: MOV dword ptr [ESI + 0x4],EDI
// 0057b891: MOV EDI,dword ptr [ECX + 0x8]
// 0057b894: MOV dword ptr [ESI + 0x8],EDI
// 0057b897: JMP 0x0057b66a
//   XREF to: 0057b66a (UNCONDITIONAL_JUMP)
// 0057b89c: MOV EDI,dword ptr [ESI]
//   Label: LAB_0057b89c
// 0057b89e: MOV dword ptr [ECX],EDI
// 0057b8a0: MOV EDI,dword ptr [ESI + 0x4]
// 0057b8a3: MOV dword ptr [ECX + 0x4],EDI
// 0057b8a6: MOV EDI,dword ptr [ESI + 0x8]
// 0057b8a9: MOV dword ptr [ECX + 0x8],EDI
// 0057b8ac: JMP 0x0057b67e
//   XREF to: 0057b67e (UNCONDITIONAL_JUMP)
// 0057b8b1: MOV ECX,dword ptr [EBX + 0x19a2c]
//   Label: LAB_0057b8b1
// 0057b8b7: INC ECX
// 0057b8b8: PUSH EBX
// 0057b8b9: MOV dword ptr [EBX + 0x19a2c],ECX
// 0057b8bf: CALL core_set.cpp_CDemonSet_FUN_0056d2d0
//   XREF to: 0056d2d0 (UNCONDITIONAL_CALL)
// 0057b8c4: ADD ESP,0x4
// 0057b8c7: PUSH 0x64784d
//   XREF to: 0064784d (DATA)
// 0057b8cc: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057b8d2: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 0057b8d3: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 0057b8d8: ADD ESP,0x8
// 0057b8db: TEST EAX,EAX
// 0057b8dd: JZ 0x0057b8f0
//   XREF to: 0057b8f0 (CONDITIONAL_JUMP)
// 0057b8df: MOV EAX,dword ptr [EBX + 0x19a2c]
// 0057b8e5: DEC EAX
// 0057b8e6: PUSH EAX
// 0057b8e7: PUSH EBX
// 0057b8e8: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 0057b8ed: ADD ESP,0x8
// 0057b8f0: PUSH EBX
//   Label: LAB_0057b8f0
// 0057b8f1: CALL core_set.cpp_CDemonSet_initScene_FUN_0056aa10
//   XREF to: 0056aa10 (UNCONDITIONAL_CALL)
// 0057b8f6: ADD ESP,0x4
// 0057b8f9: ADD ESP,0x4
// 0057b8fc: POP EBP
// 0057b8fd: POP EDI
// 0057b8fe: POP ESI
// 0057b8ff: POP EBX
// 0057b900: RET
