// Name: core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
// Address: 00564090
// Address Range: [[00564090, 005643cb]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

{
  char cVar2;
  int iVar2;
  CCmdParm *pCVar3;
  int iVar3;
  char *pcVar5;
  char *pcVar4;
  SScriptXRef *pSVar6;
  SScriptXRef *pSVar5;
  SScriptXRef local_124;
  char cVar1;
  
  pSVar6 = &local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pSVar6 = *(uint *)actor->actor_name;
    actor = (CDemonActor *)(actor->actor_name + 4);
    pSVar6 = (SScriptXRef *)((int)pSVar6 + 4);
  }
  iVar3 = 0;
  if (0 < this_ptr->param_count) {
    pCVar3 = this_ptr->params;
    do {
      switch(pCVar3->param_type) {
      case PARM_TYPE_ACTOR:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        if (pCVar3->parsed_value[0] == '@') {
          local_124.type = 0xb;
        }
        else {
          local_124.type = 7;
        }
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_CONDITION:
        core_script_cpp_CScript_extractCrossReferences_FUN_005671a0
                  (g_CScriptPtr,pCVar3->parsed_value,&local_124);
        break;
      case PARM_TYPE_ACTOR_VARIABLE:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 10;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_SET:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 8;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_USED:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 9;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_SET:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 5;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_USED:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 6;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_EVENT_COMMAND:
        core_script_cpp_CScript_parseCommandList_FUN_00567010
                  (g_CScriptPtr,pCVar3->parsed_value,&local_124);
        break;
      case PARM_TYPE_PERSISTENT_EVENT_NAME:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 2;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_GAME_FLAG_NAME:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 3;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_TIMER:
        pcVar5 = pCVar3->parsed_value;
        pSVar6 = &local_124;
        do {
          cVar2 = *pcVar5;
          pSVar6->name[0] = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar5[1];
          pcVar5 = pcVar5 + 2;
          *(char *)((int)pSVar6 + 1) = cVar2;
          pSVar6 = (SScriptXRef *)((int)pSVar6 + 2);
        } while (cVar2 != '\0');
        local_124.type = 4;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_INI_VARIABLE:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar2 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          pSVar5->name[1] = cVar2;
          pSVar5 = (SScriptXRef *)(pSVar5->name + 2);
        } while (cVar2 != '\0');
        local_124.type = 0xc;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
      }
      iVar3 = iVar3 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar3 < this_ptr->param_count);
  }
  return;
}
