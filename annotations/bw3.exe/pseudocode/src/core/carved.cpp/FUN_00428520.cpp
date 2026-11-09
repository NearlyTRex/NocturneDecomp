// Name: core_carved.cpp_FUN_00428520
// Address: 00428520
// Address Range: [[00428520, 004285bc]]
// Convention: unknown
// Signature: undefined4 core_carved_cpp_FUN_00428520(int param_1,uint param_2)

#include "nocturne.h"

uint core_carved_cpp_FUN_00428520(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 != 2) &&
     (iVar1 = _stricmp((char *)(param_1 + 0x24a8),"jeff.dfm"),
     iVar1 == 0)) {
    return 0xffffffff;
  }
  iVar1 = _strnicmp((char *)(param_1 + 0x24a8),&DAT_005b7de4,3);
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
