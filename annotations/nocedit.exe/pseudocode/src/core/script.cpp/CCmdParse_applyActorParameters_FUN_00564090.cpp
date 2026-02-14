// Name: core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
// Address: 00564090
// Address Range: [[00564090, 005643cb]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

{
  char cVar1;
  int iVar2;
  CCmdParm *pCVar3;
  char *pcVar4;
  SScriptXRef *pSVar5;
  SScriptXRef local_124;
  
  pSVar5 = &local_124;
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pSVar5 = *(uint *)actor->actor_name;
    actor = (CDemonActor *)(actor->actor_name + 4);
    pSVar5 = (SScriptXRef *)((int)pSVar5 + 4);
  }
  iVar2 = 0;
  if (0 < this_ptr->param_count) {
    pCVar3 = this_ptr->params;
    do {
      switch(pCVar3->param_type) {
      case PARM_TYPE_ACTOR:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
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
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 10;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_SET:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 8;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_USED:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 9;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_SET:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 5;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_USED:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 6;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_EVENT_COMMAND:
        core_script_cpp_CScript_parseCommandList_FUN_00567010
                  (g_CScriptPtr,pCVar3->parsed_value,&local_124);
        break;
      case PARM_TYPE_PERSISTENT_EVENT_NAME:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 2;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_GAME_FLAG_NAME:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 3;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_TIMER:
        pcVar4 = pCVar3->parsed_value;
        pSVar5 = &local_124;
        do {
          cVar1 = *pcVar4;
          pSVar5->name[0] = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
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
          cVar1 = pcVar4[1];
          pcVar4 = pcVar4 + 2;
          *(char *)((int)pSVar5 + 1) = cVar1;
          pSVar5 = (SScriptXRef *)((int)pSVar5 + 2);
        } while (cVar1 != '\0');
        local_124.type = 0xc;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar2 < this_ptr->param_count);
  }
  return;
}
