// Name: core_event.cpp_FUN_0048b86e
// Address: 0048b86e
// Address Range: [[0048b86e, 0048b90c]]
// Convention: unknown
// Signature: undefined4 core_event_cpp_FUN_0048b86e(char *param_1)

#include "nocturne.h"

uint core_event_cpp_FUN_0048b86e(char *param_1)

{
  int iVar1;
  
  iVar1 = _strcmp(param_1,&DAT_005bddb8);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _strcmp(param_1,&DAT_005bddba);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _strcmp(param_1,&DAT_005bddbd);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _strcmp(param_1,&DAT_005bddc0);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _strcmp(param_1,&DAT_005bddc3);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _strcmp(param_1,&DAT_005bddc5);
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
