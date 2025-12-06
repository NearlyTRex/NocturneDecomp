// Name: core_script.cpp_FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 0056617a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_00566080()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_00566080(uint param_1) */

void core_script_cpp_FUN_00566080(uint param_1,uint param_2,uint unaff_EBX)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
  pcVar3 = (char *)core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
  if (pcVar3 != (char *)0x0) {
    uVar2 = unaff_EBX;
    core_script_cpp_FUN_005644e0();
    DAT_0310fd48 = uVar2;
    DAT_0310fd44 = 0;
    core_script_cpp_CScript_CallingScriptEditorX2_2_FUN_00566910();
    core_script_cpp_CScript_Unk18_FUN_005669a0();
    pcVar5 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar4 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  if (iVar4 < 1) {
    pcVar3 = "Syntax check OK.";
    pcVar5 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar3;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return;
  }
  shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310fdc0,"%d sound files missing.");
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&DAT_0310f4b0,"The following sound files are missing.",-1,0);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
  return;
}
