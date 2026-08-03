#pragma once

// Function prototypes for engine/ini.cpp
// Generated from Ghidra function signatures

// Original: engine_ini.cpp_staticInit_FUN_004bd090
// Address: 004bd090
void __cdecl staticInit(void);

// Original: engine_ini.cpp_CIni_getProfileString_FUN_004bd0a0
// Address: 004bd0a0
int __cdecl CIni::getProfileString(CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);

// Original: engine_ini.cpp_CIni_findLineNumberOfVariable_FUN_004bd2b0
// Address: 004bd2b0
int __cdecl CIni::findLineNumberOfVariable(CIni *this_ptr,char *section,char *key,char *value,char *filename);

// Original: engine_ini.cpp_CIni_writeProfileString_FUN_004bd480
// Address: 004bd480
int __cdecl CIni::writeProfileString(CIni *this_ptr,char *section,char *key,char *value,char *filename);

// Original: engine_ini.cpp_getProfileString_FUN_004bd750
// Address: 004bd750
void __cdecl getProfileString(char *section,char *key,char *default_value,char *output_buffer,int buffer_size,char *filename);

// Original: engine_ini.cpp_getProfileInteger_FUN_004bd790
// Address: 004bd790
int __cdecl getProfileInteger(char *section,char *key,int default_value,char *filename);

// Original: engine_ini.cpp_writeProfileString_FUN_004bd830
// Address: 004bd830
void __cdecl writeProfileString(char *section,char *key,char *value,char *filename);

// Original: engine_ini.cpp_CIniFile_ctor_FUN_004bd860
// Address: 004bd860
CIniFile * __cdecl CIniFile::ctor(CIniFile *this_ptr,char *filename,char *section);

// Original: engine_ini.cpp_initIniFile_FUN_004bd890
// Address: 004bd890
void __cdecl initIniFile(char *dest,char *source);

// Original: engine_ini.cpp_CIniFile_readIniHeader_FUN_004bd8d0
// Address: 004bd8d0
void __cdecl CIniFile::readIniHeader(CIniFile *this_ptr,char *section);

// Original: engine_ini.cpp_CIniFile_getString_FUN_004bd910
// Address: 004bd910
void __cdecl CIniFile::getString(CIniFile *this_ptr,char *key,char *output_buffer,int buffer_size);

// Original: engine_ini.cpp_CIniFile_setString_FUN_004bd9a0
// Address: 004bd9a0
void __cdecl CIniFile::setString(CIniFile *this_ptr,char *key,char *value);

// Original: engine_ini.cpp_CIniFile_getInteger_FUN_004bda20
// Address: 004bda20
void __cdecl CIniFile::getInteger(CIniFile *this_ptr,char *key_name,int *value_ptr);

// Original: engine_ini.cpp_CIniFile_setInteger_FUN_004bda80
// Address: 004bda80
void __cdecl CIniFile::setInteger(CIniFile *this_ptr,char *key,int value);

// Original: engine_ini.cpp_CIniFile_getFloat_FUN_004bdac0
// Address: 004bdac0
void __cdecl CIniFile::getFloat(CIniFile *this_ptr,char *key,float *output);

// Original: engine_ini.cpp_CIniFile_setFloatValue_FUN_004bdb20
// Address: 004bdb20
void __cdecl CIniFile::setFloatValue(CIniFile *this_ptr,char *key,float value);

// Original: engine_ini.cpp_CIni_ctor_FUN_004bdb60
// Address: 004bdb60
CIni * __cdecl CIni::ctor(CIni *this_ptr);

// Original: engine_ini.cpp_CIni_dtor_FUN_004bdb70
// Address: 004bdb70
CIni * __cdecl CIni::dtor(CIni *this_ptr,uint flags);
