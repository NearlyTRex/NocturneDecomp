// Name: engine_dosio.cpp_CFileFinder_closeSearch_FUN_00465ca0
// Address: 00465ca0
// Address Range: [[00465ca0, 00465cdb]]
// Convention: __cdecl
// Signature: void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder *this_ptr)

#include "nocturne.h"

void __cdecl engine_dosio_cpp_CFileFinder_closeSearch_FUN_00465ca0(CFileFinder *this_ptr)

{
  if (*(int *)&this_ptr->field_0x10c == 0) {
    engine_dosio_cpp_CFileFinder_reset_FUN_00465ce0(this_ptr);
    return;
  }
  FindClose(*(HANDLE *)&this_ptr->field_0x110);
  *(uint *)&this_ptr->field_0x10c = 0;
  engine_dosio_cpp_CFileFinder_reset_FUN_00465ce0(this_ptr);
  return;
}
