// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
// Address Range: [[0043ed50, 0043edc7]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec * this_ptr, char * buffer_ptr, int * buffer_size_ptr)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50
          (CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  FILE FStack_40;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
            ((ostrstream *)&stack0xffffff74,0,buffer_ptr,*buffer_size_ptr,2);
  iVar1 = (**(code **)(*(int *)buffer_ptr + 0xc))((CCodec *)buffer_ptr,&FStack_40);
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d((ostrstream *)&FStack_40._bufsize);
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a((ostrstream *)&stack0xffffff90,0);
  return iVar1;
}
