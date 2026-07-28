// Name: core_haystack.cpp_CHaystack_checkMeleeHit_FUN_004b3f40
// Address: 004b3f40
// Address Range: [[004b3f40, 004b3fd8]]
// Convention: __cdecl
// Signature: void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CCharacter *param_1,int param_2)

#include "nocturne.h"

void __cdecl core_haystack_cpp_CHaystack_checkMeleeHit_FUN_004b3f40(CCharacter *param_1,int param_2)

{
  CCharacter *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  SDamageInfo SStack_64;
  CVector3f local_28;
  CVector3f local_1c;
  
  input_local_point =
       core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                 (&param_1->model,&local_28,param_2);
  iVar2 = 0;
  iVar1 = 0;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&param_1->base,&local_1c,input_local_point);
  while( true ) {
    if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar2) break;
    this_ptr = *(CCharacter **)(iVar1 + 0x14ecb4 + 0x01E57284);
    if (this_ptr != param_1) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(&SStack_64);
      SStack_64.damage_amount = 10.0;
      SStack_64.attacker = &param_1->base;
      SStack_64.wielder = &param_1->base;
      (*(((this_ptr->base).vtable._uc)->_uc).isGrabbable)(this_ptr,(CDemonActor *)&local_1c);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 4;
  }
  return;
}
