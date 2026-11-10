// Name: unkaddr_0059c270.cpp_FUN_0059c380
// Address: 0059c380
// Address Range: [[0059c380, 0059c3b1]]
// Convention: unknown
// Signature: void unkaddr_0059c270_cpp_FUN_0059c380(undefined4 param_1,undefined4 param_2,int param_3,char *param_4)

#include "nocturne.h"

void unkaddr_0059c270_cpp_FUN_0059c380(uint param_1,uint param_2,int param_3,char *param_4)

{
  if (param_3 == 0) {
    _sprintf(param_4,"%s:OFF (%i)");
    return;
  }
  _sprintf(param_4,"%s:ON (%i)");
  return;
}
