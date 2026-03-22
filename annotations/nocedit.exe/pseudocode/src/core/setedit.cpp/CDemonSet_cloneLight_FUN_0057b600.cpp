// Name: core_setedit.cpp_CDemonSet_cloneLight_FUN_0057b600
// Address: 0057b600
// Address Range: [[0057b600, 0057b900] [00604a5c, 00604a82]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(CDemonSet *this_ptr,int light_index)

{
  C3DSLight *pCVar2;
  int iVar2;
  int iVar3;
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
  C3DSLight *pCVar1;
  
  if (this_ptr->light_count < 200) {
    pCVar2 = this_ptr->lights + light_index;
    pCVar3 = this_ptr->lights + this_ptr->light_count;
    pCVar3->light_type = pCVar2->light_type;
    iVar2 = 0x40;
    pCVar4 = pCVar2;
    pCVar10 = pCVar3;
    while( true ) {
      pCVar10 = (C3DSLight *)pCVar10->name;
      pCVar4 = (C3DSLight *)pCVar4->name;
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pCVar10->light_type = pCVar4->light_type;
    }
    if (&pCVar3->pos != &pCVar2->pos) {
      (pCVar3->pos).x = (pCVar2->pos).x;
      (pCVar3->pos).y = (pCVar2->pos).y;
      (pCVar3->pos).z = (pCVar2->pos).z;
    }
    if (&pCVar3->orient != &pCVar2->orient) {
      (pCVar3->orient).x = (pCVar2->orient).x;
      (pCVar3->orient).y = (pCVar2->orient).y;
      (pCVar3->orient).z = (pCVar2->orient).z;
    }
    pCVar3->fov = pCVar2->fov;
    pCVar3->aspect = pCVar2->aspect;
    pCVar3->intensity = pCVar2->intensity;
    pcVar5 = pCVar2->visible_flags;
    pcVar11 = pCVar3->visible_flags;
    for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)pcVar11 = *(uint *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar11 = pcVar11 + 4;
    }
    *(ushort *)pcVar11 = *(ushort *)pcVar5;
    pCVar3->camera_light_bounds[0].left = pCVar2->camera_light_bounds[0].left;
    pCVar3->camera_light_bounds[0].top = pCVar2->camera_light_bounds[0].top;
    pCVar3->camera_light_bounds[0].right = pCVar2->camera_light_bounds[0].right;
    pCVar3->camera_light_bounds[0].bottom = pCVar2->camera_light_bounds[0].bottom;
    (pCVar3->color).r = (pCVar2->color).r;
    (pCVar3->color).g = (pCVar2->color).g;
    (pCVar3->color).b = (pCVar2->color).b;
    pCVar3->atten_start = pCVar2->atten_start;
    pCVar3->atten_end = pCVar2->atten_end;
    pCVar3->atten_end_squared = pCVar2->atten_end_squared;
    pCVar3->atten_end_reciprocal = pCVar2->atten_end_reciprocal;
    pCVar3->on_time = pCVar2->on_time;
    pCVar3->cycle_time = pCVar2->cycle_time;
    pCVar3->cycle_elapsed = pCVar2->cycle_elapsed;
    pCVar3->filter_count = pCVar2->filter_count;
    pCVar3->blend_filter = pCVar2->blend_filter;
    pacVar6 = pCVar2->filter_names;
    pacVar12 = pCVar3->filter_names;
    for (iVar3 = 0x140; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(uint *)*pacVar12 = *(uint *)*pacVar6;
      pacVar6 = (char (*) [40])(*pacVar6 + 4);
      pacVar12 = (char (*) [40])(*pacVar12 + 4);
    }
    pfVar7 = pCVar2->filter_durations;
    pfVar13 = pCVar3->filter_durations;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar13 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar13 = pfVar13 + 1;
    }
    piVar8 = pCVar2->filter_indices;
    piVar14 = pCVar3->filter_indices;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar14 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar14 = piVar14 + 1;
    }
    pCVar3->move_filter = pCVar2->move_filter;
    (pCVar3->filter_vel).x = (pCVar2->filter_vel).x;
    (pCVar3->filter_vel).y = (pCVar2->filter_vel).y;
    (pCVar3->filter_pos).x = (pCVar2->filter_pos).x;
    (pCVar3->filter_pos).y = (pCVar2->filter_pos).y;
    (pCVar3->size).x = (pCVar2->size).x;
    (pCVar3->size).y = (pCVar2->size).y;
    ppCVar9 = pCVar2->filters;
    ppCVar15 = pCVar3->filters;
    for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
      *ppCVar15 = *ppCVar9;
      ppCVar9 = ppCVar9 + 1;
      ppCVar15 = ppCVar15 + 1;
    }
    pCVar3->current_filter_frame = pCVar2->current_filter_frame;
    pCVar3->filter_frame_elapsed = pCVar2->filter_frame_elapsed;
    do {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter new name for cloned light",
                         this_ptr->lights[this_ptr->light_count].name,0x100,0);
      if (iVar3 == 0) {
        return;
      }
    } while (this_ptr->lights[this_ptr->light_count].name[0] == '\0');
    iVar3 = core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50
                      (this_ptr,this_ptr->lights + this_ptr->light_count);
    if (iVar3 != 0) {
      this_ptr->light_count = this_ptr->light_count + 1;
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Precompute light visibility?");
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
                  (this_ptr,this_ptr->light_count + -1);
      }
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      return;
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
  }
  return;
}
