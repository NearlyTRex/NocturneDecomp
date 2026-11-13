// Name: core_prye.cpp_CPrye_dtor_FUN_00527300
// Address: 00527300
// Address Range: [[00527300, 0052734d]]
// Convention: __cdecl
// Signature: CPrye * __cdecl core_prye_cpp_CPrye_dtor_FUN_00527300(CPrye *this_ptr,uint flags)

#include "nocturne.h"

CPrye * __cdecl core_prye_cpp_CPrye_dtor_FUN_00527300(CPrye *this_ptr,uint flags)

{
  CPrye *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CPryeTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = (CPrye *)core_hero_cpp_FUN_004d2620(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005a30c4(pCVar1);
  return pCVar1;
}
