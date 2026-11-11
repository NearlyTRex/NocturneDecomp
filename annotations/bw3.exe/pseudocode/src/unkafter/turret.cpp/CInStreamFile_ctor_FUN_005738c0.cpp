// Name: unkafter_turret.cpp_CInStreamFile_ctor_FUN_005738c0
// Address: 005738c0
// Address Range: [[005738c0, 00573912]]
// Convention: unknown
// Signature: CInStreamFile * unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CInStreamFile * unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(CInStreamFile *this_ptr)

{
  CInStreamFile *pCVar1;
  
  pCVar1 = (CInStreamFile *)unkafter_turret_cpp_FUN_00572530(this_ptr);
  pCVar1->vtable = &g_CInStreamFileVTable;
  pCVar1->file_handle = (HANDLE)0x0;
  pCVar1->file_size = 0;
  pCVar1->file_offset = 0;
  pCVar1->position = 0;
  pCVar1->buffer_alloc = (void *)0x0;
  pCVar1->buffer = (char *)0x0;
  pCVar1->buffer_start = 0;
  pCVar1->buffer_capacity = 0;
  pCVar1->buffer_length = 0;
  return pCVar1;
}
