// Name: core_icepick.cpp_CIcePick_performMeleeAttack_FUN_004bb3c0
// Address: 004bb3c0
// Address Range: [[004bb3c0, 004bb4bc]]
// Convention: __cdecl
// Signature: void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_icepick_cpp_CIcePick_performMeleeAttack_FUN_004bb3c0(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint local_6c;
  uint local_68;
  uint local_40;
  int local_38;
  int local_34;
  byte local_30 [12];
  byte local_24 [12];
  int local_18;
  uint local_14;
  
  uVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                    (param_1 + 0x150,local_24,param_2);
  iVar4 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_30,uVar1);
  iVar3 = 0;
  local_18 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar4) {
        if (local_18 == 0) {
          return;
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"icepick-punch?.wav");
        return;
      }
      iVar2 = *(int *)(0x01E57284 + 0x14ecb4 + iVar3);
      if (iVar2 != param_1) break;
LAB_004bb419:
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    }
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&local_6c);
    local_68 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x42b40000,0x43020000);
    local_40 = 0x3f000000;
    local_6c = 0xffffffff;
    local_38 = param_1;
    local_34 = param_1;
    local_14 = local_68;
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xf8))(iVar2,local_30,0x3f800000,&local_6c);
    if (iVar2 == 0) goto LAB_004bb419;
    local_18 = 1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  } while( true );
}
