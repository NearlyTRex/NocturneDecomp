// Name: core_boxactor.cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310
// Address: 00423310
// Address Range: [[00423310, 00423379]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310 (CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_boxactor_cpp_CLightActor_propertyDisplayTypeCallback_FUN_00423310
          (CLightActor *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CLightActor *pCVar2;
  char *pcVar2;
  
  pCVar2 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     ((CDemonActor *)this_ptr,g_CLightActorClassInfo.name_hash);
  switch(pCVar2->light_actor_type) {
  case LIGHT_TYPE_CUSTOM:
    pcVar2 = "Custom";
    break;
  case LIGHT_TYPE_FLASHLIGHT:
    pcVar2 = "Flashlight";
    break;
  case LIGHT_TYPE_LANTERN:
    pcVar2 = "Lantern";
    break;
  case LIGHT_TYPE_GLOBE:
    pcVar2 = "Globe";
    break;
  default:
    pcVar2 = "???";
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
