// Name: core_basicene.cpp_CBasicEnemy_processStates_FUN_0059e8c0
// Address: 0059e8c0
// Address Range: [[0059e8c0, 0059ebb1]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(CBasicEnemy *this_ptr,CDemonActor *param_2,int param_3)

#include "nocturne.h"

void __cdecl core_basicene_cpp_CBasicEnemy_processStates_FUN_0059e8c0(CBasicEnemy *this_ptr,CDemonActor *param_2,int param_3)

{
  int iVar1;
  CVector3f *unaff_ESI;
  
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Nothing");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Nothing");
    if (iVar1 != 0) {
      core_basicene_cpp_FUN_0059ebc0(this_ptr,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Animation");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Animation");
    if (iVar1 != 0) {
      (*(this_ptr->base).base.base.vtable._ub[1].pickup)((CDemonActor *)this_ptr,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Alert");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Alert");
    if (iVar1 != 0) {
      core_basicene_cpp_FUN_0059ec10(this_ptr,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Patrol");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Patrol");
    if (iVar1 != 0) {
      core_basicene_cpp_FUN_0059ee00(this_ptr,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Chasing");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Chasing");
    if (iVar1 != 0) {
      (*(this_ptr->base).base.base.vtable._ub[1].drop)((CDemonActor *)this_ptr,param_2,unaff_ESI);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"Death");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"Death");
    if (iVar1 != 0) {
      (*(this_ptr->base).base.base.vtable._ub[1].onDropped)
                ((CDemonActor *)this_ptr,(CVector3f *)param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"AlertInvisible");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"AlertInvisible");
    if (iVar1 != 0) {
      core_basicene_cpp_FUN_0059ed50(this_ptr,param_2);
      return;
    }
  }
  if (param_3 == 0) {
    core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,"SlamAnimation");
  }
  else if (param_3 == 1) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,"SlamAnimation");
    if (iVar1 != 0) {
      return;
    }
  }
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar1 = core_muzzle_cpp_FUN_0059daa0(&this_ptr->state_machine,&DAT_005ef95b);
      if (iVar1 != 0) {
        (*(((this_ptr->base).base.base.vtable._uh)->_uh).reset)((CHero *)this_ptr);
        return;
      }
    }
    return;
  }
  core_muzzle_cpp_FUN_0059d650(&this_ptr->state_machine,&DAT_005ef956);
  return;
}
