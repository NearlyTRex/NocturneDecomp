// Name: core_setedit.cpp_CDemonSet_deleteLight_FUN_0057b910
// Address: 0057b910
// Address Range: [[0057b910, 0057bbac]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_deleteLight_FUN_0057b910(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_deleteLight_FUN_0057b910(CDemonSet *this_ptr,int light_index)

{
  int iVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
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
  int local_10;
  C3DSLight *local_c;
  C3DSLight *local_8;
  
  if (-1 < light_index) {
    if (light_index < this_ptr->light_count) {
      local_10 = light_index;
      if (light_index < this_ptr->light_count) {
        pCVar3 = &this_ptr->lights[light_index + 1].pos;
        pCVar2 = &this_ptr->lights[light_index].pos;
        local_c = this_ptr->lights + light_index;
        local_8 = this_ptr->lights + light_index + 1;
        do {
          local_c->light_type = local_8->light_type;
          iVar1 = 0x40;
          pCVar4 = local_8;
          pCVar10 = local_c;
          while( true ) {
            pCVar10 = (C3DSLight *)pCVar10->name;
            pCVar4 = (C3DSLight *)pCVar4->name;
            if (iVar1 == 0) break;
            iVar1 = iVar1 + -1;
            *(uint *)pCVar10 = *(uint *)pCVar4;
          }
          if (pCVar2 != pCVar3) {
            pCVar2->x = pCVar3->x;
            pCVar2->y = pCVar3->y;
            pCVar2->z = pCVar3->z;
          }
          if (&local_c->orient != &local_8->orient) {
            (local_c->orient).x = (local_8->orient).x;
            (local_c->orient).y = (local_8->orient).y;
            (local_c->orient).z = (local_8->orient).z;
          }
          local_c->fov = local_8->fov;
          local_c->aspect = local_8->aspect;
          local_c->intensity = local_8->intensity;
          pcVar5 = local_8->visible_flags;
          pcVar11 = local_c->visible_flags;
          for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pcVar11 = *(uint *)pcVar5;
            pcVar5 = pcVar5 + 4;
            pcVar11 = pcVar11 + 4;
          }
          *(ushort *)pcVar11 = *(ushort *)pcVar5;
          local_c->camera_light_bounds[0].left = local_8->camera_light_bounds[0].left;
          local_c->camera_light_bounds[0].top = local_8->camera_light_bounds[0].top;
          local_c->camera_light_bounds[0].right = local_8->camera_light_bounds[0].right;
          local_c->camera_light_bounds[0].bottom = local_8->camera_light_bounds[0].bottom;
          (local_c->color).r = (local_8->color).r;
          (local_c->color).g = (local_8->color).g;
          (local_c->color).b = (local_8->color).b;
          local_c->atten_start = local_8->atten_start;
          local_c->atten_end = local_8->atten_end;
          local_c->atten_end_squared = local_8->atten_end_squared;
          local_c->atten_end_reciprocal = local_8->atten_end_reciprocal;
          local_c->on_time = local_8->on_time;
          local_c->cycle_time = local_8->cycle_time;
          local_c->cycle_elapsed = local_8->cycle_elapsed;
          local_c->filter_count = local_8->filter_count;
          local_c->blend_filter = local_8->blend_filter;
          pacVar6 = local_8->filter_names;
          pacVar12 = local_c->filter_names;
          for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)*pacVar12 = *(uint *)*pacVar6;
            pacVar6 = (char (*) [40])(*pacVar6 + 4);
            pacVar12 = (char (*) [40])(*pacVar12 + 4);
          }
          pfVar7 = local_8->filter_durations;
          pfVar13 = local_c->filter_durations;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar13 = *pfVar7;
            pfVar7 = pfVar7 + 1;
            pfVar13 = pfVar13 + 1;
          }
          piVar8 = local_8->filter_indices;
          piVar14 = local_c->filter_indices;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar14 = *piVar8;
            piVar8 = piVar8 + 1;
            piVar14 = piVar14 + 1;
          }
          local_c->move_filter = local_8->move_filter;
          (local_c->filter_vel).x = (local_8->filter_vel).x;
          (local_c->filter_vel).y = (local_8->filter_vel).y;
          (local_c->filter_pos).x = (local_8->filter_pos).x;
          (local_c->filter_pos).y = (local_8->filter_pos).y;
          (local_c->size).x = (local_8->size).x;
          (local_c->size).y = (local_8->size).y;
          pCVar3 = (CVector3f *)((int)(pCVar3 + 0x20c) + 8);
          ppCVar9 = local_8->filters;
          ppCVar15 = local_c->filters;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *ppCVar15 = *ppCVar9;
            ppCVar9 = ppCVar9 + 1;
            ppCVar15 = ppCVar15 + 1;
          }
          pCVar2 = (CVector3f *)((int)(pCVar2 + 0x20c) + 8);
          local_c->current_filter_frame = local_8->current_filter_frame;
          local_c->filter_frame_elapsed = local_8->filter_frame_elapsed;
          local_10 = local_10 + 1;
          local_c = local_c + 1;
          local_8 = local_8 + 1;
        } while (local_10 < this_ptr->light_count);
      }
      this_ptr->light_count = this_ptr->light_count + -1;
    }
  }
  return;
}
