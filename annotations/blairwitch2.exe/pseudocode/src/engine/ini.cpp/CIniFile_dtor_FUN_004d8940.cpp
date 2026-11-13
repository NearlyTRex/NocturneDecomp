// Name: engine_ini.cpp_CIniFile_dtor_FUN_004d8940
// Address: 004d8940
// Address Range: [[004d8940, 004d8986]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_CIniFile_dtor_FUN_004d8940(CIniFile *this_ptr,uint flags)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_CIniFile_dtor_FUN_004d8940(CIniFile *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CIniFileTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004d8940_005f8ef4;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005b7fdc(this_ptr);
  return this_ptr;
}
