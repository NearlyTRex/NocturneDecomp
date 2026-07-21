// Name: engine_dosio.cpp_CFileFinder_openSearch_FUN_00456c40
// Address: 00456c40
// Address Range: [[00456c40, 00456cb9]]
// Convention: __cdecl
// Signature: undefined4 __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(int param_1,LPCSTR param_2)

#include "nocturne.h"

uint __cdecl engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(int param_1,LPCSTR param_2)

{
  HANDLE pvVar1;
  _WIN32_FIND_DATAA _Stack_144;
  
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(param_1);
  pvVar1 = FindFirstFileA(param_2,&_Stack_144);
  if (pvVar1 == (HANDLE)0xffffffff) {
    if (*(int *)(param_1 + 0x10c) == 0) {
      engine_dosio_cpp_CFileFinder_reset_FUN_00456d80(param_1);
      return *(uint *)(param_1 + 0x10c);
    }
  }
  else {
    *(HANDLE *)(param_1 + 0x110) = pvVar1;
    engine_dosio_cpp_CFileFinder_convertStruct_FUN_00456d90(param_1,&_Stack_144);
    *(uint *)(param_1 + 0x10c) = 1;
  }
  return *(uint *)(param_1 + 0x10c);
}
