// Name: core_baal.cpp_FUN_00597700
// Address: 00597700
// Address Range: [[00597700, 0059780c]]
// Convention: unknown
// Signature: void core_baal_cpp_FUN_00597700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_baal_cpp_FUN_00597700(int param_1)

{
  int iVar1;
  byte bVar2;
  float afStackY_102c [1015];
  float local_44;
  float local_40;
  CVector3f local_38;
  CVector3f local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  if (*(float *)(param_1 + 0xcde0) <= 0.0) {
    iVar1 = *(int *)(param_1 + 0xcde4);
    local_2c.x = *(float *)(iVar1 + 0x20) - *(float *)(param_1 + 0x20);
    local_2c.y = *(float *)(iVar1 + 0x24) - *(float *)(param_1 + 0x24);
    local_2c.z = *(float *)(iVar1 + 0x28) - *(float *)(param_1 + 0x28);
    local_20 = local_2c.x;
    local_1c = local_2c.y;
    local_18 = local_2c.z;
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&local_2c,&local_38);
    local_44 = local_38.x;
    *(uint *)((int)&stack0xffffffc0 + (uint)bVar2 * -8) =
         *(uint *)((int)&local_38 + (uint)bVar2 * -8 + 4);
    *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)((int)&local_38 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
    local_14 = core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0(local_40 - *(float *)(param_1 + 0x34))
    ;
    if (ABS(local_14) < (float)_DAT_005d9689) {
      iVar1 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
      if (iVar1 < 0x19) {
        iVar1 = 3;
      }
      else if ((iVar1 < 0x19) || (0x31 < iVar1)) {
        if ((iVar1 < 0x32) || (0x4a < iVar1)) {
          iVar1 = 3;
        }
        else {
          iVar1 = 5;
        }
      }
      else {
        iVar1 = 4;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),iVar1,1);
      return;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),0,1);
  return;
}
