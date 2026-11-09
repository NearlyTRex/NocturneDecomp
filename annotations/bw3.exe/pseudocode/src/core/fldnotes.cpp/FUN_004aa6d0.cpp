// Name: core_fldnotes.cpp_FUN_004aa6d0
// Address: 004aa6d0
// Address Range: [[004aa6d0, 004aa77d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004aa6d0(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004aa6d0(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a3cb2(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = core_fldnotes_cpp_FUN_004aa780(iVar1,param_1);
  }
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
    _DAT_01d71de4 = 0x892;
    core_main_c_FUN_004e4330("Out of memory");
  }
  iVar1 = core_fldnotes_cpp_FUN_004a9150(param_2,iVar2);
  if (iVar1 == 0) {
    core_fldnotes_cpp_FUN_004a8ed0(param_2,&DAT_005c118d);
    iVar2 = core_fldnotes_cpp_FUN_004a9150(param_2,iVar2);
    if (iVar2 == 0) {
      _DAT_01d71de0 = "..\\core\\fldnotes.cpp";
      _DAT_01d71de4 = 0x899;
      core_main_c_FUN_004e4330("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
