// Name: core_vampboss.cpp_CVampireBoss_summonBats_FUN_005834b0
// Address: 005834b0
// Address Range: [[005834b0, 00583510]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_005834b0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_005834b0(CVampireBoss *this_ptr)

{
  CTVBat *this_ptr_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"?voicusummon.wav" + 1);
  for (iVar1 = 0; iVar1 < g_CDemonSetPtr->actor_count; iVar1 = iVar1 + 1) {
    this_ptr_00 = (CTVBat *)
                  core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)((int)g_CDemonSetPtr->actors + iVar2),
                             g_CTVBatClassInfo.name_hash);
    if ((this_ptr_00 != (CTVBat *)0x0) && (this_ptr_00->follow_orders != 0)) {
      core_tvbat_cpp_CTVBat_orderAttack_FUN_00581260(this_ptr_00);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
