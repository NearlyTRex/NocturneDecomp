// Name: core_ghostchi.cpp_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a997b]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9890(int param_1,float param_2)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9890(int param_1,float param_2)

{
  CMotionController *this_ptr;
  SMotion *pSVar1;
  int iVar2;
  int iVar3;
  
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x264),param_2);
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    this_ptr = (CMotionController *)(param_1 + 0x2b4);
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr);
    if (pSVar1->state_index != 0xb) {
      pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0(this_ptr);
      if (pSVar1->state_index != 0xc) {
        core_muzzle_cpp_FUN_0059d7f0(param_1 + 0x10af8,"BurnComplete","Death");
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0xc,1);
        return;
      }
    }
  }
  pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)(param_1 + 0x2b4));
  if (pSVar1->state_index == 0xb) {
    *(uint *)(param_1 + 0x10a28) = 0;
  }
  iVar3 = param_1 + 0x10af8;
  iVar2 = core_muzzle_cpp_FUN_0059daa0(iVar3,"Death");
  if (iVar2 == 0) {
    iVar2 = core_muzzle_cpp_FUN_0059daa0(iVar3,"Animation");
    if (iVar2 == 0) {
      iVar3 = core_muzzle_cpp_FUN_0059daa0(iVar3,&DAT_005f0987);
      if (iVar3 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
        return;
      }
    }
  }
  return;
}
