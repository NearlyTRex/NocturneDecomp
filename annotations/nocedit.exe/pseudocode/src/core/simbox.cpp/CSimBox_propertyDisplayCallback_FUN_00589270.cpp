// Name: core_simbox.cpp_CSimBox_propertyDisplayCallback_FUN_00589270
// Address: 00589270
// Address Range: [[00589270, 005892c8]]
// Convention: __cdecl
// Signature: void __cdecl core_simbox_cpp_CSimBox_propertyDisplayCallback_FUN_00589270(CSimBox *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_simbox_cpp_CSimBox_propertyDisplayCallback_FUN_00589270(CSimBox *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CSimBox *pCVar3;
  char *pcVar2;
  
  pCVar3 = (CSimBox *)
           core_actor_cpp_castToClassHash_FUN_0040c790(&this_ptr->base,g_CSimBoxClassInfo.name_hash)
  ;
  if (pCVar3->type == 0) {
    pcVar2 = "Demo";
  }
  else if (pCVar3->type == 1) {
    pcVar2 = "Coffin Lid";
  }
  else {
    pcVar2 = "Unknown";
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
