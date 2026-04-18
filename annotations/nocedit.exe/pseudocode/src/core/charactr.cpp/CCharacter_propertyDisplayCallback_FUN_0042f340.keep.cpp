// Name: core_charactr.cpp_CCharacter_propertyDisplayCallback_FUN_0042f340
// Address: 0042f340
// MANUAL RECONSTRUCTION
// Address Range: [[0042f340, 0042f3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340(CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340(CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CCharacter *pCVar2;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = "(none)";
  pCVar2 = (CCharacter *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CCharacterClassInfo.name_hash);
  pcVar4 = output_buffer;
  strcpy(pcVar4,pcVar3);
  pcVar4 = (pCVar2->base).create_event + 0x10;
  pcVar3 = output_buffer;
  do {
    while (pCVar2->carry_hands[0].carry_actor == (CDemonActor *)0x0) {
      pCVar2 = (CCharacter *)&(pCVar2->base).orient_matrix.m[0].z;
      if (pCVar2 == (CCharacter *)pcVar4) {
        return;
      }
    }
    if (output_buffer < pcVar3) {
      iVar2 = _sprintf(pcVar3,", ");
      pcVar3 = pcVar3 + iVar2;
    }
    iVar2 = _sprintf
                      (pcVar3,"%s",pCVar2->carry_hands[0].carry_actor->actor_name);
    pcVar3 = pcVar3 + iVar2;
    pCVar2 = (CCharacter *)&(pCVar2->base).orient_matrix.m[0].z;
  } while (pCVar2 != (CCharacter *)pcVar4);
  return;
}
