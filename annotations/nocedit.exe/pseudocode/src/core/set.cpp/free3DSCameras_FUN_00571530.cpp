// Name: core_set.cpp_free3DSCameras_FUN_00571530
// Address: 00571530
// Address Range: [[00571530, 00571547]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera **array)

#include "nocturne.h"

void __cdecl core_set_cpp_free3DSCameras_FUN_00571530(C3DSCamera **array)

{
  __arrfini(array,0xfa,&g_C3DSCameraTypeInfo);
  return;
}
