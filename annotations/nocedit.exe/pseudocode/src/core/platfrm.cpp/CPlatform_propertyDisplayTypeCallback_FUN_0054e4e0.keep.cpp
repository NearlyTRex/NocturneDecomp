// Name: core_platfrm.cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0
// Address: 0054e4e0
// MANUAL RECONSTRUCTION
// Address Range: [[0054e4e0, 0054e52d]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0(CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_propertyDisplayTypeCallback_FUN_0054e4e0(CPlatform *this_ptr,CActorProperty *property,char *output_buffer)

{
  CPlatform *pCVar2;
  char *pcVar2;

  pCVar2 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CPlatformClassInfo.name_hash);
  if (pCVar2->course_filename[0] == '\0') {
    pcVar2 = "(Manual course)";
  }
  else {
    pcVar2 = pCVar2->course_filename;
  }
  strcpy(output_buffer, pcVar2);
  return;
}
