// Name: core_stranger.cpp_CStranger_FUN_005c5f10
// Address: 005c5f10
// Address Range: [[005c5f10, 005c6215]]
// Convention: unknown
// Signature: void core_stranger_cpp_CStranger_FUN_005c5f10(void)

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c5f10(uint param_1) */

void core_stranger_cpp_CStranger_FUN_005c5f10(void)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x1fc34) = 0;
  if (*(int *)(in_stack_00000004 + 0xbe38) == 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x2598) != 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x1fc38) != 0) {
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x1fbd4) == 0) {
    return;
  }
  iVar4 = *(int *)(in_stack_00000004 + 0x1fc2c);
  if (iVar4 == 0) {
    iVar4 = *(int *)(in_stack_00000004 + 0x24f8);
LAB_005c5f6e:
    if ((iVar4 != 0) && (uVar2 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x6c))(), uVar2 != 0)) {
      iVar4 = 0;
      while( true ) {
        iVar6 = *(int *)(in_stack_00000004 + 0x1fc3c) + 1;
        *(int *)(in_stack_00000004 + 0x1fc3c) = iVar6;
        if ((iVar6 < 0) || (1 < iVar6)) {
          *(uint *)(in_stack_00000004 + 0x1fc3c) = 0;
        }
        uVar5 = *(int *)(in_stack_00000004 + 0x1fc3c) + 0xc;
        uVar3 = 0;
        if (0xb < uVar5) {
          if (uVar5 < 0xd) {
            uVar3 = 1;
          }
          else if (uVar5 == 0xd) {
            uVar3 = 2;
          }
        }
        if ((uVar3 & uVar2) != 0) break;
        iVar4 = iVar4 + 1;
        if (0x13 < iVar4) {
          return;
        }
      }
      *(uint *)(in_stack_00000004 + 0x2a90) = 0;
      *(uint *)(in_stack_00000004 + 0x1fc38) = 7;
      *(int *)(in_stack_00000004 + 0x2a8c) = *(int *)(in_stack_00000004 + 0x1fc3c) + 0xc;
      return;
    }
  }
  else if (*(int *)(iVar4 + 0x2e0) == 7) goto LAB_005c5f6e;
  if (*(int *)(in_stack_00000004 + 0x1fc2c) == 0) {
    return;
  }
  iVar4 = *(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0);
  if (iVar4 == 3) {
    return;
  }
  if ((*(int *)(in_stack_00000004 + 0x1f734) == 0) && (iVar4 == 0)) {
    iVar4 = in_stack_00000004 + 0x1fbe8;
    iVar6 = in_stack_00000004 + 0x1fc08;
    if (*(int *)(in_stack_00000004 + 0x1fc30) != 0) {
      iVar6 = iVar4;
      iVar4 = in_stack_00000004 + 0x1fc08;
    }
    if ((*(int *)(iVar6 + 0x1c) == 2) && (*(int *)(iVar4 + 0x1c) != 2)) {
      *(uint *)(in_stack_00000004 + 0x1fc30) = (uint)(*(int *)(in_stack_00000004 + 0x1fc30) == 0);
    }
  }
  if (*(int *)(in_stack_00000004 + 0x1fc2c) == 0) {
switchD_005c5ffd_caseD_8:
  }
  else {
    switch(*(uint *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0)) {
    case 0:
    case 5:
      break;
    case 1:
      break;
    case 2:
      break;
    default:
      goto switchD_005c5ffd_caseD_8;
    case 4:
      break;
    case 7:
    }
  }
  fVar1 = (float)core_charactr_cpp_CCharacter_FUN_0042e840();
  if ((float)0.98999999999999999 <= fVar1) {
    iVar4 = in_stack_00000004 + 0x1fbe8;
    if ((*(int *)(in_stack_00000004 + 0x1fc30) != 0) &&
       (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) == 0)) {
      iVar4 = in_stack_00000004 + 0x1fc08;
    }
    if (((1.0 <= *(float *)(iVar4 + 0x14)) && (*(float *)(iVar4 + 0x10) <= 0.0)) &&
       (iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 0xfc))(),
       iVar4 != 0)) {
      if (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2e0) == 0) {
        core_stranger_cpp_CStranger_FUN_005c06b0();
        *(uint *)(in_stack_00000004 + 0x1fc30) = (uint)(*(int *)(in_stack_00000004 + 0x1fc30) == 0);
      }
      *(uint *)(in_stack_00000004 + 0x1fc34) = 0;
      iVar4 = (**(code **)(*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154) + 0xf8))();
      if (iVar4 != 0) {
        *(uint *)(in_stack_00000004 + 0x1fc34) = 1;
      }
      core_stranger_cpp_CStranger_FUN_005c06b0();
      if (*(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x2dc) == 2) {
        *(uint *)(in_stack_00000004 + 0x2a90) = 0;
        *(uint *)(in_stack_00000004 + 0x2a8c) = 8;
        return;
      }
    }
  }
  return;
}
