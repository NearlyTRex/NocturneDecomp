#pragma once

// Function prototypes for core/event.cpp
// Generated from Ghidra function signatures

// Original: core_event.cpp_staticInit_FUN_004aa260
// Address: 004aa260
void __cdecl staticInit(void);

// Original: core_event.cpp_setEventError_FUN_004aa270
// Address: 004aa270
int __cdecl setEventError(char *source_file,int source_line,char *error_message);

// Original: core_event.cpp_formatEventError_FUN_004aa2a0
// Address: 004aa2a0
int __cdecl formatEventError(char *format,...) __attribute__((format(printf, 1, 2)));

// Original: core_event.cpp_skipWhitespace_FUN_004aa2d0
// Address: 004aa2d0
char * __cdecl skipWhitespace(char *str);

// Original: core_event.cpp_skipWhitespaceIndexed_FUN_004aa2f0
// Address: 004aa2f0
int * __cdecl skipWhitespaceIndexed(char *expression,int *parse_position);

// Original: core_event.cpp_parseComparisonOp_FUN_004aa320
// Address: 004aa320
int __cdecl parseComparisonOp(char *str);

// Original: core_event.cpp_parseIntOrCounter_FUN_004aa3c0
// Address: 004aa3c0
int __cdecl parseIntOrCounter(char *str);

// Original: core_event.cpp_resolveActorByName_FUN_004aa400
// Address: 004aa400
CDemonActor * __cdecl resolveActorByName(char *name,uint class_hash,char *class_name);

// Original: core_event.cpp_parseVectorLocation_FUN_004aa530
// Address: 004aa530
int __cdecl parseVectorLocation(char *buffer,int *offset,CVector3f *out_position);

// Original: core_event.cpp_trimWhitespace_FUN_004aa650
// Address: 004aa650
void __cdecl trimWhitespace(char *str);

// Original: core_event.cpp_extractParenArg_FUN_004aa6c0
// Address: 004aa6c0
char * __cdecl extractParenArg(char **cursor,char *out_buf,int max_len);

// Original: core_event.cpp_parseDeathType_FUN_004aa7d0
// Address: 004aa7d0
int __cdecl parseDeathType(char *type_name,int *out_type_id);

// Original: core_event.cpp_parseDamageType_FUN_004aa960
// Address: 004aa960
int __cdecl parseDamageType(char *type_name,int *out_type_id);

