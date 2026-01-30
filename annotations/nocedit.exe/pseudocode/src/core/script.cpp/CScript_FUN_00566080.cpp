// Name: core_script.cpp_CScript_FUN_00566080
// Address: 00566080
// Address Range: [[00566080, 0056617a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00566080(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00566080(CScript *this_ptr)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  int iStack_10;
  
  core_script_cpp_CScript_FUN_0055a370(this_ptr);
  piVar2 = core_script_cpp_CScript_FUN_0055a4b0(this_ptr,&iStack_10);
  if (piVar2 != (int *)0x0) {
    core_script_cpp_FUN_005644e0();
    DAT_0310fd48 = iStack_10;
    DAT_0310fd44 = 0;
    core_script_cpp_CScript_FUN_00566910(this_ptr);
    core_script_cpp_CScript_FUN_005669a0(this_ptr);
    pcVar4 = &DAT_0310fdc0;
    do {
      iVar3 = *piVar2;
      *pcVar4 = (char)iVar3;
      if ((char)iVar3 == '\0') {
        return;
      }
      cVar1 = *(char *)((int)piVar2 + 1);
      piVar2 = (int *)((int)piVar2 + 2);
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  if (iVar3 < 1) {
    pcVar4 = "Syntax check OK.";
    pcVar5 = &DAT_0310fdc0;
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
    return;
  }
  iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&DAT_0310f4b0);
  sprintf(&DAT_0310fdc0,"%d sound files missing.",iVar3);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            (&DAT_0310f4b0,"The following sound files are missing.",-1,0);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&DAT_0310f4b0);
  return;
}
