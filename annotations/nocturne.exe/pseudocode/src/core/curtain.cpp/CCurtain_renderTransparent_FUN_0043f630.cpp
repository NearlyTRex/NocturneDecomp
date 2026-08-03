// Name: core_curtain.cpp_CCurtain_renderTransparent_FUN_0043f630
// Address: 0043f630
// Address Range: [[0043f630, 0043f63f]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0043f630(CCurtain *this_ptr)

{
  int iVar1;
  
  if (65000 < this_ptr->opacity) {
    return 0;
  }
  iVar1 = core_curtain_cpp_FUN_0043f330(this_ptr);
  return iVar1;
}
