// Name: core_script.cpp_CScript_parseCommand_FUN_00567080
// Address: 00567080
// Address Range: [[00567080, 0056719a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_parseCommand_FUN_00567080(CScript *this_ptr,char *text,SScriptXRef *xref_data)

{
  byte bVar2;
  int iVar2;
  int iVar4;
  int iVar3;
  byte *pbVar5;
  byte *pbVar4;
  SScriptXRef *pSVar6;
  SScriptXRef *pSVar5;
  byte bVar6;
  CCmdParse local_2374;
  byte local_24c [300];
  SScriptXRef local_120;
  byte bVar1;
  
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
  pbVar5 = local_24c;
  while (iVar4 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)*text), iVar4 != 0) {
    bVar1 = *text;
    text = (char *)((byte *)text + 1);
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  }
  *pbVar5 = 0;
  while ((g_CharacterClassificationTable[(byte)(*text + 1)] & 2) != 0) {
    text = (char *)((byte *)text + 1);
  }
  if ((*text != 0) || (local_24c[0] == 0)) {
    return;
  }
  pSVar6 = &local_120;
  for (iVar4 = 0x45; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pSVar6->name = *(uint *)xref_data->name;
    xref_data = (SScriptXRef *)((int)xref_data + (uint)bVar6 * -8 + 4);
    pSVar6 = (SScriptXRef *)((int)pSVar6 + (uint)bVar6 * -8 + 4);
  }
  pbVar4 = local_24c;
  pSVar5 = &local_120;
  do {
    bVar2 = *pbVar4;
    pSVar5->name[0] = bVar2;
    if (bVar2 == 0) break;
    bVar2 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    pSVar5->name[1] = bVar2;
    pSVar5 = (SScriptXRef *)(pSVar5->name + 2);
  } while (bVar2 != 0);
  local_120.type = 1;
  core_script_cpp_CScript_addEventXRef_FUN_00567510(this_ptr,&local_120);
  return;
}
