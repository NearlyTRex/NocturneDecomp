// Name: core_script.cpp_CScript_FUN_005606e0
// Address: 005606e0
// Address Range: [[005606e0, 00560756]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_FUN_005606e0(CScript *this_ptr,char *param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_FUN_005606e0(CScript *this_ptr,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_110 [256];
  
  iVar2 = 0;
  splitpath(param_2,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < *(int *)(this_ptr->unk4 + 4)) {
    iVar3 = 0;
    do {
      iVar1 = stricmp
                        ((char *)(*(int *)(this_ptr->unk4 + 8) + iVar3),local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)(this_ptr->unk4 + 4));
  }
  return -1;
}
