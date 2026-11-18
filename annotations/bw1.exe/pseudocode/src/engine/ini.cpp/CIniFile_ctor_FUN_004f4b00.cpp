// Name: engine_ini.cpp_CIniFile_ctor_FUN_004f4b00
// Address: 004f4b00
// Address Range: [[004f4b00, 004f4b2e]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004f4b00(CIniFile *this_ptr,char *filename,char *section)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_CIniFile_ctor_FUN_004f4b00(CIniFile *this_ptr,char *filename,char *section)

{
  this_ptr->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004f4b30_00602964;
  engine_ini_cpp_initIniFile_FUN_004f4b80(this_ptr->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004f4bc0(this_ptr,section);
  return this_ptr;
}
