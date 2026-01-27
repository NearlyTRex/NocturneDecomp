// Name: core_cloth.cpp_SClothVertex_ctor_FUN_0043e420
// Address: 0043e420
// Address Range: [[0043e420, 0043e43e]]
// Convention: __cdecl
// Signature: SClothVertex * core_cloth.cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex * this_ptr)

#include "nocturne.h"

SClothVertex * __cdecl core_cloth_cpp_SClothVertex_ctor_FUN_0043e420(SClothVertex *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr[0xd].unk + 0xf,3,&g_CVectorTypeInfo);
  return (SClothVertex *)((int)pvVar1 + -0xec);
}
