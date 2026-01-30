// Name: core_script.cpp_CScript_FUN_00560160
// Address: 00560160
// Address Range: [[00560160, 005601b6]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_00560160(CScript *this_ptr,char *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_FUN_00560160(CScript *this_ptr,char *param_2)

{
  char *pcVar1;
  char *str1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *str2;
  
  iVar3 = 0;
  if (0 < *(int *)(this_ptr->unk4 + 0x18)) {
    iVar4 = 0;
    do {
      pcVar1 = *(char **)(iVar4 + 4 + *(int *)(this_ptr->unk4 + 0x1c));
      if (*pcVar1 == ':') {
        str2 = param_2;
        core_script_cpp_FUN_005593d0(pcVar1 + 1);
        iVar2 = stricmp(str1,str2);
        if (iVar2 == 0) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < *(int *)(this_ptr->unk4 + 0x18));
  }
  return -1;
}
