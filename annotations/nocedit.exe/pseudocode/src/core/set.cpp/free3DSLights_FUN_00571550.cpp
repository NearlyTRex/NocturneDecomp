// Name: core_set.cpp_free3DSLights_FUN_00571550
// Address: 00571550
// Address Range: [[00571550, 00571567]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight **array)

#include "nocturne.h"

void __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight **array)

{
  __arrfini(array,200,&g_C3DSLightTypeInfo);
  return;
}
