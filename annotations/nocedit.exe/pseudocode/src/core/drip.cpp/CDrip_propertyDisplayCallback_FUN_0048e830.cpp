// Name: core_drip.cpp_CDrip_propertyDisplayCallback_FUN_0048e830
// Address: 0048e830
// Address Range: [[0048e830, 0048e8cb]]
// Convention: __cdecl
// Signature: void __cdecl core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830(CDrip *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x0048e859) */

void __cdecl core_drip_cpp_CDrip_propertyDisplayCallback_FUN_0048e830(CDrip *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  EDripType EVar2;
  CDrip *pCVar3;
  char *pcVar3;
  
  pCVar3 = (CDrip *)core_actor_cpp_castToClassHash_FUN_0040c790
                              (&this_ptr->base,g_CDripClassInfo.name_hash);
  EVar2 = pCVar3->type;
  if (EVar2 == DRIP_TYPE_WATER) {
    pcVar3 = "Water";
    do {
      cVar1 = *pcVar3;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  }
  if (EVar2 < DRIP_TYPE_STALAG) {
    pcVar3 = "Lava";
    do {
      cVar1 = *pcVar3;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  }
  if (EVar2 == DRIP_TYPE_STALAG) {
    pcVar3 = "Stalagwhatever";
    do {
      cVar1 = *pcVar3;
      *output_buffer = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      output_buffer[1] = cVar1;
      output_buffer = output_buffer + 2;
    } while (cVar1 != '\0');
    return;
  }
  return;
}
