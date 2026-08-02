// Name: crt_fstream.cpp_fstreambase_ctor_FUN_0056b896
// Address: 0056b896
// Address Range: [[0056b896, 0056b8fe]]
// Convention: __cdecl
// Signature: fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(fstreambase *this_ptr,uint c1)

#include "nocturne.h"

fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0056b896(fstreambase *this_ptr,uint c1)

{
  fstreambase *pfVar1;
  int iVar2;
  void *pvVar3;
  filebuf *buffer_ptr;
  ios *piVar4;
  
  if ((c1 & 1) == 0) {
    (this_ptr->base).layout_info = &DAT_005a4a18;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_0056b503(&this_ptr->ios_base);
    this_ptr = (fstreambase *)&piVar4[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0057042d(&(this_ptr->base)._filebuf);
  pfVar1 = (fstreambase *)(buffer_ptr[-1].__unbuffered_get_area + 4);
  iVar2 = *(int *)((int)(pfVar1->base).layout_info + 4);
  *(int *)((pfVar1->base)._filebuf.__unbuffered_get_area + iVar2 + -0x3c) = iVar2;
  pvVar3 = (pfVar1->base).layout_info;
  buffer_ptr[1]._streambuf.__b_lock = &PTR_crt_fstream_cpp_fstreambase_dtor_FUN_0056b810_005a4a24;
  *(byte ***)(buffer_ptr->__unbuffered_get_area + *(int *)((int)pvVar3 + 4) + -0x10) =
       &PTR_crt_unknown_c_FUN_0056b7f8_005a4a2c;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a
            ((streambuf *)
             ((pfVar1->base)._filebuf.__unbuffered_get_area +
             *(int *)((int)(pfVar1->base).layout_info + 4) + -0x38),(char *)buffer_ptr);
  return pfVar1;
}
