// Name: core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860
// Address: 00508860
// Address Range: [[00508860, 00508877]]
// Convention: __cdecl
// Signature: CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager *this_ptr)

#include "nocturne.h"

CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager *this_ptr)

{
  CFileManager *pCVar1;
  
  pCVar1 = engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(&this_ptr->base);
  pCVar1->vtable = &g_CDemonFileManagerVTable;
  return (CDemonFileManager *)pCVar1;
}
