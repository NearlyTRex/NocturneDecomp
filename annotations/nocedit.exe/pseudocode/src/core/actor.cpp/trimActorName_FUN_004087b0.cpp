// Name: core_actor.cpp_trimActorName_FUN_004087b0
// Address: 004087b0
// Address Range: [[004087b0, 00408814]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_trimActorName_FUN_004087b0(CDemonActor *actor_ptr)

#include "nocturne.h"

void __cdecl core_actor_cpp_trimActorName_FUN_004087b0(CDemonActor *actor_ptr)

{
  char *pcVar1;
  uint uVar2;
  SIZE_T n;
  CDemonActor *pCVar3;
  
  uVar2 = 0xffffffff;
  pCVar3 = actor_ptr;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = pCVar3->actor_name;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 1);
  } while (*pcVar1 != '\0');
  n = ~uVar2 - 1;
  if (0 < (int)n) {
    pcVar1 = actor_ptr->actor_name + n;
    do {
      if ((g_CharacterClassificationTable[(byte)(pcVar1[-1] + 1)] & 2) == 0) break;
      n = n - 1;
      pcVar1 = pcVar1 + -1;
    } while (0 < (int)n);
  }
  actor_ptr->actor_name[n] = '\0';
  while ((g_CharacterClassificationTable[(byte)(actor_ptr->actor_name[0] + 1)] & 2) != 0) {
    memmove(actor_ptr,actor_ptr->actor_name + 1,n);
    n = n - 1;
  }
  return;
}
