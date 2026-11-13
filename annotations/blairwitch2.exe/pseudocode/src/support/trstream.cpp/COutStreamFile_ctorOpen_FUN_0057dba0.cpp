// Name: support_trstream.cpp_COutStreamFile_ctorOpen_FUN_0057dba0
// Address: 0057dba0
// Address Range: [[0057dba0, 0057dbd5]]
// Convention: __cdecl
// Signature: COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(COutStreamFile *this_ptr,char *path,char *mode)

#include "nocturne.h"

COutStreamFile * __cdecl support_trstream_cpp_COutStreamFile_ctorOpen_FUN_0057dba0(COutStreamFile *this_ptr,char *path,char *mode)

{
  COutStreamFile *this_ptr_00;
  uint unaff_ESI;
  
  this_ptr_00 = (COutStreamFile *)
                support_trstream_cpp_COutStream_dtor_FUN_0057d860(&this_ptr->base,unaff_ESI);
  (this_ptr_00->base).vtable = &g_COutStreamFileVTable;
  this_ptr_00->file = (_FILE *)0x0;
  support_trstream_cpp_COutStreamFile_open_FUN_0057dd90(this_ptr_00,path,mode);
  return this_ptr_00;
}
