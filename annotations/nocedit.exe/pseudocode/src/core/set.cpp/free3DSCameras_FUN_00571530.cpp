// Name: core_set.cpp_free3DSCameras_FUN_00571530
// Address: 00571530
// Address Range: [[00571530, 00571547]]
// Convention: __cdecl
// Signature: C3DSCamera * __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera *objs)

#include "nocturne.h"

C3DSCamera * __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera *objs)

{
  C3DSCamera *pCVar1;
  
  pCVar1 = (C3DSCamera *)__arrfini(objs,0xfa,&g_C3DSCameraTypeInfo);
  return pCVar1;
}
