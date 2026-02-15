// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7390
// Address: 005e7390
// Address Range: [[005e7390, 005e7406]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7390(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7390(CVampireBoss *this_ptr)

{
  CDrip *this_ptr_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar2 = 0; iVar2 < g_CDemonSetPtr->actor_count; iVar2 = iVar2 + 1) {
    this_ptr_00 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040c790
                                     (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                                      g_CDripClassInfo.name_hash);
    if ((this_ptr_00 != (CDrip *)0x0) && (this_ptr_00->type == DRIP_TYPE_STALAG)) {
      iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(0.5);
      if (iVar1 == 0) {
        core_drip_cpp_CDrip_FUN_0048e6b0(this_ptr_00);
      }
    }
    iVar3 = iVar3 + 4;
  }
  return;
}
