// Name: core_curtain.cpp_CCurtain_renderOpaque_FUN_0044b340
// Address: 0044b340
// Address Range: [[0044b340, 0044b35c]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044b340(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044b340(CCurtain *this_ptr)

{
  int iVar1;
  
  if (this_ptr->opacity < 0xfde9) {
    return 0;
  }
  iVar1 = core_curtain_cpp_CCurtain_renderMesh_FUN_0044b060(this_ptr);
  return iVar1;
}
