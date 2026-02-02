// Name: core_platfrm.cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480
// Address: 0054e480
// Address Range: [[0054e480, 0054e4df]]
// Convention: __cdecl
// Signature: int __cdecl core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform *this_ptr)

#include "nocturne.h"

int __cdecl core_platfrm_cpp_CPlatform_propertyActionSlewCallback_FUN_0054e480(CPlatform *this_ptr)

{
  CPlatform *pCVar1;
  
  pCVar1 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  switch(pCVar1->platform_type) {
  case PLATFORM_TYPE_DISABLED:
    pCVar1->platform_type = PLATFORM_TYPE_START;
    break;
  case PLATFORM_TYPE_START:
    pCVar1->platform_type = PLATFORM_TYPE_END;
    break;
  case PLATFORM_TYPE_END:
    pCVar1->platform_type = PLATFORM_TYPE_BOTH;
    break;
  default:
    pCVar1->platform_type = PLATFORM_TYPE_DISABLED;
    return 1;
  }
  return 1;
}
