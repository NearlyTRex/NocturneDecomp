// Name: core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
// Address: 0040b6e0
// Address Range: [[0040b6e0, 0040b765]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(char *string_buffer,char *localization_key)

#include "nocturne.h"

void __cdecl
core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(char *string_buffer,char *localization_key)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char local_134 [300];
  
  pcVar5 = local_134;
  pcVar3 = g_LocalizationTemplate;
  pcVar4 = local_134;
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = (char *)((int)pcVar4 + 4);
  }
  if (localization_key != (char *)0x0) {
    do {
      cVar1 = *localization_key;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = localization_key[1];
      localization_key = localization_key + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  pcVar4 = " !LOCALIZE!";
  iVar2 = -1;
  pcVar3 = local_134;
  do {
    pcVar5 = pcVar3;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar3 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_actor_cpp_archiveString_FUN_0040b5c0(string_buffer,local_134);
  return;
}
