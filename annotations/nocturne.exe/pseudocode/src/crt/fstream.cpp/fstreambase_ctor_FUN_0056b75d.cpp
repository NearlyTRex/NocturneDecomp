// Name: crt_fstream.cpp_fstreambase_ctor_FUN_0056b75d
// Address: 0056b75d
// Address Range: [[0056b75d, 0056b7f7]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size )

#include "nocturne.h"

void __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_0056b75d(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size )

{
  char *pcVar1;
  ios *piVar2;
  filebuf *buffer_ptr;
  int iVar3;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->base).layout_info = &g_WatcomVirtualBaseDescriptor_005a4a18;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_0056b503(&this_ptr->ios_base);
    this_ptr = (fstreambase *)&piVar2[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0057042d(&(this_ptr->base)._filebuf);
  pcVar1 = buffer_ptr[-1].__unbuffered_get_area + 4;
  *(int *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4) + -4) = *(int *)(*(int *)pcVar1 + 4);
  iVar3 = *(int *)pcVar1;
  buffer_ptr[1]._streambuf.__b_lock = &PTR_crt_fstream_cpp_fstreambase_dtor_FUN_0056b810_005a4a24;
  *(byte ***)(buffer_ptr->__unbuffered_get_area + *(int *)(iVar3 + 4) + -0x10) =
       &PTR_crt_fstream_cpp_fstream_destructor_thunk_from_ios_FUN_0056b7f8_005a4a2c;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a
            ((streambuf *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),(char *)buffer_ptr);
  iVar3 = FUN_0056cd9b(buffer_ptr,fd,mode,buffer);
  if (iVar3 == 0) {
    reportStreamError
              ((FileEmbeddedData *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),3);
  }
  return;
}
