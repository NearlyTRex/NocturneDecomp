// Name: crt_fstream.cpp_fstreambase_dtor_FUN_00606509
// Address: 00606509
// Address Range: [[00606509, 0060658e]]
// Convention: __cdecl
// Signature: fstreambase * __cdecl crt_fstream_cpp_fstreambase_dtor_FUN_00606509(fstreambase *this_ptr,uint flags)

#include "nocturne.h"

fstreambase * __cdecl
crt_fstream_cpp_fstreambase_dtor_FUN_00606509(fstreambase *this_ptr,uint flags)

{
  int iVar1;
  filebuf *pfVar2;
  void *ptr;
  ios *piVar3;
  
  if ((flags & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->base).layout_info + 4);
    *(int *)((this_ptr->base)._filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->base).destructor_vtable = &g_FStreamBase_Destructor;
    *(void ***)
     ((this_ptr->base)._filebuf.__unbuffered_get_area +
     *(int *)((int)(this_ptr->base).layout_info + 4) + -0x10) = &g_FStreamBase_IOSDestructor;
    pfVar2 = crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(&(this_ptr->base)._filebuf,0);
    this_ptr = (fstreambase *)(pfVar2[-1].__unbuffered_get_area + 4);
    if ((flags & 1) == 0) {
      piVar3 = crt_iostream_cpp_ios_dtor_FUN_0060632c((ios *)&pfVar2[1]._streambuf.__reserve_end,1);
      this_ptr = (fstreambase *)&piVar3[-2].__enabled_exceptions;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_FStreamBaseTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
