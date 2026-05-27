// Name: core_script.cpp_CScript_extractCrossReferences_FUN_005671a0
// Address: 005671a0
// MANUAL RECONSTRUCTION
// Address Range: [[005671a0, 0056730b]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_extractCrossReferences_FUN_005671a0(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_extractCrossReferences_FUN_005671a0(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  int iVar3;
  char *text_00;
  char *pcVar5;
  int index;
  char *pcVar3;
  char *pcVar7;
  SScriptXRef local_134;
  CStrList local_20;

  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_20);
  core_script_cpp_CScript_tokenizeAtCursor_FUN_00567310(this_ptr,text,&local_20,(int *)0x0);
  index = 0;
  local_134 = *xref_data;
  do {
    iVar3 = shape_edittool_cpp_CStrList_getItemCount_FUN_004a6ed0(&local_20);
    if (iVar3 <= index) {
      shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_20,0);
      return;
    }
    text_00 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_20,index);
    pcVar3 = strchr(text_00,'(');
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
          if (iVar3 != 0) {
            strcpy(local_134.name,text_00);
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
