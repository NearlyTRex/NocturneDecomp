// Name: core_dracbrid.cpp_ctor_FUN_00486d30
// Address: 00486d30
// Address Range: [[00486d30, 00486d4a]]
// Convention: __cdecl
// Signature: SFreaky * core_dracbrid.cpp_ctor_FUN_00486d30(SFreaky * this_ptr)

#include "nocturne.h"

SFreaky * __cdecl core_dracbrid_cpp_ctor_FUN_00486d30(SFreaky *this_ptr)

{
  void *pvVar1;
  
  pvVar1 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (this_ptr->unk2,4,&g_CVectorTypeInfo);
  return (SFreaky *)((int)pvVar1 + -0x20);
}
