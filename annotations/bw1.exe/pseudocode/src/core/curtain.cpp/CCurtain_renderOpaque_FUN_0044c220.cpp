// Name: core_curtain.cpp_CCurtain_renderOpaque_FUN_0044c220
// Address: 0044c220
// Address Range: [[0044c220, 0044c23c]]
// Convention: __cdecl
// Signature: int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044c220(CCurtain *this_ptr)

#include "nocturne.h"

int __cdecl core_curtain_cpp_CCurtain_renderOpaque_FUN_0044c220(CCurtain *this_ptr)

{
  int iVar1;
  
  if (*(int *)&this_ptr->field_0x17c < 0xfde9) {
    return 0;
  }
  iVar1 = core_curtain_cpp_CCurtain_renderMesh_FUN_0044bf20(this_ptr);
  return iVar1;
}
