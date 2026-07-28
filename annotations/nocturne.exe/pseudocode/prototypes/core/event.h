#pragma once

// Function prototypes for core/event.cpp
// Generated from Ghidra function signatures

// Original: core_event.cpp_staticInit_FUN_0047a1d0
// Address: 0047a1d0
void __cdecl staticInit(void);

// Original: core_event.cpp_setEventError_FUN_0047a1e0
// Address: 0047a1e0
undefined4 setEventError(void);

// Original: core_event.cpp_FUN_0047a210
// Address: 0047a210
undefined4 FUN_0047a210(char *param_1);

// Original: core_event.cpp_FUN_0047a260
// Address: 0047a260
void FUN_0047a260(void);

// Original: core_event.cpp_skipWhitespaceIndexed_FUN_0047a280
// Address: 0047a280
void skipWhitespaceIndexed(void);

// Original: core_event.cpp_parseComparisonOp_FUN_0047a2b0
// Address: 0047a2b0
undefined4 parseComparisonOp(void);

// Original: core_event.cpp_parseIntOrCounter_FUN_0047a350
// Address: 0047a350
int parseIntOrCounter(void);

// Original: core_event.cpp_resolveActorByName_FUN_0047a390
// Address: 0047a390
CDemonActor * __cdecl resolveActorByName(char *name,uint class_hash,char *class_name);

// Original: core_event.cpp_parseVectorLocation_FUN_0047a4c0
// Address: 0047a4c0
int __cdecl parseVectorLocation(char *buffer,int *offset,CVector3f *out_position);

// Original: core_event.cpp_FUN_0047a5e0
// Address: 0047a5e0
void FUN_0047a5e0(char *param_1);

// Original: core_event.cpp_extractParenArg_FUN_0047a650
// Address: 0047a650
char * __cdecl extractParenArg(char **cursor,char *out_buf,int max_len);

// Original: core_event.cpp_parseDeathType_FUN_0047a760
// Address: 0047a760
int __cdecl parseDeathType(char *type_name,int *out_type_id);

// Original: core_event.cpp_parseDamageType_FUN_0047a8f0
// Address: 0047a8f0
int __cdecl parseDamageType(char *type_name,int *out_type_id);

