// Name: engine_ini.cpp_CIniFile_dtor_FUN_004f4b30
// Address: 004f4b30
// Address Range: [[004f4b30, 004f4b76]]
// Convention: unknown
// Signature: CIniFile * engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(CIniFile *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CIniFile * engine_ini_cpp_CIniFile_dtor_FUN_004f4b30(CIniFile *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CIniFileTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004f4b30_00602964;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005c0344(this_ptr);
  return this_ptr;
}
