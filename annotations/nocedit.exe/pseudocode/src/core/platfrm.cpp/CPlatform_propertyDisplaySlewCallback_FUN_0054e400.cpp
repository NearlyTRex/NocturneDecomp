// Name: core_platfrm.cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400
// Address: 0054e400
// Address Range: [[0054e400, 0054e462]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400 (CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_platfrm_cpp_CPlatform_propertyDisplaySlewCallback_FUN_0054e400
          (CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CPlatform *pCVar2;
  char *pcVar2;
  
  pCVar2 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  switch(pCVar2->platform_type) {
  default:
    pcVar2 = "Disabled";
    break;
  case PLATFORM_TYPE_START:
    pcVar2 = "Start";
    break;
  case PLATFORM_TYPE_END:
    pcVar2 = "End";
    break;
  case PLATFORM_TYPE_BOTH:
    pcVar2 = "Both";
  }
  do {
    cVar1 = *pcVar2;
    *output_buffer = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    output_buffer[1] = cVar1;
    output_buffer = output_buffer + 2;
  } while (cVar1 != '\0');
  return;
}
