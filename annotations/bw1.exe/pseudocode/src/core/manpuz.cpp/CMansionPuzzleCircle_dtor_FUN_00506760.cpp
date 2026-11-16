// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_00506760
// Address: 00506760
// Address Range: [[00506760, 005067ad]]
// Convention: __cdecl
// Signature: CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_00506760(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

CMansionPuzzleCircle * __cdecl core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_00506760(CMansionPuzzleCircle *this_ptr,uint flags)

{
  CMansionPuzzleCircle *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CMansionPuzzleCircle *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
