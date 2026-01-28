// Name: core_setedit.cpp_FUN_0057b600
// Address: 0057b600
// Address Range: [[0057b600, 0057b900]]
// Convention: unknown
// Signature: void core_setedit_cpp_FUN_0057b600(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_0057b600(uint param_1, uint param_2) */

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
      *(uint *)pCVar10 = *(uint *)pCVar4;
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
      *(uint *)pcVar11 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(ushort *)pcVar11 = *(ushort *)pcVar5;
    *(uint *)(pCVar3->unk1 + 6) = *(uint *)(pCVar1->unk1 + 6);
    *(uint *)(pCVar3->unk1 + 10) = *(uint *)(pCVar1->unk1 + 10);
    *(uint *)(pCVar3->unk1 + 0xe) = *(uint *)(pCVar1->unk1 + 0xe);
    *(uint *)(pCVar3->unk1 + 0x12) = *(uint *)(pCVar1->unk1 + 0x12);
    (pCVar3->color).r = (pCVar1->color).r;
    (pCVar3->color).g = (pCVar1->color).g;
    (pCVar3->color).b = (pCVar1->color).b;
    pCVar3->atten_start = pCVar1->atten_start;
    pCVar3->atten_end = pCVar1->atten_end;
    *(uint *)pCVar3->unk2 = *(uint *)pCVar1->unk2;
    *(uint *)(pCVar3->unk2 + 4) = *(uint *)(pCVar1->unk2 + 4);
    pCVar3->on_time = pCVar1->on_time;
    pCVar3->cycle_time = pCVar1->cycle_time;
    pCVar3->cycle_elapsed = pCVar1->cycle_elapsed;
    pCVar3->filter_count = pCVar1->filter_count;
    pCVar3->blend_filter = pCVar1->blend_filter;
    pacVar6 = pCVar1->filter_names;
    pacVar12 = pCVar3->filter_names;
    for (iVar2 = 0x140; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(uint *)*pacVar12 = *(uint *)*pacVar6;
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
