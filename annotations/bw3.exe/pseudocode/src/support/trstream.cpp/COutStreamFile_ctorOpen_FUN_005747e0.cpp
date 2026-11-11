// Name: support_trstream.cpp_COutStreamFile_ctorOpen_FUN_005747e0
// Address: 005747e0
// Address Range: [[005747e0, 00574815]]
// Convention: __cdecl
// Signature: undefined4 * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005747e0(COutStreamFile *this_ptr,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

uint * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_005747e0(COutStreamFile *this_ptr,uint param_2,uint param_3)

{
  COutStreamFile *this_ptr_00;
  
  this_ptr_00 = (COutStreamFile *)support_trstream_cpp_FUN_005744a0(this_ptr);
  this_ptr_00->vtable = &g_COutStreamFileVTable;
  this_ptr_00->file = (_FILE *)0x0;
  support_trstream_cpp_COutStreamFile_open_FUN_005749d0(this_ptr_00,param_2,param_3);
  return &this_ptr_00->vtable;
}
