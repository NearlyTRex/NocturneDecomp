// Name: core_script.cpp_FUN_0054acc0
// Address: 0054acc0
// Address Range: [[0054acc0, 0054ad16]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_0054acc0(CScript *this_ptr,char *label_name)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_0054acc0(CScript *this_ptr,char *label_name)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *str2;
  
  iVar3 = 0;
  if (0 < *(int *)&this_ptr->field_0x2c) {
    iVar4 = 0;
    do {
      pcVar1 = *(char **)(iVar4 + 4 + *(int *)&this_ptr->field_0x30);
      if (*pcVar1 == ':') {
        str2 = label_name;
        pcVar1 = core_script_cpp_skipWhitespace_FUN_005432b0(pcVar1 + 1);
        iVar2 = _stricmp(pcVar1,str2);
        if (iVar2 == 0) {
          return iVar3;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < *(int *)&this_ptr->field_0x2c);
  }
  return -1;
}
