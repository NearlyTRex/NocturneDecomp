// Name: core_msnedit.cpp_CDemonMission_FUN_0053ca80
// Address: 0053ca80
// Address Range: [[0053ca80, 0053cace]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_FUN_0053ca80(CDemonMission *this_ptr,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2;
  if (param_2 == 0) {
    iVar1 = *(int *)this_ptr->unk4;
  }
  if (iVar1 != 0) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(iVar1 + 0x150);
      if (iVar1 == 0) {
        iVar1 = *(int *)this_ptr->unk4;
      }
      if (iVar1 == param_2) {
        return;
      }
      if ((*(int *)this_ptr->unk1 == *(int *)(iVar1 + 0x2c)) && (*(int *)(iVar1 + 0x148) == 0)) {
        return;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 1000);
  }
  return;
}
