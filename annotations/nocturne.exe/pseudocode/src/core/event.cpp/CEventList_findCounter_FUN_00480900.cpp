// Name: core_event.cpp_CEventList_findCounter_FUN_00480900
// Address: 00480900
// Address Range: [[00480900, 0048094a]]
// Convention: unknown
// Signature: int core_event_cpp_CEventList_findCounter_FUN_00480900(int param_1,char *param_2)

#include "nocturne.h"

int core_event_cpp_CEventList_findCounter_FUN_00480900(int param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x337c)) {
    str1 = (char *)(param_1 + 0x3380);
    do {
      iVar1 = _stricmp(str1,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x20;
    } while (iVar2 < *(int *)(param_1 + 0x337c));
  }
  return -1;
}
