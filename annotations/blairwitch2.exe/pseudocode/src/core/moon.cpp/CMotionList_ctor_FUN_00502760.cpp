// Name: core_moon.cpp_CMotionList_ctor_FUN_00502760
// Address: 00502760
// Address Range: [[00502760, 0050278e]]
// Convention: __cdecl
// Signature: CMotionList * __cdecl core_moon_cpp_CMotionList_ctor_FUN_00502760(CMotionList *this_ptr)

#include "nocturne.h"

CMotionList * __cdecl core_moon_cpp_CMotionList_ctor_FUN_00502760(CMotionList *this_ptr)

{
  this_ptr->state_count = 0;
  this_ptr->motion_count = 0;
  memset(this_ptr->motions,0,0x1b580);
  return this_ptr;
}
