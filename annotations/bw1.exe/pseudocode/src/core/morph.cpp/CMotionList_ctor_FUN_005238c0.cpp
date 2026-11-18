// Name: core_morph.cpp_CMotionList_ctor_FUN_005238c0
// Address: 005238c0
// Address Range: [[005238c0, 005238ee]]
// Convention: __cdecl
// Signature: CMotionList * __cdecl core_morph_cpp_CMotionList_ctor_FUN_005238c0(CMotionList *this_ptr)

#include "nocturne.h"

CMotionList * __cdecl core_morph_cpp_CMotionList_ctor_FUN_005238c0(CMotionList *this_ptr)

{
  this_ptr->state_count = 0;
  this_ptr->motion_count = 0;
  memset(this_ptr->motions,0,0x1c200);
  return this_ptr;
}
