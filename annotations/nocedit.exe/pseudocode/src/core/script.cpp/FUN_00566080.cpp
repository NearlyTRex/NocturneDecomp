// Name: core_script.cpp_FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 0056617a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566080()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566080(uint param_1) */

void core_script_cpp_FUN_00566080(void)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uStack_10;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  pcVar2 = (char *)core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
  if (pcVar2 != (char *)0x0) {
    core_script_cpp_FUN_005644e0();
    DAT_0310fd48 = uStack_10;
    DAT_0310fd44 = 0;
    core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
    core_script_cpp_CScript_Unk18_FUN_005669a0();
    pcVar4 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar2;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  if (iVar3 < 1) {
    pcVar2 = "Syntax check OK.";
    pcVar4 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar2;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"%d sound files missing.",iVar3);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&DAT_0310f4b0,"The following sound files are missing.",-1,0);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  return;
}
