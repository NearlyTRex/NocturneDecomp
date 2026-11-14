// Name: core_curtain.cpp_CCurtain_renderTransparent_FUN_0044c240
// Address: 0044c240
// Address Range: [[0044c240, 0044c24f]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0044c240(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderTransparent_FUN_0044c240(CCurtain *this_ptr)

{
  int iVar1;
  
  if (65000 < this_ptr->opacity) {
    return 0;
  }
  iVar1 = core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(this_ptr);
  return iVar1;
}
