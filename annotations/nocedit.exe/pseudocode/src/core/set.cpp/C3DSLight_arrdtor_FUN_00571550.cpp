// Name: core_set.cpp_C3DSLight_arrdtor_FUN_00571550
// Address: 00571550
// Address Range: [[00571550, 00571567]]
// Convention: __cdecl
// Signature: C3DSLight * __cdecl core_set_cpp_C3DSLight_arrdtor_FUN_00571550(C3DSLight *objs,uint flags)

#include "nocturne.h"

C3DSLight * __cdecl core_set_cpp_C3DSLight_arrdtor_FUN_00571550(C3DSLight *objs,uint flags)

{
  C3DSLight *pCVar1;
  
  pCVar1 = (C3DSLight *)__arrfini(objs,200,&g_C3DSLightTypeInfo);
  return pCVar1;
}
