// Name: core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860
// Address: 00508860
// Address Range: [[00508860, 00508877]]
// Convention: __cdecl
// Signature: CDemonFileManager * core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager * this_ptr)
// Globals:
//   CFileManager_vtable g_CDemonFileManagerVTable
// Function calls:
//   engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0

#include "nocturne.h"

CDemonFileManager * __cdecl
core_fileman_cpp_CDemonFileManager_ctor_FUN_00508860(CDemonFileManager *this_ptr)

{
  CFileManager *pCVar1;
  
  pCVar1 = engine_fileio_cpp_CFileManager_ctor_FUN_004b53a0(&this_ptr->base_filemanager);
  pCVar1->vtable = &g_CDemonFileManagerVTable;
  return (CDemonFileManager *)pCVar1;
}


// Assembly code:
// 00508860: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_fileman.cpp_CDemonFileManager_ctor_FUN_00508860
//   XREF to: Stack[0x4] (READ)
// 00508864: PUSH EDX
// 00508865: CALL engine_fileio.cpp_CFileManager_ctor_FUN_004b53a0
//   XREF to: 004b53a0 (UNCONDITIONAL_CALL)
// 0050886a: ADD ESP,0x4
// 0050886d: MOV dword ptr [EAX + 0x138810],0x660d24
//   XREF to: 00660d24 (DATA)
// 00508877: RET
