// Name: core_vampboss.cpp_FUN_005a71e0
// Address: 005a71e0
// Address Range: [[005a71e0, 005a7240]]
// Convention: __cdecl
// Signature: void __cdecl core_vampboss_cpp_FUN_005a71e0(CVampireBoss *this_ptr)

#include "nocturne.h"

void __cdecl core_vampboss_cpp_FUN_005a71e0(CVampireBoss *this_ptr)

{
  CEmitter *this_ptr_00;
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"voicusummon.wav");
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < *(int *)&g_CDemonSetPtr->field_0x14d164; iVar2 = iVar2 + 1) {
    this_ptr_00 = (CEmitter *)
                  core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + iVar1),
                             g_CEmitterClassInfo.name_hash);
    if ((this_ptr_00 != (CEmitter *)0x0) && (*(int *)&this_ptr_00->field_0x158 == 2)) {
      core_emitter_cpp_FUN_0049f0e0(this_ptr_00);
    }
    iVar1 = iVar1 + 4;
  }
  return;
}
