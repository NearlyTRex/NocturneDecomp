// Name: core_script.cpp_CScript_findDialogEntry_FUN_005606e0
// Address: 005606e0
// Address Range: [[005606e0, 00560756]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_005606e0(CScript *this_ptr,char *path)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_findDialogEntry_FUN_005606e0(CScript *this_ptr,char *path)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_110 [256];
  
  iVar2 = 0;
  splitpath(path,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < this_ptr->dialog_entry_count) {
    iVar3 = 0;
    do {
      iVar1 = stricmp(this_ptr->dialog_entries->data + iVar3,local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < this_ptr->dialog_entry_count);
  }
  return -1;
}
