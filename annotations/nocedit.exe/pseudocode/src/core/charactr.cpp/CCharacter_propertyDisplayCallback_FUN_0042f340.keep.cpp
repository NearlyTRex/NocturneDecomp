// Name: core_charactr.cpp_CCharacter_propertyDisplayCallback_FUN_0042f340
// Address: 0042f340
// MANUAL RECONSTRUCTION
// Address Range: [[0042f340, 0042f3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340(CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340(CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

{
  CCharacter *pCVar2;
  int iVar2;
  int i;
  char *pcVar3;

  pCVar2 = (CCharacter *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CCharacterClassInfo.name_hash);
  strcpy(output_buffer,"(none)");
  pcVar3 = output_buffer;
  for (i = 0; i < 2; i = i + 1) {
    if (pCVar2->carry_hands[i].carry_actor != (CDemonActor *)0x0) {
      if (output_buffer < pcVar3) {
        iVar2 = _sprintf(pcVar3,", ");
        pcVar3 = pcVar3 + iVar2;
      }
      iVar2 = _sprintf(pcVar3,"%s",pCVar2->carry_hands[i].carry_actor->actor_name);
      pcVar3 = pcVar3 + iVar2;
    }
  }
  return;
}
