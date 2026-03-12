// Name: core_script.cpp_CScript_extractCrossReferences_FUN_005671a0
// Address: 005671a0
// Address Range: [[005671a0, 0056730b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_extractCrossReferences_FUN_005671a0(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_extractCrossReferences_FUN_005671a0(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  char cVar2;
  int iVar3;
  char *text_00;
  char *pcVar5;
  int iVar2;
  int index;
  char *pcVar3;
  char *pcVar4;
  SScriptXRef *pSVar6;
  SScriptXRef *pSVar5;
  byte bVar6;
  char *pcVar7;
  SScriptXRef local_134;
  CStrList local_20;
  char cVar1;
  
  bVar6 = 0;
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310(this_ptr,text,&local_20,(int *)0x0);
  index = 0;
  pSVar6 = &local_134;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pSVar6->name = *(uint *)xref_data->name;
    xref_data = (SScriptXRef *)((int)xref_data + (uint)bVar6 * -8 + 4);
    pSVar6 = (SScriptXRef *)((int)pSVar6 + (uint)bVar6 * -8 + 4);
  }
  do {
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_20);
    if (iVar3 <= index) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_20,0);
      return;
    }
    text_00 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
    pcVar4 = text_00;
    do {
      pcVar3 = pcVar4;
      if (*pcVar4 == '(') goto LAB_00567250;
      if (*pcVar4 == '\0') break;
      pcVar3 = pcVar4 + 1;
      if (*pcVar3 == '(') goto LAB_00567250;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
LAB_00567250:
    if (pcVar3 == (char *)0x0) {
      pcVar7 = "none";
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
      iVar3 = _stricmp(pcVar5,pcVar7);
      if (iVar3 != 0) {
        pcVar7 = "true";
        pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
        iVar3 = _stricmp(pcVar5,pcVar7);
        if (iVar3 != 0) {
          pcVar7 = "false";
          pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
          iVar3 = _stricmp(pcVar5,pcVar7);
          pSVar5 = &local_134;
          if (iVar3 != 0) {
            do {
              cVar1 = *text_00;
              pSVar5->name[0] = cVar1;
              if (cVar1 == '\0') break;
              cVar2 = text_00[1];
              text_00 = text_00 + 2;
              pSVar5->name[1] = cVar2;
              pSVar5 = (SScriptXRef *)(pSVar5->name + 2);
            } while (cVar2 != '\0');
            local_134.type = 0;
            core_script_cpp_CScript_addEventXRef_FUN_00567510(this_ptr,&local_134);
          }
        }
      }
    }
    else {
      core_script_cpp_CScript_parseActionTemplate_FUN_00567490(this_ptr,text_00,&local_134);
    }
    index = index + 1;
  } while( true );
}
