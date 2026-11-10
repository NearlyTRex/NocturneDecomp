// Name: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00427830
// Address: 00427830
// Address Range: [[00427830, 00427a2c]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs *this_ptr,SBug *bug_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00427830(CBugs *this_ptr,SBug *bug_data)

{
  CVector3i *pCVar1;
  int iVar2;
  CVector3i *pCVar3;
  int iVar4;
  int iVar5;
  SSwarmVertex *pSVar6;
  int iVar7;
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
  local_2c = *(int *)&bug_data->field_0x2c;
  *(uint *)&bug_data->field_0x34 = 0;
  *(uint *)&bug_data->field_0x2c = *(uint *)&bug_data->field_0x30;
  local_30 = this_ptr->swarm_vertices;
  local_20 = 0;
  do {
    pSVar6 = local_30 + *(int *)&bug_data->field_0x2c * 0x28;
    local_28 = this_ptr->deformable_model_ptr->skinned_vertices_buffer
               [*(int *)&bug_data->field_0x2c].y;
    iVar8 = 0;
    iVar7 = 0;
    local_24 = pSVar6;
    if (0 < *(int *)pSVar6) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(pSVar6 + 8);
        local_1c = this_ptr->deformable_model_ptr->skinned_vertices_buffer[iVar2].y;
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar5 = iVar4, iVar2 != local_2c &&
            ((*(int *)&bug_data->field_0x3c < 1 || (local_28 <= local_1c)))))) {
          iVar5 = iVar4 + 4;
          iVar8 = iVar8 + 1;
          *(int *)(&stack0xffffff98 + iVar4) = iVar2;
        }
        iVar7 = iVar7 + 1;
        pSVar6 = pSVar6 + 4;
        iVar4 = iVar5;
      } while (iVar7 < *(int *)local_24);
    }
  } while ((iVar8 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < *(int *)&bug_data->field_0x3c) {
    *(int *)&bug_data->field_0x3c = *(int *)&bug_data->field_0x3c + -1;
  }
  if (iVar8 < 1) {
    *(int *)&bug_data->field_0x30 = local_2c;
    if (local_2c < 0) {
      *(uint *)&bug_data->field_0x30 = *(uint *)&bug_data->field_0x2c;
    }
  }
  else {
    iVar7 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,iVar8 + -1);
    *(uint *)&bug_data->field_0x30 = *(uint *)(&stack0xffffff98 + iVar7 * 4);
  }
  pCVar3 = this_ptr->deformable_model_ptr->skinned_vertices_buffer;
  pCVar1 = pCVar3 + *(int *)&bug_data->field_0x2c;
  puVar9 = (uint *)((int)pCVar1 + (uint)bVar10 * -8 + 4);
  local_3c = pCVar1->x;
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar10 * -8) = *puVar9;
  *(uint *)((int)&stack0xffffffcc + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       puVar9[(uint)bVar10 * -2 + 1];
  pCVar3 = pCVar3 + *(int *)&bug_data->field_0x30;
  puVar9 = (uint *)((int)pCVar3 + (uint)bVar10 * -8 + 4);
  local_48 = pCVar3->x;
  *(uint *)((int)&stack0xffffffbc + (uint)bVar10 * -8) = *puVar9;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
       puVar9[(uint)bVar10 * -2 + 1];
  *(float *)&bug_data->field_0x38 =
       SQRT((float)((local_34 - local_40) * (local_34 - local_40) +
                   (local_3c - local_48) * (local_3c - local_48) +
                   (local_38 - local_44) * (local_38 - local_44))) * (float)_DAT_005d5168;
  return;
}
