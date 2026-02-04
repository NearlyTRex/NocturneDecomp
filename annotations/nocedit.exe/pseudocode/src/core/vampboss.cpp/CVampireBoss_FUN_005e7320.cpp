// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7320
// Address: 005e7320
// Address Range: [[005e7320, 005e7380]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7320(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7320(CVampireBoss *this_ptr)

{
  CTVBat *this_ptr_00;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  (*((this_ptr->base).base.base.vtable._ub)->playSound)
            ((CDemonActor *)this_ptr,"voicusummon.wav");
  for (iVar1 = 0; iVar1 < (int)g_CDemonSetPtr->actor_list_ptr; iVar1 = iVar1 + 1) {
    this_ptr_00 = (CTVBat *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                             g_CTVBatClassInfo.name_hash);
    if ((this_ptr_00 != (CTVBat *)0x0) && (this_ptr_00->follow_orders != 0)) {
      core_tvbat_cpp_CTVBat_FUN_005e4d70(this_ptr_00);
    }
    iVar2 = iVar2 + 4;
  }
  return;
}
