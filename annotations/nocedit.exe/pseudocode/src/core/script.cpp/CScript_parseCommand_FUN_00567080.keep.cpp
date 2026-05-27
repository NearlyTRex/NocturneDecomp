// Name: core_script.cpp_CScript_parseCommand_FUN_00567080
// Address: 00567080
// MANUAL RECONSTRUCTION
// Address Range: [[00567080, 0056719a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  int iVar2;
  int iVar4;
  int iVar3;
  byte *pbVar5;
  CCmdParse local_2374;
  byte local_24c [300];
  SScriptXRef local_120;
  byte bVar1;

  for (iVar3 = 0; iVar3 < 0x78; iVar3 = iVar3 + 1) {
    iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                      (&local_2374,text,g_CommandTemplates[iVar3]);
    if (iVar2 == 3) {
      core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090
                (&local_2374,(CDemonActor *)xref_data);
      return;
    }
  }
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    text = text + 1;
  }
  pbVar5 = local_24c;
  while (iVar4 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)*text), iVar4 != 0) {
    bVar1 = *text;
    text = text + 1;
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = 0;
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    text = text + 1;
  }
  if ((*text != 0) || (local_24c[0] == 0)) {
    return;
  }
  local_120 = *xref_data;
  strcpy(local_120.name,(char *)local_24c);
  local_120.type = 1;
  core_script_cpp_CScript_addEventXRef_FUN_00567510(this_ptr,&local_120);
  return;
}
