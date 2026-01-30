// Name: core_msnedit.cpp_CDemonMission_FUN_00538f40
// Address: 00538f40
// Address Range: [[00538f40, 00538f8d]]
// Convention: __cdecl
// Signature: int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f40(CDemonMission *this_ptr,char *param_2)

#include "nocturne.h"

int __cdecl core_msnedit_cpp_CDemonMission_FUN_00538f40(CDemonMission *this_ptr,char *param_2)

{
  int iVar1;
  int iVar2;
  char *str1;
  
  iVar2 = 0;
  if (0 < (int)this_ptr->set_list) {
    str1 = this_ptr->unk3;
    do {
      iVar1 = stricmp(str1,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x100;
    } while (iVar2 < (int)this_ptr->set_list);
  }
  return -1;
}
