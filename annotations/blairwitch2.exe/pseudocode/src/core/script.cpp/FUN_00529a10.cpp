// Name: core_script.cpp_FUN_00529a10
// Address: 00529a10
// Address Range: [[00529a10, 00529afc]]
// Convention: unknown
// Signature: int core_script_cpp_FUN_00529a10(int param_1,int param_2,int param_3)

#include "nocturne.h"

int core_script_cpp_FUN_00529a10(int param_1,int param_2,int param_3)

{
  char *str1;
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  bVar1 = true;
  if (param_2 < *(int *)(param_1 + 0x2c)) {
    do {
      str1 = *(char **)(*(int *)(param_1 + 0x30) + 4 + param_2 * 8);
      if (*str1 == '{') {
        param_2 = param_2 + 1;
        iVar3 = iVar3 + 1;
      }
      else if (*str1 == '}') {
        if (iVar3 == 0) {
          if (!bVar1) {
            return param_2;
          }
          return param_2 + 1;
        }
        param_2 = param_2 + 1;
        iVar3 = iVar3 + -1;
      }
      else if (((iVar3 < 1) && (!bVar1)) ||
              (iVar2 = _strnicmp(str1,&DAT_005e4df0,2), iVar2 != 0)) {
        if (((iVar3 < 1) && (param_3 == 0)) ||
           (iVar2 = _strnicmp(str1,&DAT_005e4df3,4), iVar2 != 0)) {
          if (iVar3 == 0) {
            if (!bVar1) {
              return param_2;
            }
            return param_2 + 1;
          }
          param_2 = param_2 + 1;
        }
        else {
          param_2 = core_script_cpp_FUN_00529a10(param_1,param_2 + 1,1);
        }
      }
      else {
        param_2 = core_script_cpp_FUN_00529a10(param_1,param_2 + 1,1);
      }
    } while ((-1 < param_2) && (bVar1 = false, param_2 < *(int *)(param_1 + 0x2c)));
  }
  return -1;
}
