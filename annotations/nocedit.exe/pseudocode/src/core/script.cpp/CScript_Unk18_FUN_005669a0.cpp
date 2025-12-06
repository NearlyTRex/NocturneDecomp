// Name: core_script.cpp_CScript_Unk18_FUN_005669a0
// Address: 005669a0
// Address Range: [[005669a0, 00566a81]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_Unk18_FUN_005669a0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_Unk18(CScript* param_1) */

void core_script_cpp_CScript_Unk18_FUN_005669a0(void)

{
  int iVar1;
  
  core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
  if (DAT_0310fcdc - DAT_0310fce0 < DAT_0310fcd8) {
    DAT_0310fcd8 = DAT_0310fcdc - DAT_0310fce0;
  }
  if (DAT_0310fd48 < DAT_0310fcd8) {
    DAT_0310fcd8 = DAT_0310fd48;
  }
  iVar1 = (DAT_0310fd48 - DAT_0310fce0) + 1;
  if (DAT_0310fcd8 < iVar1) {
    DAT_0310fcd8 = iVar1;
  }
  if (DAT_0310fcd8 < 0) {
    DAT_0310fcd8 = 0;
  }
  if (DAT_0310fd10 - DAT_0310fd14 < DAT_0310fd0c) {
    DAT_0310fd0c = DAT_0310fd10 - DAT_0310fd14;
  }
  if (DAT_0310fd44 < DAT_0310fd0c) {
    DAT_0310fd0c = DAT_0310fd44;
  }
  iVar1 = (DAT_0310fd44 - DAT_0310fd14) + 1;
  if (DAT_0310fd0c < iVar1) {
    DAT_0310fd0c = iVar1;
  }
  if (-1 < DAT_0310fd0c) {
    return;
  }
  DAT_0310fd0c = 0;
  return;
}
