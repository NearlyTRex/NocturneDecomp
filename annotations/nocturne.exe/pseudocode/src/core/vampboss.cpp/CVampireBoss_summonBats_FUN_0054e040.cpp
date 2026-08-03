// Name: core_vampboss.cpp_CVampireBoss_summonBats_FUN_0054e040
// Address: 0054e040
// Address Range: [[0054e040, 0054e0a0]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_summonBats_FUN_0054e040(CVampireBoss *this_ptr)

{
  CTVBat *this_ptr_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar1 = 0; iVar1 < g_CDemonSet_PTR_005be368->actor_count; iVar1 = iVar1 + 1) {
    this_ptr_00 = (CTVBat *)
                  core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(CDemonActor **)((int)g_CDemonSet_PTR_005be368->actors + iVar2),
                             g_CTVBatActorType_02dd110c.name_hash);
    if ((this_ptr_00 != (CTVBat *)0x0) && (this_ptr_00->follow_orders != 0)) {
      core_tvbat_cpp_FUN_0054bfc0(this_ptr_00);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
