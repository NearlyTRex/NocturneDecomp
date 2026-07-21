#pragma once

// Function prototypes for engine/ini.cpp
// Generated from Ghidra function signatures

// Original: engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
// Address: 004bd0a0
undefined4 __cdecl CIni::getProfileString(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4,char *param_5,int param_6,undefined4 param_7);

// Original: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
// Address: 004bd2b0
int CIni::findLineNumberOfVariable(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);

// Original: engine_ini.cpp_CIni_writeProfileString_FUN_004bd480
// Address: 004bd480
undefined4 __cdecl CIni::writeProfileString(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5);

// Original: engine_ini.cpp_getProfileString_FUN_004bd750
// Address: 004bd750
void __cdecl getProfileString(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6);

// Original: engine_ini.cpp_writeProfileString_FUN_004bd830
// Address: 004bd830
void __cdecl writeProfileString(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: engine_ini.cpp_CIniFile_ctor_FUN_004bd860
// Address: 004bd860
undefined4 __cdecl CIniFile::ctor(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_ini.cpp_CIniFile_init_FUN_004bd890
// Address: 004bd890
void __cdecl CIniFile::init(char *param_1,char *param_2);

// Original: engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
// Address: 004bd8d0
void CIniFile::readIniHeader(int param_1,char *param_2);

// Original: engine_ini.cpp_CIniFile_getString_FUN_004bd910
// Address: 004bd910
void CIniFile::getString(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);

// Original: engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
// Address: 004bd9a0
void __cdecl CIniFile::setString(char *param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
// Address: 004bda20
void CIniFile::getInteger(undefined4 param_1,undefined4 param_2,undefined4 *param_3);

// Original: engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
// Address: 004bda80
void CIniFile::setInteger(undefined4 param_1,undefined4 param_2,undefined4 param_3);

// Original: engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
// Address: 004bdac0
void __cdecl CIniFile::getFloat(undefined4 param_1,undefined4 param_2,float *param_3);

// Original: engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20
// Address: 004bdb20
void CIniFile::setFloatValue(undefined4 param_1,undefined4 param_2,float param_3);
