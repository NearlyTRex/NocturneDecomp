// Name: crt_fstream.cpp_fstreambase_dtor_FUN_0056b810
// Address: 0056b810
// Address Range: [[0056b810, 0056b895]]
// Convention: __cdecl
// Signature: fstreambase * __cdecl crt_fstream_cpp_fstreambase_dtor_FUN_0056b810(fstreambase *this_ptr,uint flags)

#include "nocturne.h"

fstreambase * __cdecl crt_fstream_cpp_fstreambase_dtor_FUN_0056b810(fstreambase *this_ptr,uint flags)

{
  int iVar1;
  filebuf *pfVar2;
  void *ptr;
  ios *piVar3;
  
  if ((flags & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->base).layout_info + 4);
    *(int *)((this_ptr->base)._filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->base).destructor_vtable = &PTR_crt_fstream_cpp_fstreambase_dtor_FUN_0056b810_005a4a24
    ;
    *(byte ***)
     ((this_ptr->base)._filebuf.__unbuffered_get_area +
     *(int *)((int)(this_ptr->base).layout_info + 4) + -0x10) = &PTR_FUN_005a4a2c;
    pfVar2 = crt_fstream_cpp_filebuf_dtor_FUN_00570449(&(this_ptr->base)._filebuf,0);
    this_ptr = (fstreambase *)(pfVar2[-1].__unbuffered_get_area + 4);
    if ((flags & 1) == 0) {
      piVar3 = crt_iostream_cpp_ios_dtor_FUN_0056b633((ios *)&pfVar2[1]._streambuf.__reserve_end,1);
      this_ptr = (fstreambase *)&piVar3[-2].__enabled_exceptions;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    FUN_00564494(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_fstreambaseTypeInfo_005a4a60);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
  }
  return this_ptr;
}
