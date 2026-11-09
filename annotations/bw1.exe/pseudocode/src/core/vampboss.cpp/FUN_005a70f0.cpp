// Name: core_vampboss.cpp_FUN_005a70f0
// Address: 005a70f0
// Address Range: [[005a70f0, 005a7150]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005a70f0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_005a70f0(CVampireBoss *this_ptr)

{
  CTVBat *this_ptr_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"?voicusummon.wav" + 1);
  for (iVar1 = 0; iVar1 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar1 = iVar1 + 1) {
    this_ptr_00 = (CTVBat *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar2),
                             g_CTVBatClassInfo.name_hash);
    if ((this_ptr_00 != (CTVBat *)0x0) && (*(int *)&this_ptr_00->field_0xc410 != 0)) {
      core_tvbat_cpp_FUN_005a4eb0(this_ptr_00);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
