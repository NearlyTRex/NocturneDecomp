// Name: core_spawner.cpp_CSpawner_setup_FUN_00563910
// Address: 00563910
// Address Range: [[00563910, 00563968]]
// Convention: __cdecl
// Signature: void __cdecl core_spawner_cpp_CSpawner_setup_FUN_00563910(CSpawner *this_ptr)

#include "nocturne.h"

void __cdecl core_spawner_cpp_CSpawner_setup_FUN_00563910(CSpawner *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar6;
  char *pcVar5;
  
  bVar6 = 0;
  core_actor_cpp_CDemonActor_setup_FUN_00408890(&this_ptr->base);
  pcVar5 = this_ptr->spawn_name;
  pcVar3 = pcVar5;
  do {
    cVar1 = (this_ptr->base).actor_name[0];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = (this_ptr->base).actor_name[1];
    this_ptr = (CSpawner *)((this_ptr->base).actor_name + 2);
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = (char *)0x5d54a8;
  iVar2 = -1;
  do {
    pcVar4 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar4 = pcVar5 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar4;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + -1;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
