// Name: core_script.cpp_CScript_FUN_005671a0
// Address: 005671a0
// Address Range: [[005671a0, 0056730b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_005671a0(CScript *this_ptr,int param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_005671a0(CScript *this_ptr,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int index;
  char *pcVar4;
  char *pcVar5;
  int *piVar6;
  byte bVar7;
  uint in_stack_fffffecc;
  CStrList local_20;
  
  bVar7 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  core_script_cpp_CScript_FUN_00567310(this_ptr,param_2,(CBitFont *)&local_20,(int *)0x0);
  index = 0;
  piVar6 = (int *)&stack0xfffffecc;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar6 = *param_3;
    param_3 = param_3 + (uint)bVar7 * -2 + 1;
    piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
  }
  do {
    iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)&local_20);
    if (iVar3 <= index) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_20,0,in_stack_fffffecc);
      return;
    }
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
    pcVar5 = pcVar2;
    do {
      pcVar4 = pcVar5;
      if (*pcVar5 == '(') goto LAB_00567250;
      if (*pcVar5 == '\0') break;
      pcVar4 = pcVar5 + 1;
      if (*pcVar4 == '(') goto LAB_00567250;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar4 != '\0');
    pcVar4 = (char *)0x0;
LAB_00567250:
    if (pcVar4 == (char *)0x0) {
      pcVar4 = "none";
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
      iVar3 = stricmp(pcVar5,pcVar4);
      if (iVar3 != 0) {
        pcVar4 = "true";
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
        iVar3 = stricmp(pcVar5,pcVar4);
        if (iVar3 != 0) {
          pcVar4 = "false";
          pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
          iVar3 = stricmp(pcVar5,pcVar4);
          pcVar5 = &stack0xfffffecc;
          if (iVar3 != 0) {
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            core_script_cpp_CScript_FUN_00567510(this_ptr,(int *)&stack0xfffffecc);
          }
        }
      }
    }
    else {
      core_script_cpp_CScript_FUN_00567490(this_ptr,(int)pcVar2,(int)&stack0xfffffecc);
    }
    index = index + 1;
  } while( true );
}
