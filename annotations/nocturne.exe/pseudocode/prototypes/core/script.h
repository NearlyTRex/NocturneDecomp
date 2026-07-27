#pragma once

// Function prototypes for core/script.cpp
// Generated from Ghidra function signatures

// Original: core_script.cpp_staticInit_FUN_004fde80
// Address: 004fde80
void __cdecl staticInit(void);

// Original: core_script.cpp_validateActorVariableName_FUN_004fdec0
// Address: 004fdec0
undefined4 __cdecl validateActorVariableName(char *param_1);

// Original: core_script.cpp_trimLine_FUN_004fdf60
// Address: 004fdf60
void trimLine(char *param_1,char *param_2);

// Original: core_script.cpp_trimString_FUN_004fe000
// Address: 004fe000
void __cdecl trimString(char *param_1);

// Original: core_script.cpp_skipWhitespace_FUN_004fe070
// Address: 004fe070
void __cdecl skipWhitespace(char *param_1);

// Original: core_script.cpp_parseArgument_FUN_004fe090
// Address: 004fe090
char * __cdecl parseArgument(int *param_1,int param_2,int param_3);

// Original: core_script.cpp_parseConditionExpr_FUN_004fe140
// Address: 004fe140
void __cdecl parseConditionExpr(undefined4 param_1,undefined4 param_2);

// Original: core_script.cpp_getActor_FUN_004fe180
// Address: 004fe180
int __cdecl getActor(char *param_1,undefined4 param_2,undefined4 param_3);

// Original: core_script.cpp_getActionState_FUN_004fe300
// Address: 004fe300
int __cdecl getActionState(int param_1,undefined4 param_2);

// Original: core_script.cpp_parseBodyPartMask_FUN_004fe3d0
// Address: 004fe3d0
undefined4 __cdecl parseBodyPartMask(int param_1,int param_2,undefined4 *param_3);

// Original: core_script.cpp_FUN_004fe490
// Address: 004fe490
int FUN_004fe490(int param_1);

// Original: core_script.cpp_FUN_004fe4d0
// Address: 004fe4d0
int FUN_004fe4d0(int param_1);

// Original: core_script.cpp_FUN_004fe500
// Address: 004fe500
void FUN_004fe500(int param_1);

// Original: core_script.cpp_CScript_freeParsedLines_FUN_004fe550
// Address: 004fe550
void __cdecl CScript::freeParsedLines(int param_1);

// Original: core_script.cpp_CScript_process_FUN_004fe5b0
// Address: 004fe5b0
void __cdecl CScript::process(int *param_1);

// Original: core_script.cpp_CScript_getLetterboxHeight_FUN_004fe710
// Address: 004fe710
int CScript::getLetterboxHeight(void);

// Original: core_script.cpp_FUN_004fe770
// Address: 004fe770
void FUN_004fe770(int param_1);

// Original: core_script.cpp_FUN_004fe9d0
// Address: 004fe9d0
void FUN_004fe9d0(int param_1,int param_2,int param_3,int param_4,int param_5);

// Original: core_script.cpp_FUN_004febd0
// Address: 004febd0
undefined4 FUN_004febd0(int param_1,undefined4 param_2,int param_3);

// Original: core_script.cpp_FUN_004fee30
// Address: 004fee30
void FUN_004fee30(int param_1);

// Original: core_script.cpp_FUN_004fef60
// Address: 004fef60
undefined * FUN_004fef60(int param_1,int *param_2);

// Original: core_script.cpp_FUN_004feff0
// Address: 004feff0
void FUN_004feff0(undefined4 *param_1);

// Original: core_script.cpp_CScript_executeInitSection_FUN_004ff170
// Address: 004ff170
void __cdecl CScript::executeInitSection(int param_1);

// Original: core_script.cpp_CScript_step_FUN_004ff2c0
// Address: 004ff2c0
uint __cdecl CScript::step(undefined4 *param_1,undefined4 param_2);

// Original: core_script.cpp_CScript_getDialogDuration_FUN_005049b0
// Address: 005049b0
float CScript::getDialogDuration(int param_1,undefined4 param_2,undefined4 param_3,char *param_4);

// Original: core_script.cpp_CScript_processTimer_FUN_00504b70
// Address: 00504b70
undefined4 __cdecl CScript::processTimer(int param_1,float param_2,float *param_3);

// Original: core_script.cpp_CScript_setSpeaker_FUN_00504bf0
// Address: 00504bf0
void __cdecl CScript::setSpeaker(int param_1,int param_2);

// Original: core_script.cpp_CScript_findLabelIndex_FUN_00504c10
// Address: 00504c10
int __cdecl CScript::findLabelIndex(int param_1,undefined4 param_2);

// Original: core_script.cpp_CScript_skipCommands_FUN_00504c70
// Address: 00504c70
int CScript::skipCommands(int param_1,int param_2,int param_3);

// Original: core_script.cpp_FUN_00504d60
// Address: 00504d60
void FUN_00504d60(int param_1);

// Original: core_script.cpp_FUN_00504d90
// Address: 00504d90
undefined4 FUN_00504d90(int *param_1);

// Original: core_script.cpp_CScript_dbLoad_FUN_00504e70
// Address: 00504e70
void __cdecl CScript::dbLoad(int param_1,undefined4 param_2);

// Original: core_script.cpp_CScript_findDialogEntry_FUN_00505180
// Address: 00505180
int __cdecl CScript::findDialogEntry(int param_1,undefined4 param_2);

// Original: core_script.cpp_readActorReference_FUN_00505200
// Address: 00505200
void __cdecl readActorReference(undefined4 param_1,undefined4 *param_2);

// Original: core_script.cpp_writeActorReference_FUN_00505280
// Address: 00505280
void __cdecl writeActorReference(undefined4 param_1,int *param_2);

// Original: core_script.cpp_CScript_loadState_FUN_005052c0
// Address: 005052c0
int __cdecl CScript::loadState(int param_1,undefined4 param_2);

// Original: core_script.cpp_FUN_005055f0
// Address: 005055f0
void FUN_005055f0(int param_1,undefined4 param_2);

// Original: core_script.cpp_CScript_computeChecksum_FUN_00505820
// Address: 00505820
undefined4 __cdecl CScript::computeChecksum(int param_1);

// Original: core_script.cpp_makeVector_FUN_00505880
// Address: 00505880
undefined4 * __cdecl makeVector(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: core_script.cpp_getDeformableModelFilename_FUN_005058b0
// Address: 005058b0
int __cdecl getDeformableModelFilename(int param_1);
