// Name: core_flies.cpp_FUN_004ccd20
// Address: 004ccd20
// Address Range: [[004ccd20, 004ccd3a]]
// Convention: __cdecl
// Signature: SFly * core_flies.cpp_FUN_004ccd20(SFly * this_ptr)

#include "nocturne.h"

SFly * __cdecl core_flies_cpp_FUN_004ccd20(SFly *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->unk + 4,4,&g_CVectorTypeInfo);
  return (SFly *)((int)pvVar1 + -4);
}
