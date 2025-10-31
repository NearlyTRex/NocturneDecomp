#pragma once

// Function prototypes for engine/ini.cpp
// Generated from Ghidra function signatures

// Original: engine_ini.cpp_staticInit_FUN_004fb240
// Address: 004fb240
void staticInit(void);

// Original: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
int CIni::getProfileString(CIni * this_ptr, char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename);

// Original: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004fb470
// Address: 004fb470
int CIni::findLineNumberOfVariable(CIni * this_ptr, char * section, char * key, char * value, char * filename);

// Original: engine_ini.cpp_CIni_writeProfileString_FUN_004fb660
// Address: 004fb660
int CIni::writeProfileString(CIni * this_ptr, char * section, char * key, char * value, char * filename);

// Original: engine_ini.cpp_getProfileString_FUN_004fb960
// Address: 004fb960
void getProfileString(char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename);

// Original: engine_ini.cpp_getProfileInteger_FUN_004fb9a0
// Address: 004fb9a0
int getProfileInteger(char * section, char * key, char * default_value, char * filename);

// Original: engine_ini.cpp_writeProfileString_FUN_004fba40
// Address: 004fba40
void writeProfileString(char * section, char * key, char * value, char * filename);

// Original: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
// Address: 004fba70
CIniFile * CIniFile::ctor(CIniFile * this, char * filename, int read_mode);

// Original: engine_ini.cpp_CIniFile_init_FUN_004fbaa0
// Address: 004fbaa0
void CIniFile::init(char * dest, char * source);

// Original: engine_ini.cpp_CIniFile_readIniHeader_FUN_004fbae0
// Address: 004fbae0
void CIniFile::readIniHeader(CIniFile * this, char * section);

// Original: engine_ini.cpp_CIniFile_getString_FUN_004fbb20
// Address: 004fbb20
void CIniFile::getString(CIniFile * this, char * key, char * output_buffer, int buffer_size, char * default_value);

// Original: engine_ini.cpp_CIniFile_setString_FUN_004fbbb0
// Address: 004fbbb0
void CIniFile::setString(CIniFile * this, char * key, char * value);

// Original: engine_ini.cpp_CIniFile_getInteger_FUN_004fbc30
// Address: 004fbc30
void CIniFile::getInteger(CIniFile * ini_file, char * key_name, int * value_ptr);

// Original: engine_ini.cpp_CIniFile_setInteger_FUN_004fbc90
// Address: 004fbc90
void CIniFile::setInteger(CIniFile * this_ptr, char * key, int value);

// Original: engine_ini.cpp_CIniFile_getFloat_FUN_004fbcd0
// Address: 004fbcd0
void CIniFile::getFloat(CIniFile * this, char * key, float * output);

// Original: engine_ini.cpp_CIniFile_setFloatValue_FUN_004fbd30
// Address: 004fbd30
void CIniFile::setFloatValue(CIniFile * this, char * key, float value);

// Original: engine_ini.cpp_CIni_ctor_FUN_004fbd70
// Address: 004fbd70
CIni * CIni::ctor(CIni * this_ptr);

// Original: engine_ini.cpp_CIni_dtor_FUN_004fbd80
// Address: 004fbd80
CIni * CIni::dtor(CIni * this_ptr);
