// Name: core_curtain.cpp_CCurtain_renderOpaque_FUN_0043f610
// Address: 0043f610
// Address Range: [[0043f610, 0043f62c]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0043f610(CCurtain *this_ptr)

{
  int iVar1;
  
  if (this_ptr->opacity < 0xfde9) {
    return 0;
  }
  iVar1 = core_curtain_cpp_CCurtain_renderMesh_FUN_0043f330(this_ptr);
  return iVar1;
}
