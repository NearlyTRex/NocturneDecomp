// Name: engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
// Address: 004b53a0
// Address Range: [[004b53a0, 004b53c2]]
// Convention: __cdecl
// Signature: CFileManager * __cdecl engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(CFileManager *this_ptr)

#include "nocturne.h"

CFileManager * __cdecl engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(CFileManager *this_ptr)

{
  this_ptr->operation_mode = 1;
  this_ptr->batch_mode = 0;
  this_ptr->vtable = &g_CFileManagerVTable;
  return this_ptr;
}
