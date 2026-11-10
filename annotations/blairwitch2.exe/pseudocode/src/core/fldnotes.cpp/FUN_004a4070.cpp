// Name: core_fldnotes.cpp_FUN_004a4070
// Address: 004a4070
// Address Range: [[004a4070, 004a411d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004a4070(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004a4070(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = debugAllocTracked1(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = core_fldnotes_cpp_FUN_004a4120(iVar1,param_1);
  }
  if (iVar2 == 0) {
    _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
    _DAT_01d046a4 = 0x82f;
    core_main_c_FUN_004e4500("Out of memory");
  }
  iVar1 = core_fldnotes_cpp_FUN_004a2ad0(param_2,iVar2);
  if (iVar1 == 0) {
    core_fldnotes_cpp_FUN_004a28b0(param_2,&DAT_005d5e36);
    iVar2 = core_fldnotes_cpp_FUN_004a2ad0(param_2,iVar2);
    if (iVar2 == 0) {
      _DAT_01d046a0 = "..\\core\\fldnotes.cpp";
      _DAT_01d046a4 = 0x836;
      core_main_c_FUN_004e4500("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
