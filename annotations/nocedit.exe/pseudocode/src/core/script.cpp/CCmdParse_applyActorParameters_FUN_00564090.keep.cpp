// Name: core_script.cpp_CCmdParse_applyActorParameters_FUN_00564090
// Address: 00564090
// MANUAL RECONSTRUCTION
// Address Range: [[00564090, 005643cb]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

#include "nocturne.h"

void __cdecl core_script_cpp_CCmdParse_applyActorParameters_FUN_00564090(CCmdParse *this_ptr,CDemonActor *actor)

{
  CCmdParm *pCVar3;
  int iVar3;
  SScriptXRef local_124;

  memcpy(&local_124,actor->actor_name,sizeof(SScriptXRef));
  iVar3 = 0;
  if (0 < this_ptr->param_count) {
    pCVar3 = this_ptr->params;
    do {
      switch(pCVar3->param_type) {
      case PARM_TYPE_ACTOR:
        strcpy(local_124.name,pCVar3->parsed_value);
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
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 10;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_SET:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 8;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_SFX_USED:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 9;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_SET:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 5;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_COUNTER_USED:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 6;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_EVENT_COMMAND:
        core_script_cpp_CScript_parseCommandList_FUN_00567010
                  (g_CScriptPtr,pCVar3->parsed_value,&local_124);
        break;
      case PARM_TYPE_PERSISTENT_EVENT_NAME:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 2;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_GAME_FLAG_NAME:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 3;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_TIMER:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 4;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
        break;
      case PARM_TYPE_INI_VARIABLE:
        strcpy(local_124.name,pCVar3->parsed_value);
        local_124.type = 0xc;
        core_script_cpp_CScript_addEventXRef_FUN_00567510(g_CScriptPtr,&local_124);
      }
      iVar3 = iVar3 + 1;
      pCVar3 = pCVar3 + 1;
    } while (iVar3 < this_ptr->param_count);
  }
  return;
}
