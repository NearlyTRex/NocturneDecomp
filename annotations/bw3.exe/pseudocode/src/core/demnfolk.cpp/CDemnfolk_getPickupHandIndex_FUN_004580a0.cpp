// Name: core_demnfolk.cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0
// Address: 004580a0
// Address Range: [[004580a0, 0045813c]]
// Convention: __cdecl
// Signature: int __cdecl core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(CDemnfolk *this_ptr,int object_shape_type)

#include "nocturne.h"

int __cdecl core_demnfolk_cpp_CDemnfolk_getPickupHandIndex_FUN_004580a0(CDemnfolk *this_ptr,int object_shape_type)

{
  int iVar1;
  
  if ((object_shape_type != 2) &&
     (iVar1 = _stricmp
                        ((this_ptr->base).base.model.model_name,"jeff.dfm"), iVar1 == 0)) {
    return -1;
  }
  iVar1 = _strnicmp
                    ((this_ptr->base).base.model.model_name,&DAT_005ba83f,3);
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
