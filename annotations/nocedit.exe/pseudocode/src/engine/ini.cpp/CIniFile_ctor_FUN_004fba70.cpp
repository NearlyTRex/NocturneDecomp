// Name: engine_ini.cpp_CIniFile_ctor_FUN_004fba70
// Address: 004fba70
// Address Range: [[004fba70, 004fba94]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile *this_ptr,char *filename,char *section)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004fba70(CIniFile *this_ptr,char *filename,char *section)

{
  engine_ini_cpp_initIniFile_FUN_004fbaa0(this_ptr->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004fbae0(this_ptr,section);
  return this_ptr;
}
