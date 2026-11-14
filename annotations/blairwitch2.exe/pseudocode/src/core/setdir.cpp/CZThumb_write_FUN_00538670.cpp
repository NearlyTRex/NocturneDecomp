// Name: core_setdir.cpp_CZThumb_write_FUN_00538670
// Address: 00538670
// Address Range: [[00538670, 00538690]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_write_FUN_00538670(CZThumb *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_write_FUN_00538670(CZThumb *this_ptr,_FILE *file_handle)

{
  _fwrite(this_ptr->zbuffer_data,this_ptr->width * this_ptr->height,4,file_handle);
  return;
}
