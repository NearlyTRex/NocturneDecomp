// Name: core_zombie.cpp_CZombie_getPickupHandIndex_FUN_005fbd00
// Address: 005fbd00
// Address Range: [[005fbd00, 005fbd9c]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005fbd00(CZombie *this_ptr,int object_shape_type)

{
  int iVar1;
  
  if ((object_shape_type != 2) &&
     (iVar1 = _stricmp
                        ((this_ptr->base).base.model.model_name,"jeff.dfm"), iVar1 == 0)) {
    return -1;
  }
  iVar1 = _strnicmp
                    ((this_ptr->base).base.model.model_name,"new",3);
  if (iVar1 == 0) {
    if ((uint)object_shape_type < 2) {
      if (object_shape_type != 1) {
        return -1;
      }
    }
    else if ((2 < (uint)object_shape_type) && (object_shape_type != 3)) {
      return -1;
    }
  }
  else if ((uint)object_shape_type < 2) {
    if (object_shape_type != 1) {
      return -1;
    }
  }
  else {
    if ((uint)object_shape_type < 3) {
      return 0;
    }
    if (object_shape_type != 3) {
      return -1;
    }
  }
  return 1;
}
