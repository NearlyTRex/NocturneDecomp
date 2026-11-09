// Name: core_fldnotes.cpp_FUN_004bca60
// Address: 004bca60
// Address Range: [[004bca60, 004bcb0d]]
// Convention: unknown
// Signature: undefined4 core_fldnotes_cpp_FUN_004bca60(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_fldnotes_cpp_FUN_004bca60(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005c0f32(0x1c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = core_fldnotes_cpp_FUN_004bcb10(iVar1,param_1);
  }
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
    _DAT_01d1d404 = 0x894;
    core_main_c_FUN_005030e0("Out of memory");
  }
  iVar1 = core_fldnotes_cpp_FUN_004bb510(param_2,iVar2);
  if (iVar1 == 0) {
    core_fldnotes_cpp_FUN_004bb290(param_2,&DAT_005dfca0);
    iVar2 = core_fldnotes_cpp_FUN_004bb510(param_2,iVar2);
    if (iVar2 == 0) {
      _DAT_01d1d400 = "..\\core\\fldnotes.cpp";
      _DAT_01d1d404 = 0x89b;
      core_main_c_FUN_005030e0("NotesMap::paginate - unable to add resource?!");
      return 1;
    }
  }
  return 1;
}
