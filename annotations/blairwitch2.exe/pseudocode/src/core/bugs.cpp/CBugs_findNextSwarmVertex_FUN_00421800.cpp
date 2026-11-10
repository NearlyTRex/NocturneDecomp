// Name: core_bugs.cpp_CBugs_findNextSwarmVertex_FUN_00421800
// Address: 00421800
// Address Range: [[00421800, 004219fc]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00421800(CBugs *this_ptr,SBug *bug_data)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bugs_cpp_CBugs_findNextSwarmVertex_FUN_00421800(CBugs *this_ptr,SBug *bug_data)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  SSwarmVertex *pSVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
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
  
  bVar9 = 0;
  local_2c = *(int *)&bug_data->field_0x2c;
  *(uint *)&bug_data->field_0x34 = 0;
  *(uint *)&bug_data->field_0x2c = *(uint *)&bug_data->field_0x30;
  local_30 = this_ptr->swarm_vertices;
  local_20 = 0;
  do {
    pSVar5 = local_30 + *(int *)&bug_data->field_0x2c * 0x28;
    local_28 = *(int *)(*(int *)&this_ptr->deformable_model_ptr->field_0x2234 + 4 +
                       *(int *)&bug_data->field_0x2c * 0xc);
    iVar7 = 0;
    iVar6 = 0;
    local_24 = pSVar5;
    if (0 < *(int *)pSVar5) {
      iVar3 = 0;
      do {
        iVar2 = *(int *)(pSVar5 + 8);
        local_1c = *(int *)(*(int *)&this_ptr->deformable_model_ptr->field_0x2234 + iVar2 * 0xc + 4)
        ;
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar4 = iVar3, iVar2 != local_2c &&
            ((*(int *)&bug_data->field_0x3c < 1 || (local_28 <= local_1c)))))) {
          iVar4 = iVar3 + 4;
          iVar7 = iVar7 + 1;
          *(int *)(&stack0xffffff98 + iVar3) = iVar2;
        }
        iVar6 = iVar6 + 1;
        pSVar5 = pSVar5 + 4;
        iVar3 = iVar4;
      } while (iVar6 < *(int *)local_24);
    }
  } while ((iVar7 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < *(int *)&bug_data->field_0x3c) {
    *(int *)&bug_data->field_0x3c = *(int *)&bug_data->field_0x3c + -1;
  }
  if (iVar7 < 1) {
    *(int *)&bug_data->field_0x30 = local_2c;
    if (local_2c < 0) {
      *(uint *)&bug_data->field_0x30 = *(uint *)&bug_data->field_0x2c;
    }
  }
  else {
    iVar6 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,iVar7 + -1);
    *(uint *)&bug_data->field_0x30 = *(uint *)(&stack0xffffff98 + iVar6 * 4);
  }
  iVar6 = *(int *)&this_ptr->deformable_model_ptr->field_0x2234;
  piVar1 = (int *)(iVar6 + *(int *)&bug_data->field_0x2c * 0xc);
  piVar8 = piVar1 + (uint)bVar9 * -2 + 1;
  local_3c = *piVar1;
  *(int *)((int)&stack0xffffffc8 + (uint)bVar9 * -8) = *piVar8;
  *(int *)((int)&stack0xffffffcc + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       piVar8[(uint)bVar9 * -2 + 1];
  piVar1 = (int *)(iVar6 + *(int *)&bug_data->field_0x30 * 0xc);
  piVar8 = piVar1 + (uint)bVar9 * -2 + 1;
  local_48 = *piVar1;
  *(int *)((int)&stack0xffffffbc + (uint)bVar9 * -8) = *piVar8;
  *(int *)((int)&stack0xffffffc0 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
       piVar8[(uint)bVar9 * -2 + 1];
  *(float *)&bug_data->field_0x38 =
       SQRT((float)((local_34 - local_40) * (local_34 - local_40) +
                   (local_3c - local_48) * (local_3c - local_48) +
                   (local_38 - local_44) * (local_38 - local_44))) * (float)_DAT_005cca79;
  return;
}
