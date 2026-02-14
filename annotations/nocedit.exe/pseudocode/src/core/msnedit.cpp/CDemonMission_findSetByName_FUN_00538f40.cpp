// Name: core_msnedit.cpp_CDemonMission_findSetByName_FUN_00538f40
// Address: 00538f40
// Address Range: [[00538f40, 00538f8d]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(CDemonMission *this_ptr,char *set_name)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(CDemonMission *this_ptr,char *set_name)

{
  int iVar1;
  int iVar2;
  char (*str1) [256];
  
  iVar2 = 0;
  if (0 < this_ptr->num_sets) {
    str1 = this_ptr->set_names;
    do {
      iVar1 = stricmp(*str1,set_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->num_sets);
  }
  return -1;
}
