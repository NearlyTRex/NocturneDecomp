// Name: core_twigzomb.cpp_CTwigZombie_processStates_FUN_005a28a0
// Address: 005a28a0
// Address Range: [[005a28a0, 005a2902]]
// Convention: __cdecl
// Signature: void __cdecl core_twigzomb_cpp_CTwigZombie_processStates_FUN_005a28a0(CTwigZombie *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_twigzomb_cpp_CTwigZombie_processStates_FUN_005a28a0(CTwigZombie *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"Attacking");
    return;
  }
  unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"Attacking"),
     iVar1 != 0)) {
    core_twigzomb_cpp_FUN_005a2ac0(this_ptr,delta_time);
    return;
  }
  return;
}
