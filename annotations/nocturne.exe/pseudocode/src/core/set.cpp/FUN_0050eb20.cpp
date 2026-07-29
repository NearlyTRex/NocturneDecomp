// Name: core_set.cpp_FUN_0050eb20
// Address: 0050eb20
// Address Range: [[0050eb20, 0050eb37]]
// Convention: __cdecl
// Signature: C3DSLight * __cdecl core_set_cpp_FUN_0050eb20(C3DSLight *objs,uint flags)

#include "nocturne.h"

C3DSLight * __cdecl core_set_cpp_FUN_0050eb20(C3DSLight *objs,uint flags)

{
  C3DSLight *pCVar1;
  
  pCVar1 = (C3DSLight *)__arrfini(objs,200,&g_C3DSLightTypeInfo_005a1990);
  return pCVar1;
}
