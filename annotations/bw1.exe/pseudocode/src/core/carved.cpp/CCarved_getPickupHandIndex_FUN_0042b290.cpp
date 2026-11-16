// Name: core_carved.cpp_CCarved_getPickupHandIndex_FUN_0042b290
// Address: 0042b290
// Address Range: [[0042b290, 0042b32c]]
// Convention: __cdecl
// Signature: int __cdecl core_carved_cpp_CCarved_getPickupHandIndex_FUN_0042b290(CCarved *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_carved_cpp_CCarved_getPickupHandIndex_FUN_0042b290(CCarved *this_ptr,int object_shape_type)

{
  int iVar1;
  
  if ((object_shape_type != 2) &&
     (iVar1 = _stricmp
                        ((this_ptr->base).base.model.model_name,"jeff.dfm"), iVar1 == 0)) {
    return -1;
  }
  iVar1 = _strnicmp
                    ((this_ptr->base).base.model.model_name,&DAT_005d55ea,3);
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
