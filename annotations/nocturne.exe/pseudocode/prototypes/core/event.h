#pragma once

// Function prototypes for core/event.cpp
// Generated from Ghidra function signatures

// Original: core_event.cpp_staticInit_FUN_0047a1d0
// Address: 0047a1d0
void __cdecl staticInit(void);

// Original: core_event.cpp_FUN_0047a1e0
// Address: 0047a1e0
undefined4 FUN_0047a1e0(void);

// Original: core_event.cpp_FUN_0047a210
// Address: 0047a210
undefined4 FUN_0047a210(undefined4 param_1);

// Original: core_event.cpp_FUN_0047a260
// Address: 0047a260
void FUN_0047a260(void);

// Original: core_event.cpp_FUN_0047a280
// Address: 0047a280
void FUN_0047a280(void);

// Original: core_event.cpp_FUN_0047a2b0
// Address: 0047a2b0
undefined4 FUN_0047a2b0(void);

// Original: core_event.cpp_FUN_0047a350
// Address: 0047a350
undefined4 FUN_0047a350(void);

// Original: core_event.cpp_resolveActorByName_FUN_0047a390
// Address: 0047a390
int __cdecl resolveActorByName(char *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_event.cpp_parseVectorLocation_FUN_0047a4c0
// Address: 0047a4c0
undefined4 __cdecl parseVectorLocation(int param_1,int *param_2,undefined4 *param_3);

// Original: core_event.cpp_FUN_0047a5e0
// Address: 0047a5e0
void FUN_0047a5e0(char *param_1);

// Original: core_event.cpp_extractParenArg_FUN_0047a650
// Address: 0047a650
char * __cdecl extractParenArg(int *param_1,char *param_2,int param_3);

// Original: core_event.cpp_parseDeathType_FUN_0047a760
// Address: 0047a760
undefined4 __cdecl parseDeathType(undefined4 param_1,undefined4 *param_2);

// Original: core_event.cpp_parseDamageType_FUN_0047a8f0
// Address: 0047a8f0
undefined4 __cdecl parseDamageType(undefined4 param_1,undefined4 *param_2);

// Original: core_event.cpp_CEventList_ctor_FUN_0047a9e0
// Address: 0047a9e0
undefined4 CEventList::ctor(undefined4 param_1);

// Original: core_event.cpp_CEventList_reset_FUN_0047aa00
// Address: 0047aa00
void __cdecl CEventList::reset(undefined4 *param_1);

// Original: core_event.cpp_CEventList_process_FUN_0047aa50
// Address: 0047aa50
void __cdecl CEventList::process(undefined4 *param_1);

// Original: core_event.cpp_CEventList_executeCommands_FUN_0047ab70
// Address: 0047ab70
void __cdecl CEventList::executeCommands(undefined4 param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_executeCommandString_FUN_0047ab90
// Address: 0047ab90
undefined4 __cdecl CEventList::executeCommandString(undefined4 param_1,char *param_2);

// Original: core_event.cpp_CEventList_executeCommand_FUN_0047ac50
// Address: 0047ac50
undefined4 __cdecl CEventList::executeCommand(int *param_1,char *param_2);

// Original: core_event.cpp_CEventList_resolveVariable_FUN_0047dba0
// Address: 0047dba0
undefined4 __cdecl CEventList::resolveVariable(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_evaluateCondition_FUN_0047dc30
// Address: 0047dc30
int __cdecl CEventList::evaluateCondition(undefined4 param_1,char *param_2);

// Original: core_event.cpp_CEventList_validateCondition_FUN_0047dc90
// Address: 0047dc90
undefined * __cdecl CEventList::validateCondition(undefined4 param_1,char *param_2);

// Original: core_event.cpp_CEventList_validateCommands_FUN_0047dcd0
// Address: 0047dcd0
undefined * __cdecl CEventList::validateCommands(undefined4 param_1,char *param_2);

// Original: core_event.cpp_CEventList_evaluateExpression_FUN_0047dd10
// Address: 0047dd10
int __cdecl CEventList::evaluateExpression(undefined4 param_1,int param_2);

// Original: core_event.cpp_CEventList_render_FUN_0047dd80
// Address: 0047dd80
void __cdecl CEventList::render(int param_1);

// Original: core_event.cpp_CEventList_evaluateAtom_FUN_0047e0d0
// Address: 0047e0d0
uint __cdecl CEventList::evaluateAtom(undefined4 param_1,int param_2,int *param_3);

// Original: core_event.cpp_CEventList_evaluateLogicalExpr_FUN_00480220
// Address: 00480220
int __cdecl CEventList::evaluateLogicalExpr(undefined4 param_1,int param_2,int *param_3);

// Original: core_event.cpp_CEventList_addOrRemovePersistentEvent_FUN_004802e0
// Address: 004802e0
void __cdecl CEventList::addOrRemovePersistentEvent(int param_1,char *param_2,int param_3);

// Original: core_event.cpp_CEventList_resetGameFlags_FUN_00480410
// Address: 00480410
void __cdecl CEventList::resetGameFlags(int param_1);

// Original: core_event.cpp_CEventList_addOrRemoveGameFlag_FUN_00480420
// Address: 00480420
void __cdecl CEventList::addOrRemoveGameFlag(int param_1,char *param_2,int param_3);

// Original: core_event.cpp_CEventList_setTimerEvent_FUN_00480550
// Address: 00480550
void __cdecl CEventList::setTimerEvent(int param_1,char *param_2,float param_3);

// Original: core_event.cpp_CEventList_setCounter_FUN_004806d0
// Address: 004806d0
void __cdecl CEventList::setCounter(int param_1,char *param_2,int param_3);

// Original: core_event.cpp_CEventList_getCounterValue_FUN_004807e0
// Address: 004807e0
undefined4 __cdecl CEventList::getCounterValue(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_findPersistentEvent_FUN_00480810
// Address: 00480810
int __cdecl CEventList::findPersistentEvent(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_findGameFlag_FUN_00480860
// Address: 00480860
int __cdecl CEventList::findGameFlag(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_findTimer_FUN_004808b0
// Address: 004808b0
int __cdecl CEventList::findTimer(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_findCounter_FUN_00480900
// Address: 00480900
int CEventList::findCounter(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_setActorVariable_FUN_00480950
// Address: 00480950
void __cdecl CEventList::setActorVariable(int param_1,char *param_2,char *param_3);

// Original: core_event.cpp_CEventList_getActorByVarName_FUN_00480b30
// Address: 00480b30
undefined4 __cdecl CEventList::getActorByVarName(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_findActorVariable_FUN_00480ba0
// Address: 00480ba0
int __cdecl CEventList::findActorVariable(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_getSfxHandle_FUN_00480bf0
// Address: 00480bf0
undefined4 CEventList::getSfxHandle(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_setSfxHandle_FUN_00480c30
// Address: 00480c30
void __cdecl CEventList::setSfxHandle(int param_1,char *param_2,undefined4 param_3);

// Original: core_event.cpp_CEventList_findSfxEntry_FUN_00480d10
// Address: 00480d10
int __cdecl CEventList::findSfxEntry(int param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_updateSfxEntries_FUN_00480d60
// Address: 00480d60
void __cdecl CEventList::updateSfxEntries(int param_1);

// Original: core_event.cpp_CEventList_restartSfxEntries_FUN_00480eb0
// Address: 00480eb0
void __cdecl CEventList::restartSfxEntries(int param_1);

// Original: core_event.cpp_isValidIdentifierChar_FUN_00480f40
// Address: 00480f40
undefined4 __cdecl isValidIdentifierChar(int param_1);

// Original: core_event.cpp_CEventList_loadState_FUN_00480f70
// Address: 00480f70
int __cdecl CEventList::loadState(int *param_1,undefined4 param_2);

// Original: core_event.cpp_CEventList_saveState_FUN_00481330
// Address: 00481330
int __cdecl CEventList::saveState(int *param_1,undefined4 param_2);

// Original: core_event.cpp_FUN_00481620
// Address: 00481620
void FUN_00481620(undefined4 *param_1);

// Original: core_event.cpp_FUN_00481630
// Address: 00481630
void FUN_00481630(int *param_1,int param_2,char *param_3,char *param_4);

// Original: core_event.cpp_FUN_00481770
// Address: 00481770
void FUN_00481770(int *param_1,int param_2);

// Original: core_event.cpp_CRuleList_findFirst_FUN_00481840
// Address: 00481840
int __cdecl CRuleList::findFirst(int *param_1);

// Original: core_event.cpp_CRuleList_evaluateAndRun_FUN_00481890
// Address: 00481890
undefined4 __cdecl CRuleList::evaluateAndRun(int param_1);

// Original: core_event.cpp_FUN_004818e0
// Address: 004818e0
float FUN_004818e0(void);

// Original: core_event.cpp_getSelectedCameraIndex_FUN_00481920
// Address: 00481920
undefined4 __cdecl getSelectedCameraIndex(int param_1);

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
