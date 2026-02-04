// Name: core_bugs.cpp_CBugs_FUN_004270f0
// Address: 004270f0
// Address Range: [[004270f0, 004272ec]]
// Convention: __cdecl
// Signature: void __cdecl core_bugs_cpp_CBugs_FUN_004270f0(CBugs *this_ptr)

#include "nocturne.h"

void __cdecl core_bugs_cpp_CBugs_FUN_004270f0(CBugs *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  byte bVar8;
  int in_stack_00000008;
  int aiStackY_1030 [1008];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  uint local_18;
  
  bVar8 = 0;
  local_2c = *(int *)(in_stack_00000008 + 0x2c);
  *(uint *)(in_stack_00000008 + 0x34) = 0;
  *(uint *)(in_stack_00000008 + 0x2c) = *(uint *)(in_stack_00000008 + 0x30);
  local_30 = (this_ptr->model).part_visibility_flags + 0xf;
  local_20 = 0;
  do {
    piVar5 = local_30 + *(int *)(in_stack_00000008 + 0x2c) * 10;
    local_28 = *(int *)(*(int *)((this_ptr->model).part_visibility_flags[0] + 0x2234) + 4 +
                       *(int *)(in_stack_00000008 + 0x2c) * 0xc);
    iVar6 = 0;
    iVar4 = 0;
    local_24 = piVar5;
    if (0 < *piVar5) {
      iVar2 = 0;
      do {
        iVar1 = piVar5[2];
        local_1c = *(int *)(*(int *)((this_ptr->model).part_visibility_flags[0] + 0x2234) +
                            iVar1 * 0xc + 4);
        local_18 = 1;
        if ((local_20 != 0) ||
           ((iVar3 = iVar2, iVar1 != local_2c &&
            ((*(int *)(in_stack_00000008 + 0x3c) < 1 || (local_28 <= local_1c)))))) {
          iVar3 = iVar2 + 4;
          iVar6 = iVar6 + 1;
          *(int *)(&stack0xffffff98 + iVar2) = iVar1;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
        iVar2 = iVar3;
      } while (iVar4 < *local_24);
    }
  } while ((iVar6 < 1) && (local_20 = local_20 + 1, local_20 < 2));
  if (0 < *(int *)(in_stack_00000008 + 0x3c)) {
    *(int *)(in_stack_00000008 + 0x3c) = *(int *)(in_stack_00000008 + 0x3c) + -1;
  }
  if (iVar6 < 1) {
    *(int *)(in_stack_00000008 + 0x30) = local_2c;
    if (local_2c < 0) {
      *(uint *)(in_stack_00000008 + 0x30) = *(uint *)(in_stack_00000008 + 0x2c);
    }
  }
  else {
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,iVar6 + -1);
    *(uint *)(in_stack_00000008 + 0x30) = *(uint *)(&stack0xffffff98 + iVar4 * 4);
  }
  iVar4 = *(int *)((this_ptr->model).part_visibility_flags[0] + 0x2234);
  piVar5 = (int *)(iVar4 + *(int *)(in_stack_00000008 + 0x2c) * 0xc);
  piVar7 = piVar5 + (uint)bVar8 * -2 + 1;
  local_3c = *piVar5;
  *(int *)((int)&stack0xffffffc8 + (uint)bVar8 * -8) = *piVar7;
  *(int *)((int)&stack0xffffffcc + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       piVar7[(uint)bVar8 * -2 + 1];
  piVar5 = (int *)(iVar4 + *(int *)(in_stack_00000008 + 0x30) * 0xc);
  piVar7 = piVar5 + (uint)bVar8 * -2 + 1;
  local_48 = *piVar5;
  *(int *)((int)&stack0xffffffbc + (uint)bVar8 * -8) = *piVar7;
  *(int *)((int)&stack0xffffffc0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       piVar7[(uint)bVar8 * -2 + 1];
  *(float *)(in_stack_00000008 + 0x38) =
       SQRT((float)((local_34 - local_40) * (local_34 - local_40) +
                   (local_3c - local_48) * (local_3c - local_48) +
                   (local_38 - local_44) * (local_38 - local_44))) * (float)0.00390625;
  return;
}
