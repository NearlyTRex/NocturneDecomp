// Name: crt_fstream.cpp_fstreambase_ctor_FUN_00606456
// Address: 00606456
// Address Range: [[00606456, 006064f0]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_00606456(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size )

#include "nocturne.h"

void __cdecl crt_fstream_cpp_fstreambase_ctor_FUN_00606456(fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size )

{
  char *pcVar1;
  ios *piVar2;
  filebuf *buffer_ptr;
  int iVar3;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->base).layout_info = &g_FStreamBase_VirtualBaseLayout;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios_base);
    this_ptr = (fstreambase *)&piVar2[-2].__enabled_exceptions;
  }
  buffer_ptr = crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(&(this_ptr->base)._filebuf);
  pcVar1 = buffer_ptr[-1].__unbuffered_get_area + 4;
  *(int *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4) + -4) = *(int *)(*(int *)pcVar1 + 4);
  iVar3 = *(int *)pcVar1;
  buffer_ptr[1]._streambuf.__b_lock = &g_FStreamBase_Destructor;
  *(void ***)(buffer_ptr->__unbuffered_get_area + *(int *)(iVar3 + 4) + -0x10) =
       &g_FStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b8da
            ((streambuf *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),(char *)buffer_ptr);
  iVar3 = func_0x00608c15(buffer_ptr,fd,mode,buffer);
  if (iVar3 == 0) {
    reportStreamError
              ((FileEmbeddedData *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),3);
  }
  return;
}
