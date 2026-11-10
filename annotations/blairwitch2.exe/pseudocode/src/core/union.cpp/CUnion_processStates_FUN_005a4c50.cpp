// Name: core_union.cpp_CUnion_processStates_FUN_005a4c50
// Address: 005a4c50
// Address Range: [[005a4c50, 005a4d40]]
// Convention: __cdecl
// Signature: void __cdecl core_union_cpp_CUnion_processStates_FUN_005a4c50(CUnion *this_ptr,float delta_time,int mode)

#include "nocturne.h"

void __cdecl core_union_cpp_CUnion_processStates_FUN_005a4c50(CUnion *this_ptr,float delta_time,int mode)

{
  int iVar1;
  
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"RangeAttack");
  }
  else {
    unkafter_basicene_cpp_FUN_0059e8c0(this_ptr,delta_time,mode);
    if ((mode == 1) &&
       (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"RangeAttack"),
       iVar1 != 0)) {
      core_union_cpp_FUN_005a4e90(this_ptr,delta_time);
      return;
    }
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"MeleeAttack");
  }
  else if ((mode == 1) &&
          (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0
                             (&this_ptr->field_0x10af8,"MeleeAttack"), iVar1 != 0)) {
    core_union_cpp_FUN_005a4fe0(this_ptr,delta_time);
    return;
  }
  if (mode == 0) {
    unkaddr_0059d350_cpp_FUN_0059d650(&this_ptr->field_0x10af8,"SupportStand");
    return;
  }
  if ((mode == 1) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(&this_ptr->field_0x10af8,"SupportStand"),
     iVar1 != 0)) {
    core_union_cpp_FUN_005a5130(this_ptr,delta_time);
    return;
  }
  return;
}
