// Name: core_event.cpp_FUN_004aa270
// Address: 004aa270
// Address Range: [[004aa270, 004aa29c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_FUN_004aa270(int param_1,int param_2,char *param_3)

#include "nocturne.h"

int __cdecl core_event_cpp_FUN_004aa270(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_02d0a460;
  do {
    cVar1 = *param_3;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') {
      return -1;
    }
    cVar1 = param_3[1];
    param_3 = param_3 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  return -1;
}
