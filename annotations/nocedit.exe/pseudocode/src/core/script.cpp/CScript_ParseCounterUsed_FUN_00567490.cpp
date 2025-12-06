// Name: core_script.cpp_CScript_ParseCounterUsed_FUN_00567490
// Address: 00567490
// Address Range: [[00567490, 00567503]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_ParseCounterUsed_FUN_00567490()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_ParseCounterUsed(CScript* param_1, uint
   param_2, uint param_3) */

void core_script_cpp_CScript_ParseCounterUsed_FUN_00567490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = core_script_cpp_SCmdParse_parse_FUN_00561fd0();
    if (iVar1 == 3) {
      if (0x77 < iVar3) {
        return;
      }
      goto LAB_005674e5;
    }
    iVar2 = iVar2 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar2 < 0x54);
  if (0x77 < iVar3) {
    return;
  }
LAB_005674e5:
  core_script_cpp_FUN_00564090();
  return;
}
