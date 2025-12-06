// Name: shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00
// Address: 0051ef00
// Address Range: [[0051ef00, 0051ef1a]]
// Convention: __cdecl
// Signature: CLodFace * shape_meshlod.cpp_CLodFace_ctor_FUN_0051ef00(CLodFace * this_ptr)

#include "nocturne.h"

CLodFace * __cdecl shape_meshlod_cpp_CLodFace_ctor_FUN_0051ef00(CLodFace *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->edge_perpendiculars,3,&g_CVectorTypeInfo);
  return (CLodFace *)((int)pvVar1 + -0x54);
}
