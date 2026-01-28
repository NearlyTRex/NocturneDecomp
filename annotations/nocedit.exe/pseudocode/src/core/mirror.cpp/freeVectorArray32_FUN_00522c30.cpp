// Name: core_mirror.cpp_freeVectorArray32_FUN_00522c30
// Address: 00522c30
// Address Range: [[00522c30, 00522c44]]
// Convention: __cdecl
// Signature: void __cdecl core_mirror_cpp_freeVectorArray32_FUN_00522c30(CVector3f **array_ptr)

#include "nocturne.h"

void __cdecl core_mirror_cpp_freeVectorArray32_FUN_00522c30(CVector3f **array_ptr)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array_ptr,0x20,&g_CVectorTypeInfo);
  return;
}
