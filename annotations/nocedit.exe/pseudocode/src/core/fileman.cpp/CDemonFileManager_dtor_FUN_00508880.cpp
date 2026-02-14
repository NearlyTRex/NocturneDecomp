// Name: core_fileman.cpp_CDemonFileManager_dtor_FUN_00508880
// Address: 00508880
// Address Range: [[00508880, 0050888f]]
// Convention: __cdecl
// Signature: CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager *this_ptr,uint flags)

#include "nocturne.h"

CDemonFileManager * __cdecl core_fileman_cpp_CDemonFileManager_dtor_FUN_00508880(CDemonFileManager *this_ptr,uint flags)

{
  CFileManager *pCVar1;
  
  pCVar1 = engine_fileio_cpp_CFileManager_dtor_FUN_004b53d0(&this_ptr->base,1);
  return (CDemonFileManager *)pCVar1;
}
