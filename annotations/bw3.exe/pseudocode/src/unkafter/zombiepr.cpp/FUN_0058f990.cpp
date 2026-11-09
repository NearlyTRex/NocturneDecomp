// Name: unkafter_zombiepr.cpp_FUN_0058f990
// Address: 0058f990
// Address Range: [[0058f990, 0058fb11]]
// Convention: unknown
// Signature: void unkafter_zombiepr_cpp_FUN_0058f990(int param_1,int param_2)

#include "nocturne.h"

void unkafter_zombiepr_cpp_FUN_0058f990(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd0dc));
  unkafter_zombiepr_cpp_FUN_0058f630(param_1,param_2);
  if ((*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0e4) * 4) == 0) &&
     (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd0ec) * 4) == 0)) {
    *(uint *)(param_2 + 4) = 0x461c3f9a;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    if ((*(int *)(pSVar3 + 0x24) != 5) && (*(int *)(pSVar3 + 0x24) != 4)) {
      *(uint *)(param_1 + 0x2540) = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,4,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,1,0);
      if (*(int *)(param_1 + 0xd0d8) == 0) {
        sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd0d4));
        uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"@mobster-die-?.wav" + 1);
        *(uint *)(param_1 + 0xd0d8) = 1;
        *(uint *)(param_1 + 0xd0d4) = uVar4;
        core_enemy_cpp_FUN_00489b80(param_1,param_2);
        return;
      }
    }
    goto LAB_0058fa47;
  }
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)(param_2 + 0x34),g_CTommyGunClassInfo.name_hash);
  if (iVar2 == 0) {
LAB_0058fa23:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,3,1);
  }
  else {
    iVar2 = core_actor_cpp_FUN_0040cf40(0.5);
    if (iVar2 != 0) goto LAB_0058fa23;
  }
  iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 0xd0d4));
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"mobster-hit-?.wav");
    *(uint *)(param_1 + 0xd0d4) = uVar4;
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
LAB_0058fa47:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
