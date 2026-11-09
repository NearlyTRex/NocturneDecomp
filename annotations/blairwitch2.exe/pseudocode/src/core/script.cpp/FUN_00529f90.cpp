// Name: core_script.cpp_FUN_00529f90
// Address: 00529f90
// Address Range: [[00529f90, 0052a006]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00529f90(CScript *this_ptr,char *path)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00529f90(CScript *this_ptr,char *path)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char local_110 [256];
  
  iVar2 = 0;
  splitpath(path,(char *)0x0,(char *)0x0,local_110,(char *)0x0);
  if (0 < *(int *)&this_ptr->field_0x20) {
    iVar3 = 0;
    do {
      iVar1 = _stricmp
                        ((char *)(*(int *)&this_ptr->field_0x24 + iVar3),local_110);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x226;
    } while (iVar2 < *(int *)&this_ptr->field_0x20);
  }
  return -1;
}
