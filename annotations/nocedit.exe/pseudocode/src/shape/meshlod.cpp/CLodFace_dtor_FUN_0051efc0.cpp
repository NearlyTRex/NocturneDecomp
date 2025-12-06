// Name: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
// Address: 0051efc0
// Address Range: [[0051efc0, 0051efd5]]
// Convention: __cdecl
// Signature: CLodFace * shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0(CLodFace * this_ptr)

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr)

{
  int iVar1;
  
  iVar1 = core_cloth_cpp_freeVectors_FUN_0043e460((CVector3f **)this_ptr->edge_perpendiculars);
  return (CLodFace *)(iVar1 + -0x54);
}
