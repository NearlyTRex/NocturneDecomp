// Name: core_set.cpp_free3DSLights_FUN_00571550
// Address: 00571550
// Address Range: [[00571550, 00571567]]
// Convention: __cdecl
// Signature: C3DSLight * __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight *objs)

#include "nocturne.h"

C3DSLight * __cdecl core_set_cpp_free3DSLights_FUN_00571550(C3DSLight *objs)

{
  C3DSLight *pCVar1;
  
  pCVar1 = __arrfini(objs,200,&g_C3DSLightTypeInfo);
  return pCVar1;
}
