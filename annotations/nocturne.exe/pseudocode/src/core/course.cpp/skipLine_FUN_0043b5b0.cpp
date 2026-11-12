// Name: core_course.cpp_skipLine_FUN_0043b5b0
// Address: 0043b5b0
// Address Range: [[0043b5b0, 0043b5c8]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_skipLine_FUN_0043b5b0(_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_course_cpp_skipLine_FUN_0043b5b0(_FILE *file_handle)

{
  int iVar1;
  
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) {
      return;
    }
  } while (iVar1 != 10);
  return;
}
