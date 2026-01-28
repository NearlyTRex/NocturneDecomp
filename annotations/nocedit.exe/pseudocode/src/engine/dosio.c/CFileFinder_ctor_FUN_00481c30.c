// Name: engine_dosio.c_CFileFinder_ctor_FUN_00481c30
// Address: 00481c30
// Address Range: [[00481c30, 00481c4b]]
// Convention: __cdecl
// Signature: CFileFinder * __cdecl engine_dosio_c_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr)

#include "nocturne.h"

CFileFinder * __cdecl engine_dosio_c_CFileFinder_ctor_FUN_00481c30(CFileFinder *this_ptr)

{
  this_ptr->has_results = 0;
  engine_dosio_c_CFileFinder_reset_FUN_00481db0(this_ptr);
  return this_ptr;
}
