// Name: core_podmain.cpp_CDemonPod_ctor_FUN_00551b00
// Address: 00551b00
// Address Range: [[00551b00, 00551b17]]
// Convention: __cdecl
// Signature: CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod *this_ptr)

#include "nocturne.h"

CDemonPod * __cdecl core_podmain_cpp_CDemonPod_ctor_FUN_00551b00(CDemonPod *this_ptr)

{
  CDemonPod *pCVar1;
  
  pCVar1 = (CDemonPod *)engine_pod_cpp_CPod_ctor_FUN_00550980(&this_ptr->base);
  (pCVar1->base).vtable = (CPod_vtable *)&g_CDemonPodVTable;
  return pCVar1;
}
