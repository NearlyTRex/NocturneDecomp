// Name: core_union.cpp_CUnion_processStates_FUN_005a4c50
// Address: 005a4c50
// Address Range: [[005a4c50, 005a4d40]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processStates_FUN_005a4c50(CUnion *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_processStates_FUN_005a4c50(CUnion *this_ptr,float delta_time,int mode)

{
  SStateMachine *pSVar1;
  int iVar2;
  
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(&(this_ptr->base).base.state_machine,"RangeAttack");
  }
  else {
    core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0
              ((CBasicEnemy *)this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar2 = core_muzzle_cpp_FUN_0059daa0
                          (&(this_ptr->base).base.state_machine,"RangeAttack"), iVar2 != 0)
       ) {
      core_union_cpp_FUN_005a4e90(this_ptr,delta_time);
      return;
    }
  }
  pSVar1 = &(this_ptr->base).base.state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"MeleeAttack");
  }
  else if ((mode == 1) &&
          (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"MeleeAttack"), iVar2 != 0)) {
    core_union_cpp_FUN_005a4fe0(this_ptr,delta_time);
    return;
  }
  pSVar1 = &(this_ptr->base).base.state_machine;
  if (mode == 0) {
    core_muzzle_cpp_FUN_0059d650(pSVar1,"SupportStand");
    return;
  }
  if ((mode == 1) &&
     (iVar2 = core_muzzle_cpp_FUN_0059daa0(pSVar1,"SupportStand"), iVar2 != 0)) {
    core_union_cpp_FUN_005a5130(this_ptr,delta_time);
    return;
  }
  return;
}
