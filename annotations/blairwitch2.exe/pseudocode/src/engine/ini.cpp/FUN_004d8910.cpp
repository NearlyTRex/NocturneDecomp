// Name: engine_ini.cpp_FUN_004d8910
// Address: 004d8910
// Address Range: [[004d8910, 004d893e]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_FUN_004d8910(CIniFile *this_ptr,char *filename,char *section)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_FUN_004d8910(CIniFile *this_ptr,char *filename,char *section)

{
  this_ptr->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004d8940_005f8ef4;
  engine_ini_cpp_initIniFile_FUN_004d8990(this_ptr->filename,filename);
  engine_ini_cpp_CIniFile_readIniHeader_FUN_004d89d0(this_ptr,section);
  return this_ptr;
}
