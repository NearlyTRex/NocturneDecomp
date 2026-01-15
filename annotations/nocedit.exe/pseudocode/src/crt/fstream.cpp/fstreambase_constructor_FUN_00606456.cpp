// Name: crt_fstream.cpp_fstreambase_constructor_FUN_00606456
// Address: 00606456
// Address Range: [[00606456, 006064f0]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_fstreambase_constructor_FUN_00606456(fstreambase * this_ptr, int ctor_flags, int fd, int mode, char * buffer, SIZE_T buffer_size)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_fstreambase_constructor_FUN_00606456
          (fstreambase *this_ptr,int ctor_flags,int fd,int mode,char *buffer,SIZE_T buffer_size)

{
  char *pcVar1;
  ios *piVar2;
  filebuf *this_ptr_00;
  int iVar3;
  char *unaff_ESI;
  int unaff_EDI;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->base).layout_info = &g_FStreamBase_VirtualBaseLayout;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios_base);
    this_ptr = (fstreambase *)&piVar2[-2].__enabled_exceptions;
  }
  this_ptr_00 = crt_fstream_cpp_filebuf_ctor_FUN_0060bddd(&(this_ptr->base).filebuf);
  pcVar1 = this_ptr_00[-1].__unbuffered_get_area + 4;
  *(int *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4) + -4) = *(int *)(*(int *)pcVar1 + 4);
  iVar3 = *(int *)pcVar1;
  this_ptr_00[1].streambuf.__b_lock = &g_FStreamBase_Destructor;
  *(void ***)(this_ptr_00->__unbuffered_get_area + *(int *)(iVar3 + 4) + -0x10) =
       &g_FStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),(char *)this_ptr_00,unaff_EDI,
             unaff_ESI);
  iVar3 = crt_fstream_cpp_filebuf_open_FUN_00608c15(this_ptr_00,(char *)fd,mode,(int)buffer);
  if (iVar3 == 0) {
    crt_stdio_c_reportStreamError_FUN_00606020
              ((FileEmbeddedData *)(pcVar1 + *(int *)(*(int *)pcVar1 + 4)),3);
  }
  return;
}
