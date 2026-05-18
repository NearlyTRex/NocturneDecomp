// Name: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_004270f0
// Address: 004270f0
// Address Range: [[004270f0, 004272ec] [0060a49b, 0060a4d7]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(CBugs *this_ptr,SBug *bug_data)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_004270f0(CBugs *this_ptr,SBug *bug_data)

{
  CVector3i *pCVar1;
  CVector3i *pCVar2;
  int iVar6;
  int iVar3;
  int iVar8;
  int iVar4;
  int iVar5;
  int iVar9;
  SSwarmVertex *pSVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  int aiStackY_1030 [1008];
  int local_68 [8];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  SSwarmVertex *local_30;
  int local_2c;
  int local_28;
  SSwarmVertex *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int *piVar1;
  int iVar2;
  
  local_2c = bug_data->current_vertex;
  bug_data->interp_t = 0.0;
  bug_data->current_vertex = bug_data->dest_vertex;
  local_30 = this_ptr->swarm_vertices;
  local_20 = 0;
  do {
    pSVar6 = local_30 + bug_data->current_vertex;
    local_28 = this_ptr->deformable_model_ptr->skinned_vertices_buffer[bug_data->current_vertex].y;
    iVar7 = 0;
    iVar5 = 0;
    local_24 = pSVar6;
    if (0 < pSVar6->edge_count) {
      iVar3 = 0;
      do {
        iVar2 = pSVar6->neighbors[0];
        local_1c = this_ptr->deformable_model_ptr->skinned_vertices_buffer[iVar2].y;
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar2 != local_2c && ((bug_data->downward_bias < 1 || (local_28 <= local_1c)))))) {
          iVar4 = iVar3 + 4;
          iVar7 = iVar7 + 1;
          *(int *)((int)local_68 + iVar3) = iVar2;
          iVar3 = iVar4;
        }
        iVar5 = iVar5 + 1;
        pSVar6 = (SSwarmVertex *)&pSVar6->first_edge_data;
      } while (iVar5 < local_24->edge_count);
    }
  } while ((iVar7 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < bug_data->downward_bias) {
    bug_data->downward_bias = bug_data->downward_bias + -1;
  }
  if (iVar7 < 1) {
    bug_data->dest_vertex = local_2c;
    if (local_2c < 0) {
      bug_data->dest_vertex = bug_data->current_vertex;
    }
  }
  else {
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,iVar7 + -1);
    bug_data->dest_vertex = local_68[iVar6];
  }
  pCVar2 = this_ptr->deformable_model_ptr->skinned_vertices_buffer;
  pCVar1 = pCVar2 + bug_data->current_vertex;
  pCVar2 = pCVar2 + *(int *)(pCVar1->z + 0x30);
  iVar9 = pCVar1->x - pCVar2->x;
  iVar6 = pCVar1->y - pCVar2->y;
  iVar8 = pCVar1->z - pCVar2->z;
  bug_data->crawl_duration =
       SQRT((float)(iVar8 * iVar8 + iVar9 * iVar9 + iVar6 * iVar6)) * (float)0.00390625;
  return;
}
