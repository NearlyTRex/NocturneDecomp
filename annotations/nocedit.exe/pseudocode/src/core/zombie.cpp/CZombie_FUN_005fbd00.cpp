// Name: core_zombie.cpp_CZombie_FUN_005fbd00
// Address: 005fbd00
// Address Range: [[005fbd00, 005fbd9c]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_FUN_005fbd00(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_FUN_005fbd00(CZombie *this_ptr)

{
  int iVar1;
  uint in_stack_00000008;
  
  if ((in_stack_00000008 != 2) &&
     (iVar1 = stricmp
                        ((this_ptr->base).base.model.model_name,"jeff.dfm"), iVar1 == 0)) {
    return -1;
  }
  iVar1 = strnicmp
                    ((this_ptr->base).base.model.model_name,"new",3);
  if (iVar1 == 0) {
    if (in_stack_00000008 < 2) {
      if (in_stack_00000008 != 1) {
        return -1;
      }
    }
    else if ((2 < in_stack_00000008) && (in_stack_00000008 != 3)) {
      return -1;
    }
  }
  else if (in_stack_00000008 < 2) {
    if (in_stack_00000008 != 1) {
      return -1;
    }
  }
  else {
    if (in_stack_00000008 < 3) {
      return 0;
    }
    if (in_stack_00000008 != 3) {
      return -1;
    }
  }
  return 1;
}
