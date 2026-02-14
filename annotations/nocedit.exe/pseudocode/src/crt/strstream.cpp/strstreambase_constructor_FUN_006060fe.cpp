// Name: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
// Address: 006060fe
// Address Range: [[006060fe, 00606189]]
// Convention: __cdecl
// Signature: strstreambase * __cdecl crt_strstream_cpp_strstreambase_constructor_FUN_006060fe(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

#include "nocturne.h"

strstreambase * __cdecl crt_strstream_cpp_strstreambase_constructor_FUN_006060fe(strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

{
  int iVar1;
  strstreambuf *this_ptr_00;
  ios *piVar2;
  char *unaff_EBX;
  short *psVar3;
  int unaff_ESI;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->_strstreambase_core).layout_info = &DAT_00665d60;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)&(this_ptr->_ios).__tied_stream);
    this_ptr = (strstreambase *)&piVar2[-2].__error_state;
  }
  this_ptr_00 = (strstreambuf *)
                crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2
                          (&(this_ptr->_strstreambase_core)._strstreambuf._streambuf);
  psVar3 = &this_ptr_00[-1].__minbuf_size;
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0060b815(this_ptr_00,buffer,size,pstart);
  *(int *)((int)psVar3 + *(int *)(*(int *)psVar3 + 4) + -4) = *(int *)(*(int *)psVar3 + 4);
  iVar1 = *(int *)psVar3;
  this_ptr_00[1]._streambuf.__reserve_base = (char *)&g_StrStreamBase_Destructor;
  *(void ***)((int)&(this_ptr_00->_streambuf).__flags + *(int *)(iVar1 + 4)) =
       &g_StrStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)((int)psVar3 + *(int *)(*(int *)psVar3 + 4)),(char *)this_ptr_00,unaff_ESI
             ,unaff_EBX);
  return (strstreambase *)psVar3;
}
