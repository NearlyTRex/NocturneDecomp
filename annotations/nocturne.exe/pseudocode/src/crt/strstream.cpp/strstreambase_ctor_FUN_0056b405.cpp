// Name: crt_strstream.cpp_strstreambase_ctor_FUN_0056b405
// Address: 0056b405
// Address Range: [[0056b405, 0056b490]]
// Convention: __cdecl
// Signature: strstreambase * __cdecl crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

#include "nocturne.h"

strstreambase * __cdecl crt_strstream_cpp_strstreambase_ctor_FUN_0056b405(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

{
  uint uVar1;
  streambuf *buffer_ptr;
  ios *piVar2;
  uint *puVar3;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->_strstreambase_core).layout_info = (WatcomVirtualBaseDescriptor *)&DAT_005a48b0;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_0056b503((ios *)&(this_ptr->_ios).__tied_stream);
    this_ptr = (strstreambase *)&piVar2[-2].__error_state;
  }
  buffer_ptr = crt_iostream_cpp_streambuf_ctor_FUN_0056fe12
                         (&(this_ptr->_strstreambase_core)._strstreambuf._streambuf);
  puVar3 = &buffer_ptr[-1].__flags;
  buffer_ptr[1].__b_lock = &PTR_crt_iostream_cpp_streambuf_do_sgetn_FUN_0056ff82_005a4884;
  crt_strstream_cpp_strstreambuf_init_FUN_0056fe65(buffer_ptr,buffer,size,pstart);
  *(int *)((int)puVar3 + *(int *)(*puVar3 + 4) + -4) = *(int *)(*puVar3 + 4);
  uVar1 = *puVar3;
  buffer_ptr[1].__put_base = (char *)&PTR_crt_strstream_cpp_strstreambase_dtor_FUN_0056b5ad_005a48bc
  ;
  *(byte ***)((int)&buffer_ptr->__flags + *(int *)(uVar1 + 4)) = &PTR_FUN_005a48c4;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0056ff2a
            ((streambuf *)((int)puVar3 + *(int *)(*puVar3 + 4)),(char *)buffer_ptr);
  return (strstreambase *)puVar3;
}
