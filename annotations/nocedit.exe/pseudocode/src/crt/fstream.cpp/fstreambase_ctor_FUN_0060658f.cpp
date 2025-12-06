// Name: crt_fstream.cpp_fstreambase_ctor_FUN_0060658f
// Address: 0060658f
// Address Range: [[0060658f, 006065f7]]
// Convention: __cdecl
// Signature: fstreambase * crt_fstream.cpp_fstreambase_ctor_FUN_0060658f(fstreambase * this_ptr, uint c1)

#include "nocturne.h"

fstreambase * __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(fstreambase *this_ptr,uint c1)

{
  int iVar1;
  void *pvVar2;
  filebuf *buffer_ptr;
  ios *piVar3;
  fstreambase *pfVar4;
  
  pfVar4 = this_ptr;
  if ((c1 & 1) == 0) {
    (this_ptr->base).layout_info = &g_FStreamBase_VirtualBaseLayout;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios_base);
    pfVar4 = (fstreambase *)&piVar3[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(&(pfVar4->base).filebuf);
  pfVar4 = (fstreambase *)(buffer_ptr[-1].__unbuffered_get_area + 4);
  iVar1 = *(int *)((int)(pfVar4->base).layout_info + 4);
  *(int *)((pfVar4->base).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
  pvVar2 = (pfVar4->base).layout_info;
  buffer_ptr[1].streambuf.__b_lock = &g_FStreamBase_Destructor;
  *(void ***)(buffer_ptr->__unbuffered_get_area + *(int *)((int)pvVar2 + 4) + -0x10) =
       &g_FStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)
             ((pfVar4->base).filebuf.__unbuffered_get_area +
             *(int *)((int)(pfVar4->base).layout_info + 4) + -0x38),(char *)buffer_ptr,(int)this_ptr
             ,(char *)c1);
  return pfVar4;
}
