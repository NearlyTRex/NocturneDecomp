// Name: core_ghostchi.cpp_FUN_005a9890
// Address: 005a9890
// Address Range: [[005a9890, 005a997b]]
// Convention: unknown
// Signature: void core_ghostchi_cpp_FUN_005a9890(int param_1,float param_2)

#include "nocturne.h"

void core_ghostchi_cpp_FUN_005a9890(int param_1,float param_2)

{
  CMotionController *this_ptr;
  int iVar1;
  int iVar2;
  
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x264),param_2);
  if (0.0 < *(float *)(param_1 + 0x11430)) {
    this_ptr = (CMotionController *)(param_1 + 0x2b4);
    iVar1 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar1 + 0x24) != 0xb) {
      iVar1 = core_motion_cpp_FUN_005035c0(this_ptr);
      if (*(int *)(iVar1 + 0x24) != 0xc) {
        unkaddr_0059d350_cpp_FUN_0059d7f0
                  (param_1 + 0x10af8,"BurnComplete","Death");
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0xc,1);
        return;
      }
    }
  }
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0xb) {
    *(uint *)(param_1 + 0x10a28) = 0;
  }
  iVar1 = param_1 + 0x10af8;
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar1,"Death");
  if (iVar2 == 0) {
    iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar1,"Animation");
    if (iVar2 == 0) {
      iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(iVar1,&DAT_005f0987);
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
        return;
      }
    }
  }
  return;
}
