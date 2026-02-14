// Name: core_script.cpp_CScript_parseActionTemplate_FUN_00567490
// Address: 00567490
// Address Range: [[00567490, 00567503]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_parseActionTemplate_FUN_00567490(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_parseActionTemplate_FUN_00567490(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CCmdParse local_2134;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                      (&local_2134,text,*(char **)((int)g_CommandTemplates + iVar2 + 0x1e0));
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
  core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(&local_2134,(CDemonActor *)xref_data);
  return;
}
