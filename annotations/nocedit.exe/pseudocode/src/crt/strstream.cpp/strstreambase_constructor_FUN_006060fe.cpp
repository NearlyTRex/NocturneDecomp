// Name: crt_strstream.cpp_strstreambase_constructor_FUN_006060fe
// Address: 006060fe
// Address Range: [[006060fe, 00606189]]
// Convention: __cdecl
// Signature: strstreambase * crt_strstream.cpp_strstreambase_constructor_FUN_006060fe(strstreambase * this_ptr, int ctor_flags, char * buffer, int size, char * pstart)

#include "nocturne.h"

strstreambase * __cdecl
crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
          (strstreambase *this_ptr,int ctor_flags,char *buffer,int size,char *pstart)

{
  int iVar1;
  strstreambuf *this_ptr_00;
  ios *piVar2;
  strstreambase *psVar3;
  short *psVar4;
  int in_stack_00000018;
  char *in_stack_0000001c;
  
  psVar3 = this_ptr;
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->strstreambase_core).layout_info = &DAT_00665d60;
    piVar2 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)&(this_ptr->ios).__tied_stream);
    psVar3 = (strstreambase *)&piVar2[-2].__error_state;
  }
  this_ptr_00 = (strstreambuf *)
                crt_iostream_cpp_streambuf_constructor_FUN_0060b7c2
                          (&(psVar3->strstreambase_core).strstreambuf.streambuf);
  psVar4 = &this_ptr_00[-1].__minbuf_size;
  this_ptr_00->__vtable = &g_StrstreambufVTable;
  crt_strstream_cpp_strstreambuf_init_FUN_0060b815
            (this_ptr_00,pstart,in_stack_00000018,in_stack_0000001c);
  *(int *)((int)psVar4 + *(int *)(*(int *)psVar4 + 4) + -4) = *(int *)(*(int *)psVar4 + 4);
  iVar1 = *(int *)psVar4;
  this_ptr_00[1].streambuf.__reserve_base = (char *)&g_StrStreamBase_Destructor;
  *(void ***)((int)&(this_ptr_00->streambuf).__flags + *(int *)(iVar1 + 4)) =
       &g_StrStreamBase_IOSDestructor;
  crt_iostream_cpp_streambuf_initBuffer_FUN_0060b815
            ((streambuf *)((int)psVar4 + *(int *)(*(int *)psVar4 + 4)),(char *)this_ptr_00,
             (int)this_ptr,(char *)ctor_flags);
  return (strstreambase *)psVar4;
}
