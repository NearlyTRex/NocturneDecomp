// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_005179d0
// Address: 005179d0
// Address Range: [[005179d0, 00517a55]]
// Convention: __cdecl
// Signature: int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_005179d0(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x28558)) {
    iVar3 = param_1 + 0x2855c;
    do {
      iVar1 = _stricmp(iVar3,param_2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)(param_1 + 0x28558));
  }
  if (param_3 == 0) {
    return -1;
  }
  PTR_01cc4800 = "..\\core\\skeleton.cpp";
  INT_01cc4804 = 0x16d;
  core_main_c_FUN_004c8440("Can't find bone %s in skeleton %s!",param_2,param_1 + 0x28508);
  return -1;
}
