// Name: crt_fstream.cpp_ifstream_constructor_FUN_005ff664
// Address: 005ff664
// Address Range: [[005ff664, 005ff6e1]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ifstream_constructor_FUN_005ff664(ifstream * this_ptr, int ctor_flags, int fd, char * buffer, int buffer_len)

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ifstream_constructor_FUN_005ff664
          (ifstream *this_ptr,int ctor_flags,int fd,char *buffer,int buffer_len)

{
  void *pvVar1;
  int extraout_EAX;
  istream *piVar2;
  void **ppvVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->fstreambase_core).layout_info = &g_IFStream_LayoutInfo;
    (this_ptr->istream_core).layout_info =
         (WatcomInheritanceLayout *)&g_IFStream_IStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (ifstream *)&piVar4[-2].__tied_stream;
  }
  crt_fstream_cpp_fstreambase_constructor_FUN_00606456
            ((fstreambase *)this_ptr,1,fd,(uint)buffer | 1,(char *)buffer_len,unaff_retaddr);
  piVar2 = crt_iostream_cpp_istream_ctor_FUN_00606376((istream *)(extraout_EAX + 0x44),1);
  ppvVar3 = &piVar2[-2].ios.__i_lock;
  *(int *)((int)ppvVar3 + *(int *)((int)*ppvVar3 + 4) + -4) = *(int *)((int)*ppvVar3 + 4);
  piVar2[-1].ios.cleanup_vtable = &g_IFStream_FStreamBaseDestructor;
  pvVar1 = *ppvVar3;
  (piVar2->istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
  *(void ***)(*(int *)((int)pvVar1 + 4) + 0x28 + (int)ppvVar3) = &g_IFStream_IOSDestructor;
  return;
}
