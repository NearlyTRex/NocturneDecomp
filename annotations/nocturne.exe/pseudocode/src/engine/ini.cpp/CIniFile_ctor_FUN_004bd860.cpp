// Name: engine_ini.cpp_CIniFile_ctor_FUN_004bd860
// Address: 004bd860
// Address Range: [[004bd860, 004bd884]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004bd860(CIniFile *this_ptr,char *filename,char *section)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004bd860(CIniFile *this_ptr,char *filename,char *section)

{
  engine_ini_cpp_CIniFile_init_FUN_004bd890(this_ptr->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004bd8d0(this_ptr,section);
  return this_ptr;
}
