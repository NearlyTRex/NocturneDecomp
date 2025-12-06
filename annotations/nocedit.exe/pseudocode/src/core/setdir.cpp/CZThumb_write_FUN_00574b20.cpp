// Name: core_setdir.cpp_CZThumb_write_FUN_00574b20
// Address: 00574b20
// Address Range: [[00574b20, 00574b40]]
// Convention: __cdecl
// Signature: void core_setdir.cpp_CZThumb_write_FUN_00574b20(CZThumb * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_write_FUN_00574b20(CZThumb *this_ptr,FILE *file_handle)

{
  crt_stdio_c_fwrite_FUN_005fdc00
            (this_ptr->zbuffer_data,this_ptr->width * this_ptr->height,4,file_handle);
  return;
}
