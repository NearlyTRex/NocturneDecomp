// Name: core_set.cpp_free3DSLights_FUN_00571550
// Address: 00571550
// Address Range: [[00571550, 00571567]]
// Convention: __cdecl
// Signature: void core_set.cpp_free3DSLights_FUN_00571550(C3DSLight * * array)

#include "nocturne.h"

void __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,200,&g_C3DSLightTypeInfo);
  return;
}
