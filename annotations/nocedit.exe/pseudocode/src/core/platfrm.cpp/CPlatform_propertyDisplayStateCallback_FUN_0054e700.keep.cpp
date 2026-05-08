// Name: core_platfrm.cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700
// Address: 0054e700
// MANUAL RECONSTRUCTION
// Address Range: [[0054e700, 0054e758]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700(CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayStateCallback_FUN_0054e700(CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

{
  CPlatform *pCVar3;
  char *pcVar2;

  pCVar3 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  if (pCVar3->state == PLATFORM_STATE_TYPE_AT_START) {
    pcVar2 = "At start";
  }
  else if (pCVar3->state == PLATFORM_STATE_TYPE_AT_END) {
    pcVar2 = "At end";
  }
  else {
    pcVar2 = "WTF";
  }
  strcpy(output_buffer, pcVar2);
  return;
}
