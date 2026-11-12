// Name: core_manpuz.cpp_CMansionPuzzleCircle_dtor_FUN_00506760
// Address: 00506760
// Address Range: [[00506760, 005067ad]]
// Convention: unknown
// Signature: CMansionPuzzleCircle * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_00506760(CMansionPuzzleCircle *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CMansionPuzzleCircle * core_manpuz_cpp_CMansionPuzzleCircle_dtor_FUN_00506760(CMansionPuzzleCircle *this_ptr,uint flags)

{
  CMansionPuzzleCircle *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CMansionPuzzleCircleTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CMansionPuzzleCircle *)core_actor_cpp_CDemonActor_dtor_FUN_00408730(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
