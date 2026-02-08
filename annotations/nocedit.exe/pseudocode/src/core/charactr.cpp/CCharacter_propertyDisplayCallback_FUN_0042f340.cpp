// Name: core_charactr.cpp_CCharacter_propertyDisplayCallback_FUN_0042f340
// Address: 0042f340
// Address Range: [[0042f340, 0042f3d4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340 (CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

#include "nocturne.h"

void __cdecl
core_charactr_cpp_CCharacter_propertyDisplayCallback_FUN_0042f340
          (CCharacter *this_ptr,CActorProperty *property,char *output_buffer)

{
  char cVar1;
  CDemonActor *pCVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar4 = "(none)";
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (&this_ptr->base,g_CCharacterClassInfo.name_hash);
  pcVar5 = output_buffer;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = pCVar2->create_event;
  pcVar4 = output_buffer;
  do {
    while (pCVar2[0x1b].unk1 == 0) {
      pCVar2 = (CDemonActor *)&(pCVar2->orient_matrix).m[0].z;
      if (pCVar2 == (CDemonActor *)(pcVar5 + 0x10)) {
        return;
      }
    }
    if (output_buffer < pcVar4) {
      iVar3 = _sprintf(pcVar4,", ");
      pcVar4 = pcVar4 + iVar3;
    }
    iVar3 = _sprintf(pcVar4,"%s",pCVar2[0x1b].unk1);
    pcVar4 = pcVar4 + iVar3;
    pCVar2 = (CDemonActor *)&(pCVar2->orient_matrix).m[0].z;
  } while (pCVar2 != (CDemonActor *)(pcVar5 + 0x10));
  return;
}
