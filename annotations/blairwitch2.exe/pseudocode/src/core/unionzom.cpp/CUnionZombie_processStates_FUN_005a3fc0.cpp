// Name: core_unionzom.cpp_CUnionZombie_processStates_FUN_005a3fc0
// Address: 005a3fc0
// Address Range: [[005a3fc0, 005a4071]]
// Convention: __cdecl
// Signature: void __cdecl core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(CUnionZombie *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_unionzom_cpp_CUnionZombie_processStates_FUN_005a3fc0(CUnionZombie *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"VanishAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"VanishAttack"),
       iVar1 != 0)) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x180))(this_ptr,delta_time);
      return;
    }
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"MeleeAttack");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"MeleeAttack"),
     iVar1 != 0)) {
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x184))(this_ptr,delta_time);
    return;
  }
  return;
}
