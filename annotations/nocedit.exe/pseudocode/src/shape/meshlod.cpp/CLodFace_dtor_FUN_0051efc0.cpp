// Name: shape_meshlod.cpp_CLodFace_dtor_FUN_0051efc0
// Address: 0051efc0
// Address Range: [[0051efc0, 0051efd5]]
// Convention: __cdecl
// Signature: CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr,uint flags)

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_dtor_FUN_0051efc0(CLodFace *this_ptr,uint flags)

{
  CVector3f *pCVar1;
  
  pCVar1 = core_cloth_cpp_CVector3f_arrdtor_FUN_0043e460(this_ptr->edge_perpendiculars,0);
  return (CLodFace *)(pCVar1 + -7);
}