// Original: core_event.cpp_CEventList_ctor_FUN_004aaa50
// Address: 004aaa50
CEventList * __cdecl CEventList::ctor(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_reset_FUN_004aaa70
// Address: 004aaa70
void __cdecl CEventList::reset(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_process_FUN_004aaac0
// Address: 004aaac0
void __cdecl CEventList::process(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_executeCommands_FUN_004aabe0
// Address: 004aabe0
int __cdecl CEventList::executeCommands(CEventList *this_ptr,char *commands);

// Original: core_event.cpp_CEventList_executeCommandString_FUN_004aac00
// Address: 004aac00
int __cdecl CEventList::executeCommandString(CEventList *this_ptr,char *command_string);

// Original: core_event.cpp_CEventList_executeCommand_FUN_004aacc0
// Address: 004aacc0
int __cdecl CEventList::executeCommand(CEventList *this_ptr,char *command_buffer);

// Original: core_event.cpp_CEventList_resolveVariable_FUN_004adc10
// Address: 004adc10
int __cdecl CEventList::resolveVariable(CEventList *this_ptr,char *identifier);

// Original: core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
// Address: 004adca0
int __cdecl CEventList::evaluateCondition(CEventList *this_ptr,char *condition_expression);

// Original: core_event.cpp_CEventList_validateCondition_FUN_004add00
// Address: 004add00
char * __cdecl CEventList::validateCondition(CEventList *this_ptr,char *expression);

// Original: core_event.cpp_CEventList_validateCommands_FUN_004add40
// Address: 004add40
char * __cdecl CEventList::validateCommands(CEventList *this_ptr,char *commands);

// Original: core_event.cpp_CEventList_evaluateExpression_FUN_004add80
// Address: 004add80
int __cdecl CEventList::evaluateExpression(CEventList *this_ptr,char *expression);

// Original: core_event.cpp_CEventList_render_FUN_004addf0
// Address: 004addf0
void __cdecl CEventList::render(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_evaluateAtom_FUN_004ae140
// Address: 004ae140
int __cdecl CEventList::evaluateAtom(CEventList *this_ptr,char *expression,int *parse_position);

// Original: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_004b0270
// Address: 004b0270
int __cdecl CEventList::evaluateLogicalExpr(CEventList *this_ptr,char *expression,int *parse_position);

// Original: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004b0330
// Address: 004b0330
void __cdecl CEventList::addOrRemovePersistentEvent(CEventList *this_ptr,char *name,int add_flag);

// Original: core_event.cpp_CEventList_resetGameFlags_FUN_004b0460
// Address: 004b0460
void __cdecl CEventList::resetGameFlags(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_004b0470
// Address: 004b0470
void __cdecl CEventList::addOrRemoveGameFlag(CEventList *this_ptr,char *name,int add_flag);

// Original: core_event.cpp_CEventList_setTimerEvent_FUN_004b05a0
// Address: 004b05a0
void __cdecl CEventList::setTimerEvent(CEventList *this_ptr,char *name,float duration);

// Original: core_event.cpp_CEventList_setCounter_FUN_004b0720
// Address: 004b0720
void __cdecl CEventList::setCounter(CEventList *this_ptr,char *name,int value);

// Original: core_event.cpp_CEventList_getCounterValue_FUN_004b0830
// Address: 004b0830
int __cdecl CEventList::getCounterValue(CEventList *this_ptr,char *str);

// Original: core_event.cpp_CEventList_findPersistentEvent_FUN_004b0860
// Address: 004b0860
int __cdecl CEventList::findPersistentEvent(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findGameFlag_FUN_004b08b0
// Address: 004b08b0
int __cdecl CEventList::findGameFlag(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findTimer_FUN_004b0900
// Address: 004b0900
int __cdecl CEventList::findTimer(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findCounter_FUN_004b0950
// Address: 004b0950
int __cdecl CEventList::findCounter(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_setActorVariable_FUN_004b09a0
// Address: 004b09a0
void __cdecl CEventList::setActorVariable(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_getActorByVarName_FUN_004b0b80
// Address: 004b0b80
CDemonActor * __cdecl CEventList::getActorByVarName(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_findActorVariable_FUN_004b0bf0
// Address: 004b0bf0
int __cdecl CEventList::findActorVariable(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_getSfxHandle_FUN_004b0c40
// Address: 004b0c40
uint __cdecl CEventList::getSfxHandle(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_setSfxHandle_FUN_004b0c80
// Address: 004b0c80
void __cdecl CEventList::setSfxHandle(CEventList *this_ptr,char *name,uint sfx_handle);

// Original: core_event.cpp_CEventList_findSfxEntry_FUN_004b0d60
// Address: 004b0d60
int __cdecl CEventList::findSfxEntry(CEventList *this_ptr,char *name);

// Original: core_event.cpp_CEventList_updateSfxEntries_FUN_004b0db0
// Address: 004b0db0
void __cdecl CEventList::updateSfxEntries(CEventList *this_ptr);

// Original: core_event.cpp_CEventList_restartSfxEntries_FUN_004b0f00
// Address: 004b0f00
void __cdecl CEventList::restartSfxEntries(CEventList *this_ptr);

// Original: core_event.cpp_isValidIdentifierChar_FUN_004b0f90
// Address: 004b0f90
int __cdecl isValidIdentifierChar(int ch);

// Original: core_event.cpp_CEventList_loadState_FUN_004b0fc0
// Address: 004b0fc0
int __cdecl CEventList::loadState(CEventList *this_ptr,_FILE *file_handle);

// Original: core_event.cpp_CEventList_saveState_FUN_004b1380
// Address: 004b1380
int __cdecl CEventList::saveState(CEventList *this_ptr,_FILE *file_handle);

// Original: core_event.cpp_CRuleList_clear_FUN_004b1670
// Address: 004b1670
void __cdecl CRuleList::clear(CRuleList *this_ptr);

// Original: core_event.cpp_CRuleList_insert_FUN_004b1680
// Address: 004b1680
void __cdecl CRuleList::insert(CRuleList *this_ptr);

// Original: core_event.cpp_CRuleList_remove_FUN_004b17c0
// Address: 004b17c0
void __cdecl CRuleList::remove(CRuleList *this_ptr);

// Original: core_event.cpp_CRuleList_findFirst_FUN_004b1890
// Address: 004b1890
int __cdecl CRuleList::findFirst(CRuleList *this_ptr);

// Original: core_event.cpp_CRuleList_evaluateAndRun_FUN_004b18e0
// Address: 004b18e0
int __cdecl CRuleList::evaluateAndRun(CRuleList *this_ptr);

// Original: core_event.cpp_getVectorDistance_FUN_004b1930
// Address: 004b1930
float __cdecl getVectorDistance(CVector3f *a,CVector3f *b);

// Original: core_event.cpp_getSelectedCameraIndex_FUN_004b1970
// Address: 004b1970
int __cdecl getSelectedCameraIndex(CDemonSet *set_ptr);

// Original: core_event.cpp_isCharacterSpeaking_FUN_004b1980
// Address: 004b1980
int __cdecl isCharacterSpeaking(CCharacter *char_ptr);
