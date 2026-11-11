// Name: core_robin.cpp_CRobin_processStates_FUN_005a60d0
// Address: 005a60d0
// Address Range: [[005a60d0, 005a6139]]
// Convention: __cdecl
// Signature: void __cdecl core_robin_cpp_CRobin_processStates_FUN_005a60d0(CRobin *this_ptr,float delta_time,int mode)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_robin_cpp_CRobin_processStates_FUN_005a60d0(CRobin *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&(this_ptr->base).base.state_machine,"MeleeAttack");
    return;
  }
  unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0
                        (&(this_ptr->base).base.state_machine,"MeleeAttack"), iVar1 != 0))
  {
    (*(this_ptr->base).base.base.base.base.vtable._ub[1].getInteractionInfo)
              ((CDemonActor *)this_ptr,(SInteractionInfo *)delta_time);
    return;
  }
  return;
}
