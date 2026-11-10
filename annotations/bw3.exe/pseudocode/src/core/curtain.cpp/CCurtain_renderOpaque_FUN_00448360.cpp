// Name: core_curtain.cpp_CCurtain_renderOpaque_FUN_00448360
// Address: 00448360
// Address Range: [[00448360, 0044837c]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_00448360(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_00448360(CCurtain *this_ptr)

{
  int iVar1;
  
  if (this_ptr->opacity < 0xfde9) {
    return 0;
  }
  iVar1 = core_curtain_cpp_CCurtain_renderMesh_FUN_00448060(this_ptr);
  return iVar1;
}
