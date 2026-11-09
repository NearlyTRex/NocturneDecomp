// Name: core_actor.cpp_FUN_00408a80
// Address: 00408a80
// Address Range: [[00408a80, 00408abf] [00408ac1, 00408ad1]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_FUN_00408a80(CDemonActor *this_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_FUN_00408a80(CDemonActor *this_ptr)

{
  CPathMap *this_ptr_00;
  
  *(uint *)&this_ptr->field_0x114 = 0;
  *(uint *)&this_ptr->field_0x11c = 0;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(this_ptr);
  this_ptr_00 = (CPathMap *)(**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xcc))(this_ptr);
  if (this_ptr_00 == (CPathMap *)0x0) {
    return;
  }
  core_path_cpp_CPathMap_updateIfNeeded_FUN_005121a0
            (this_ptr_00,(CVector3f *)&this_ptr->field_0x20,1);
  return;
}