// Original: core_event.cpp_CEventList_ctor_FUN_0047a9e0
// Address: 0047a9e0
CEventList * __cdecl CEventList::ctor(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_reset_FUN_0047aa00
// Address: 0047aa00
void __cdecl CEventList::reset(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_process_FUN_0047aa50
// Address: 0047aa50
void __cdecl CEventList::process(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_executeCommands_FUN_0047ab70
// Address: 0047ab70
int __cdecl CEventList::executeCommands(CEventList *this_ptr,char *commands);

// Original: core_event.cpp_CEventList_executeCommandString_FUN_0047ab90
// Address: 0047ab90
int __cdecl CEventList::executeCommandString(CEventList *this_ptr,char *command_string);

// Original: core_event.cpp_CEventList_executeCommand_FUN_0047ac50
// Address: 0047ac50
int __cdecl CEventList::executeCommand(CEventList *this_ptr,char *command_buffer);

// Original: core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
// Address: 0047dba0
int __cdecl CEventList::resolveVariable(CEventList *this_ptr,char *identifier);

// Original: core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
// Address: 0047dc30
int __cdecl CEventList::evaluateCondition(CEventList *this_ptr,char *condition_expression);

// Original: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
// Address: 0047dc90
char * __cdecl CEventList::validateCondition(CEventList *this_ptr,char *expression);

// Original: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
// Address: 0047dcd0
char * __cdecl CEventList::validateCommands(CEventList *this_ptr,char *commands);

// Original: core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
// Address: 0047dd10
int __cdecl CEventList::evaluateExpression(CEventList *this_ptr,char *expression);

// Original: core_event.cpp_CEventList_render_FUN_0047dd80
// Address: 0047dd80
void __cdecl CEventList::render(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
// Address: 0047e0d0
int __cdecl CEventList::evaluateAtom(CEventList *this_ptr,char *expression,int *parse_position);

// Original: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220
// Address: 00480220
int __cdecl CEventList::evaluateLogicalExpr(CEventList *this_ptr,char *expression,int *parse_position);

// Original: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
// Address: 004802e0
void __cdecl CEventList::addOrRemovePersistentEvent(CEventList *this_ptr,char *name,int add_flag);

// Original: core_event.cpp_CEventList_resetGameFlags_FUN_00480410
// Address: 00480410
void __cdecl CEventList::resetGameFlags(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
// Address: 00480420
void __cdecl CEventList::addOrRemoveGameFlag(CEventList *this_ptr,char *name,int add_flag);

// Original: core_event.cpp_CEventList_setTimerEvent_FUN_00480550
// Address: 00480550
void __cdecl CEventList::setTimerEvent(CEventList *this_ptr,char *name,float duration);

// Original: core_event.cpp_CEventList_setCounter_FUN_004806d0
// Address: 004806d0
void __cdecl CEventList::setCounter(CEventList *this_ptr,char *name,int value);

// Original: core_event.cpp_CEventList_getCounterValue_FUN_004807e0
// Address: 004807e0
int __cdecl CEventList::getCounterValue(CEventList *this_ptr,char *str);

// Original: core_event.cpp_CEventList_findPersistentEvent_FUN_00480810
// Address: 00480810
int __cdecl CEventList::findPersistentEvent(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findGameFlag_FUN_00480860
// Address: 00480860
int __cdecl CEventList::findGameFlag(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findTimer_FUN_004808b0
// Address: 004808b0
int __cdecl CEventList::findTimer(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findCounter_FUN_00480900
// Address: 00480900
int CEventList::findCounter(int param_1,char *param_2);

// Original: core_event.cpp_CEventList_setActorVariable_FUN_00480950
// Address: 00480950
void __cdecl CEventList::setActorVariable(CEventList *this_ptr,char *var_name,CDemonActor *actor);

// Original: core_event.cpp_CEventList_getActorByVarName_FUN_00480b30
// Address: 00480b30
CDemonActor * __cdecl CEventList::getActorByVarName(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findActorVariable_FUN_00480ba0
// Address: 00480ba0
int __cdecl CEventList::findActorVariable(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
// Address: 00480bf0
uint CEventList::getSfxHandle(CEventList *param_1,char *param_2);

// Original: core_event.cpp_CEventList_setSfxHandle_FUN_00480c30
// Address: 00480c30
void __cdecl CEventList::setSfxHandle(CEventList *this_ptr,char *name,uint sfx_handle);

// Original: core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
// Address: 00480d10
int __cdecl CEventList::findSfxEntry(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
// Address: 00480d60
void __cdecl CEventList::updateSfxEntries(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0
// Address: 00480eb0
void __cdecl CEventList::restartSfxEntries(CEventList *this_ptr);

// Original: core_event.cpp_isValidIdentifierChar_FUN_00480f40
// Address: 00480f40
int __cdecl isValidIdentifierChar(int ch);

// Original: core_event.cpp_CEventList_loadState_FUN_00480f70
// Address: 00480f70
int __cdecl CEventList::loadState(CEventList *this_ptr,_FILE *file_handle);

// Original: core_event.cpp_CEventList_saveState_FUN_00481330
// Address: 00481330
int __cdecl CEventList::saveState(CEventList *this_ptr,_FILE *file_handle);

// Original: core_event.cpp_FUN_00481620
// Address: 00481620
void FUN_00481620(undefined4 *param_1);

// Original: core_event.cpp_CRuleList_insert_FUN_00481630
// Address: 00481630
void CRuleList::insert(int *param_1,int param_2,char *param_3,char *param_4);

// Original: core_event.cpp_CRuleList_remove_FUN_00481770
// Address: 00481770
void CRuleList::remove(int *param_1,int param_2);

// Original: core_event.cpp_CRuleList_findFirst_FUN_00481840
// Address: 00481840
int __cdecl CRuleList::findFirst(CRuleList *this_ptr);

// Original: core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890
// Address: 00481890
int __cdecl CRuleList::evaluateAndRun(CRuleList *this_ptr);

// Original: core_event.cpp_getVectorDistance_FUN_004818e0
// Address: 004818e0
float getVectorDistance(void);

// Original: core_event.cpp_getSelectedCameraIndex_FUN_00481920
// Address: 00481920
int __cdecl getSelectedCameraIndex(CDemonSet *set_ptr);

// Original: core_event.cpp_FUN_00481930
// Address: 00481930
undefined4 FUN_00481930(void);

// Original: core_event.cpp_FUN_00481950
// Address: 00481950
undefined4 * FUN_00481950(undefined4 *param_1,undefined4 *param_2);

// Original: core_event.cpp_FUN_00481960
// Address: 00481960
undefined4 * FUN_00481960(void);

// Original: core_event.cpp_FUN_00481970
// Address: 00481970
undefined4 * FUN_00481970(void);
