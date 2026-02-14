// Name: core_script.cpp_CScript_parseCommand_FUN_00567080
// Address: 00567080
// Address Range: [[00567080, 0056719a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  SScriptXRef *pSVar5;
  byte bVar6;
  CCmdParse local_2374;
  byte local_24c [300];
  SScriptXRef local_120;
  
  bVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                      (&local_2374,text,*(char **)((int)g_CommandTemplates + iVar3));
    if (iVar2 == 3) {
      core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090
                (&local_2374,(CDemonActor *)xref_data);
      return;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1e0);
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    text = (char *)((byte *)text + 1);
  }
  pbVar4 = local_24c;
  while (iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)*text), iVar3 != 0) {
    bVar1 = *text;
    text = (char *)((byte *)text + 1);
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = 0;
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    text = (char *)((byte *)text + 1);
  }
  if ((*text != 0) || (local_24c[0] == 0)) {
    return;
  }
  pSVar5 = &local_120;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pSVar5->name = *(uint *)xref_data->name;
    xref_data = (SScriptXRef *)((int)xref_data + (uint)bVar6 * -8 + 4);
    pSVar5 = (SScriptXRef *)((int)pSVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pbVar4 = local_24c;
  pSVar5 = &local_120;
  do {
    bVar6 = *pbVar4;
    pSVar5->name[0] = bVar6;
    if (bVar6 == 0) break;
    bVar6 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    pSVar5->name[1] = bVar6;
    pSVar5 = (SScriptXRef *)(pSVar5->name + 2);
  } while (bVar6 != 0);
  local_120.type = 1;
  core_script_cpp_CScript_addEventXRef_FUN_00567510(this_ptr,&local_120);
  return;
}
