// Name: core_styldemo.cpp_FUN_005a0480
// Address: 005a0480
// Address Range: [[005a0480, 005a06bb]]
// Convention: unknown
// Signature: undefined4 core_styldemo_cpp_FUN_005a0480(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_styldemo_cpp_FUN_005a0480(int param_1,int param_2)

{
  SMotion *pSVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1068 [1015];
  uint local_80;
  float local_74;
  float local_70;
  float local_6c;
  uint local_68;
  float local_64;
  uint local_5c;
  float local_58;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  uint local_38;
  float local_2c;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  bVar3 = 0;
  if (0.0 < *(float *)(param_1 + 0xcde0)) {
    return 0;
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)(param_1 + 0x158));
  local_1c = pSVar1->state_index;
  local_18 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
  local_20 = local_18;
  local_14 = (float)param_2;
  if ((float)param_2 <= _DAT_005e84dc + (float)_DAT_005da54e) {
    iVar2 = *(int *)(param_1 + 0xcde4);
    local_74 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
    local_70 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
    local_6c = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
    local_2c = local_74;
    *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffff90 + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffff94 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffd4);
    local_68 = local_38;
    *(uint *)((int)&stack0xffffff9c + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8);
    *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_64 - *(float *)(param_1 + 0x34))
    ;
    if ((float)_DAT_005da556 <= ABS(local_14)) {
      return 0;
    }
    if (((local_1c == 8) || (local_1c == 9)) || (local_1c == 7)) {
      iVar2 = 10;
    }
    else {
      iVar2 = 3;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)(param_1 + 0x158),iVar2,1);
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0xcde4);
  local_44 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
  local_40 = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
  local_3c = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
  local_50 = local_44;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * 0xfffffffe * 4) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar3 * -8);
  *(uint *)(&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&stack0xffffffb0);
  local_5c = local_80;
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff84 + (uint)bVar3 * -8);
  *(uint *)(&stack0xffffffac + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_58 - *(float *)(param_1 + 0x34));
  if (((float)_DAT_005da556 <= ABS(local_14)) || (4 < local_18)) goto LAB_005a05d1;
  engine_console_cpp_CConsole_printf_FUN_00441ff0(g_CConsolePtr,"?Casting %d\n" + 1);
  switch(*(uint *)(param_1 + 0xdc90)) {
  case 0:
    iVar2 = 0xc;
    break;
  case 1:
    iVar2 = 0x15;
    break;
  case 2:
    iVar2 = 0x13;
    break;
  case 3:
    iVar2 = 0x18;
    break;
  default:
    goto switchD_005a05a1_default;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),iVar2,1);
switchD_005a05a1_default:
  iVar2 = *(int *)(param_1 + 0xdc90) + 1;
  *(int *)(param_1 + 0xdc90) = iVar2;
  if (3 < iVar2) {
    *(uint *)(param_1 + 0xdc90) = 0;
  }
LAB_005a05d1:
  if (4 < local_20) {
    return 0;
  }
  return 1;
}
