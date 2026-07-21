// Name: core_scat.cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50
// Address: 004fca50
// Address Range: [[004fca50, 004fcadd]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_scat_cpp_CScat_advanceMotionWithGrabDamage_FUN_004fca50(int param_1,float param_2)

{
  int iVar1;
  byte auStack_50 [4];
  uint local_4c;
  int local_1c;
  int local_18;
  
  do {
    iVar1 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&param_2);
    if (iVar1 == 100) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(param_1 + 0x2590),_DAT_01bcdef4);
      if (iVar1 != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(auStack_50);
        local_4c = 0x40a00000;
        local_1c = param_1;
        local_18 = param_1;
        (**(code **)(*(int *)(iVar1 + 0x14c) + 0x100))(iVar1,auStack_50);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar1);
    }
  } while (0.0 < param_2);
  return;
}
