// Name: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00423480
// Address: 00423480
// Address Range: [[00423480, 0042367c]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(CBugs *this_ptr,SBug *bug_data)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00423480(CBugs *this_ptr,SBug *bug_data)

{
  CVector3i *pCVar1;
  int iVar2;
  CVector3i *pCVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  SSwarmVertex *pSVar7;
  int iVar8;
  uint *puVar9;
  byte bVar10;
  int aiStackY_1030 [1008];
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
  
  bVar10 = 0;
  local_2c = bug_data->current_vertex;
  bug_data->interp_t = 0.0;
  bug_data->current_vertex = bug_data->dest_vertex;
  local_30 = this_ptr->swarm_vertices;
  local_20 = 0;
  do {
    pSVar7 = local_30 + bug_data->current_vertex;
    local_28 = this_ptr->deformable_model_ptr->skinned_vertices_buffer[bug_data->current_vertex].y;
    iVar8 = 0;
    iVar6 = 0;
    local_24 = pSVar7;
    if (0 < pSVar7->edge_count) {
      iVar4 = 0;
      do {
        iVar2 = pSVar7->neighbors[0];
        local_1c = this_ptr->deformable_model_ptr->skinned_vertices_buffer[iVar2].y;
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar5 = iVar4, iVar2 != local_2c &&
            ((bug_data->downward_bias < 1 || (local_28 <= local_1c)))))) {
          iVar5 = iVar4 + 4;
          iVar8 = iVar8 + 1;
          *(int *)(&stack0xffffff98 + iVar4) = iVar2;
        }
        iVar6 = iVar6 + 1;
        pSVar7 = (SSwarmVertex *)&pSVar7->first_edge_data;
        iVar4 = iVar5;
      } while (iVar6 < local_24->edge_count);
    }
  } while ((iVar8 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < bug_data->downward_bias) {
    bug_data->downward_bias = bug_data->downward_bias + -1;
  }
  if (iVar8 < 1) {
    bug_data->dest_vertex = local_2c;
    if (local_2c < 0) {
      bug_data->dest_vertex = bug_data->current_vertex;
    }
  }
  else {
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040de00(0,iVar8 + -1);
    bug_data->dest_vertex = *(int *)(&stack0xffffff98 + iVar6 * 4);
  }
  pCVar3 = this_ptr->deformable_model_ptr->skinned_vertices_buffer;
  pCVar1 = pCVar3 + bug_data->current_vertex;
  puVar9 = (uint *)((int)pCVar1 + (uint)bVar10 * -8 + 4);
  local_3c = pCVar1->x;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar10 * -8) = *puVar9;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       puVar9[(uint)bVar10 * -2 + 1];
  pCVar3 = pCVar3 + bug_data->dest_vertex;
  puVar9 = (uint *)((int)pCVar3 + (uint)bVar10 * -8 + 4);
  local_48 = pCVar3->x;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar10 * -8) = *puVar9;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       puVar9[(uint)bVar10 * -2 + 1];
  bug_data->crawl_duration =
       SQRT((float)((local_34 - local_40) * (local_34 - local_40) +
                   (local_3c - local_48) * (local_3c - local_48) +
                   (local_38 - local_44) * (local_38 - local_44))) * (float)0.00390625;
  return;
}
