// Name: core_script.cpp_CScript_skipCommands_FUN_00504c70
// Address: 00504c70
// Address Range: [[00504c70, 00504d5c]]
// Convention: unknown
// Signature: int core_script_cpp_CScript_skipCommands_FUN_00504c70(int param_1,int param_2,int param_3)

#include "nocturne.h"

int core_script_cpp_CScript_skipCommands_FUN_00504c70(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  if (param_2 < *(int *)(param_1 + 0x28)) {
    do {
      pcVar1 = *(char **)(*(int *)(param_1 + 0x2c) + 4 + param_2 * 8);
      if (*pcVar1 == '{') {
        param_2 = param_2 + 1;
        iVar4 = iVar4 + 1;
      }
      else if (*pcVar1 == '}') {
        if (iVar4 == 0) {
          if (!bVar2) {
            return param_2;
          }
          return param_2 + 1;
        }
        param_2 = param_2 + 1;
        iVar4 = iVar4 + -1;
      }
      else if (((iVar4 < 1) && (!bVar2)) ||
              (iVar3 = _strnicmp(pcVar1,&DAT_0058faef,2), iVar3 != 0)) {
        if (((iVar4 < 1) && (param_3 == 0)) ||
           (iVar3 = _strnicmp(pcVar1,&DAT_0058faf2,4), iVar3 != 0)) {
          if (iVar4 == 0) {
            if (!bVar2) {
              return param_2;
            }
            return param_2 + 1;
          }
          param_2 = param_2 + 1;
        }
        else {
          param_2 = core_script_cpp_CScript_skipCommands_FUN_00504c70(param_1,param_2 + 1,1);
        }
      }
      else {
        param_2 = core_script_cpp_CScript_skipCommands_FUN_00504c70(param_1,param_2 + 1,1);
      }
    } while ((-1 < param_2) && (bVar2 = false, param_2 < *(int *)(param_1 + 0x28)));
  }
  return -1;
}
