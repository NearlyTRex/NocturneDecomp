// Name: core_script.cpp_CScript_FUN_00567080
// Address: 00567080
// Address Range: [[00567080, 0056719a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567080(CScript *this_ptr,char *param_2,int *param_3)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567080(CScript *this_ptr,char *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte bVar6;
  CCmdParse local_2374;
  byte local_24c [300];
  byte local_120 [256];
  uint local_20;
  
  bVar6 = 0;
  iVar3 = 0;
  do {
    iVar2 = core_script_cpp_CCmdParse_parse_FUN_00561fd0
                      (&local_2374,param_2,*(char **)((int)g_CommandTemplates + iVar3));
    if (iVar2 == 3) {
      core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090
                (&local_2374,(CDemonActor *)param_3);
      return;
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x1e0);
  while ((g_CharacterClassificationTable[(byte)(*param_2 + 1)] & 2) != 0) {
    param_2 = (char *)((byte *)param_2 + 1);
  }
  pbVar4 = local_24c;
  while (iVar3 = core_event_cpp_isValidIdentifierChar_FUN_004b0f90((uint)(byte)*param_2), iVar3 != 0
        ) {
    bVar1 = *param_2;
    param_2 = (char *)((byte *)param_2 + 1);
    *pbVar4 = bVar1;
    pbVar4 = pbVar4 + 1;
  }
  *pbVar4 = 0;
  while ((g_CharacterClassificationTable[(byte)(*param_2 + 1)] & 2) != 0) {
    param_2 = (char *)((byte *)param_2 + 1);
  }
  if ((*param_2 != 0) || (local_24c[0] == 0)) {
    return;
  }
  pbVar4 = local_120;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(int *)pbVar4 = *param_3;
    param_3 = param_3 + (uint)bVar6 * -2 + 1;
    pbVar4 = pbVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  pbVar4 = local_24c;
  pbVar5 = local_120;
  do {
    bVar6 = *pbVar4;
    *pbVar5 = bVar6;
    if (bVar6 == 0) break;
    bVar6 = pbVar4[1];
    pbVar4 = pbVar4 + 2;
    pbVar5[1] = bVar6;
    pbVar5 = pbVar5 + 2;
  } while (bVar6 != 0);
  local_20 = 1;
  core_script_cpp_CScript_FUN_00567510(this_ptr,(int *)local_120);
  return;
}
