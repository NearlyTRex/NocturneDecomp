// Name: core_charactr.cpp_CCharacter_FUN_0042e670
// Address: 0042e670
// Address Range: [[0042e670, 0042e831]]
// Convention: unknown
// Signature: undefined core_charactr.cpp_CCharacter_FUN_0042e670()

#include "nocturne.h"

void core_charactr_cpp_CCharacter_FUN_0042e670(void)

{
  float fVar1;
  int iVar2;
  CMotionList *this_ptr;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_1c;
  int local_14;
  
  if (*(char *)(in_stack_00000004 + 0x23b8) != '\0') {
    iVar5 = 0;
    iVar2 = in_stack_00000004;
    do {
      iVar2 = iVar2 + 0x50;
      iVar4 = iVar5 * 0x50 + in_stack_00000004;
      do {
        iVar3 = iVar4 + 4;
        *(uint *)(iVar4 + 0xb7e4) = 0x501502f9;
        iVar4 = iVar3;
      } while (iVar3 != iVar2);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x14);
    this_ptr = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                         ((CMotionController *)(in_stack_00000004 + 0x158));
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000008 + 0x2628)) {
      do {
        piVar6 = (int *)(iVar2 * 0x38 + in_stack_00000008 + 0x262c);
        iVar5 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
        piVar6[0xb] = iVar5;
        piVar6[0xc] = this_ptr->motions[iVar5].frame_count;
        piVar6[0xd] = (int)((float)piVar6[0xc] / this_ptr->motions[piVar6[0xb]].fps);
        if (-1 < piVar6[10]) {
          *(int *)(in_stack_00000008 + *piVar6 * 0x50 + 0xb7e4 + piVar6[1] * 4) = piVar6[0xd];
        }
        if (piVar6[10] < 1) {
          *(int *)(in_stack_00000008 + piVar6[1] * 0x50 + 0xb7e4 + *piVar6 * 4) = piVar6[0xd];
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_stack_00000008 + 0x2628));
    }
    iVar5 = 0;
    iVar2 = in_stack_00000008;
    do {
      iVar4 = iVar2 + iVar5;
      iVar5 = iVar5 + 4;
      iVar2 = iVar2 + 0x50;
      *(uint *)(iVar4 + 0xb7e4) = 0;
    } while (iVar5 != 0x50);
    local_1c = in_stack_00000008;
    do {
      iVar5 = 0;
      local_14 = local_1c;
      iVar2 = in_stack_00000008;
      do {
        iVar2 = iVar2 + 0x50;
        iVar3 = iVar5 * 0x50 + in_stack_00000008;
        iVar4 = local_1c;
        do {
          fVar1 = *(float *)(local_14 + 0xb7e4) + *(float *)(iVar3 + 0xb7e4);
          if (fVar1 < *(float *)(iVar4 + 0xb7e4)) {
            *(float *)(iVar4 + 0xb7e4) = fVar1;
          }
          iVar3 = iVar3 + 4;
          iVar4 = iVar4 + 4;
        } while (iVar3 != iVar2);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 4;
      } while (iVar5 < 0x14);
      local_1c = local_1c + 0x50;
    } while (local_1c != in_stack_00000008 + 0x640);
  }
  return;
}
