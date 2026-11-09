// Name: unkafter_demnfolk.cpp_FUN_0045bec0
// Address: 0045bec0
// Address Range: [[0045bec0, 0045bf5c]]
// Convention: unknown
// Signature: undefined4 unkafter_demnfolk_cpp_FUN_0045bec0(int param_1,uint param_2)

#include "nocturne.h"

uint unkafter_demnfolk_cpp_FUN_0045bec0(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) &&
     (iVar1 = _stricmp((char *)(param_1 + 0x24a8),"jeff.dfm"),
     iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = _strnicmp((char *)(param_1 + 0x24a8),&DAT_005d81c0,3);
  if (iVar1 == 0) {
    if (param_2 < 2) {
      if (param_2 != 1) {
        return 0xffffffff;
      }
    }
    else if ((2 < param_2) && (param_2 != 3)) {
      return 0xffffffff;
    }
  }
  else if (param_2 < 2) {
    if (param_2 != 1) {
      return 0xffffffff;
    }
  }
  else {
    if (param_2 < 3) {
      return 0;
    }
    if (param_2 != 3) {
      return 0xffffffff;
    }
  }
  return 1;
}
