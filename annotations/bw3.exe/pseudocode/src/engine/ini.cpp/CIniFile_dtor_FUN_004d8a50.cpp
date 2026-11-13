// Name: engine_ini.cpp_CIniFile_dtor_FUN_004d8a50
// Address: 004d8a50
// Address Range: [[004d8a50, 004d8a96]]
// Convention: __cdecl
// Signature: CIniFile * __cdecl engine_ini_cpp_CIniFile_dtor_FUN_004d8a50(CIniFile *this_ptr,uint flags)

#include "nocturne.h"

CIniFile * __cdecl engine_ini_cpp_CIniFile_dtor_FUN_004d8a50(CIniFile *this_ptr,uint flags)

{
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CIniFileTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &PTR_engine_ini_cpp_CIniFile_dtor_FUN_004d8a50_005e2074;
  if ((flags & 2) == 0) {
    return this_ptr;
  }
  FUN_005a30c4(this_ptr);
  return this_ptr;
}
