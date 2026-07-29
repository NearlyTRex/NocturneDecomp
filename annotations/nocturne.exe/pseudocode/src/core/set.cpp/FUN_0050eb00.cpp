// Name: core_set.cpp_FUN_0050eb00
// Address: 0050eb00
// Address Range: [[0050eb00, 0050eb17]]
// Convention: __cdecl
// Signature: C3DSCamera * __cdecl core_set_cpp_FUN_0050eb00(C3DSCamera *objs,uint flags)

#include "nocturne.h"

C3DSCamera * __cdecl core_set_cpp_FUN_0050eb00(C3DSCamera *objs,uint flags)

{
  C3DSCamera *pCVar1;
  
  pCVar1 = (C3DSCamera *)__arrfini(objs,0xfa,&g_C3DSCameraTypeInfo_005a1970);
  return pCVar1;
}
