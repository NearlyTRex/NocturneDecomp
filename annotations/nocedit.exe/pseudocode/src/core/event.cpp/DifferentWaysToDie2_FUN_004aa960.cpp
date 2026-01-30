// Name: core_event.cpp_DifferentWaysToDie2_FUN_004aa960
// Address: 004aa960
// Address Range: [[004aa960, 004aaa4e]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_DifferentWaysToDie2_FUN_004aa960(char *param_1,int *param_2)

#include "nocturne.h"

int __cdecl core_event_cpp_DifferentWaysToDie2_FUN_004aa960(char *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = stricmp(param_1,"generic");
  if (iVar1 == 0) {
    *param_2 = 100;
    return 1;
  }
  iVar1 = stricmp(param_1,"bullet");
  if (iVar1 == 0) {
    *param_2 = 0x65;
    return 1;
  }
  iVar1 = stricmp(param_1,"Fire");
  if (iVar1 == 0) {
    *param_2 = 0x66;
    return 1;
  }
  iVar1 = stricmp(param_1,"Blade");
  if (iVar1 == 0) {
    *param_2 = 0x67;
    return 1;
  }
  iVar1 = stricmp(param_1,"Stake");
  if (iVar1 == 0) {
    *param_2 = 0x68;
    return 1;
  }
  iVar1 = stricmp(param_1,"Gas");
  if (iVar1 == 0) {
    *param_2 = 0x69;
    return 1;
  }
  iVar1 = stricmp(param_1,"electrocute");
  if (iVar1 == 0) {
    *param_2 = 0x6a;
    return 1;
  }
  return 0;
}
