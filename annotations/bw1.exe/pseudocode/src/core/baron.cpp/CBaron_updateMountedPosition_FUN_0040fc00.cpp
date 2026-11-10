// Name: core_baron.cpp_CBaron_updateMountedPosition_FUN_0040fc00
// Address: 0040fc00
// Address Range: [[0040fc00, 0040fce4]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_baron_cpp_CBaron_updateMountedPosition_FUN_0040fc00(CBaron *this_ptr,float delta_time)

{
  CDemonActor *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1038 [1015];
  CBaron *pCVar4;
  float *pfVar5;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  uint local_38;
  uint local_34;
  uint local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_14;
  
  bVar3 = 0;
  if (this_ptr->target_actor != (CDemonActor *)0x0) {
    local_14 = *(int *)&this_ptr->field_0x154;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0xc0000000;
    core_actor_cpp_FUN_00408ac0
              (this_ptr->target_actor,&stack0xffffffc8,&this_ptr->target_actor->orient);
    local_2c = local_44;
    (&stack0xffffffd8)[(uint)bVar3 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffc0 + (uint)bVar3 * -8);
    iVar2 = local_14;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffc4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    pCVar1 = this_ptr->target_actor;
    pfVar5 = &stack0xffffffe0;
    local_50 = (pCVar1->location).position.x + local_2c;
    local_4c = (pCVar1->location).position.y + local_28;
    local_48 = (pCVar1->location).position.z + local_24;
    local_20 = local_50;
    *(uint *)((int)&stack0xffffffe4 + (uint)bVar3 * 0xfffffffe * 4) =
         *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8);
    pCVar4 = this_ptr;
    *(uint *)(&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    (**(code **)(iVar2 + 0x68))(pCVar4,pfVar5);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c600
                      (this_ptr->target_actor,g_CCharacterClassInfo.name_hash);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar2 == 2) {
        core_baron_cpp_CBaron_detachFromOwner_FUN_0040fbc0(this_ptr,this_ptr->target_actor);
        return;
      }
    }
  }
  return;
}
