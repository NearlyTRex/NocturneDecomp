// Name: core_event.cpp_DifferentWaysToDie_FUN_004aa7d0
// Address: 004aa7d0
// Address Range: [[004aa7d0, 004aa95a]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(char *param_1,int *param_2)

#include "nocturne.h"

int __cdecl core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(char *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = stricmp(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  iVar1 = stricmp(param_1,"drown");
  if (iVar1 == 0) {
    *param_2 = 1;
    return 1;
  }
  iVar1 = stricmp(param_1,"fall");
  if (iVar1 == 0) {
    *param_2 = 2;
    return 1;
  }
  iVar1 = stricmp(param_1,"explode");
  if (iVar1 == 0) {
    *param_2 = 3;
    return 1;
  }
  iVar1 = stricmp(param_1,"fallApart");
  if (iVar1 == 0) {
    *param_2 = 4;
    return 1;
  }
  iVar1 = stricmp(param_1,"shatter");
  if (iVar1 == 0) {
    *param_2 = 5;
    return 1;
  }
  iVar1 = stricmp(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 6;
    return 1;
  }
  iVar1 = stricmp(param_1,"gas");
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = stricmp(param_1,"Chopped");
  if (iVar1 == 0) {
    *param_2 = 7;
    return 1;
  }
  iVar1 = stricmp(param_1,"Crushed");
  if (iVar1 == 0) {
    *param_2 = 8;
    return 1;
  }
  iVar1 = stricmp(param_1,"Impale");
  if (iVar1 == 0) {
    *param_2 = 9;
    return 1;
  }
  iVar1 = stricmp(param_1,"Fire");
  if (iVar1 == 0) {
    *param_2 = 10;
    return 1;
  }
  return 0;
}
