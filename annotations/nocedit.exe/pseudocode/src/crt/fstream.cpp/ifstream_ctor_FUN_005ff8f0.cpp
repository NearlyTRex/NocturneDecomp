// Name: crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0
// Address: 005ff8f0
// Address Range: [[005ff8f0, 005ff95b]]
// Convention: __cdecl
// Signature: ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(void *this_ptr,int c1)

#include "nocturne.h"

ifstream * __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff8f0(void *this_ptr,int c1)

{
  void *pvVar1;
  fstreambase *pfVar2;
  _istream *p_Var3;
  void **ppvVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    *(WatcomVirtualBaseDescriptor **)this_ptr = &g_IFStream_LayoutInfo;
    *(WatcomVirtualBaseDescriptor **)((int)this_ptr + 0x44) = &g_IFStream_IStreamSubobjectLayout;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar5[-2].__tied_stream;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(this_ptr,1);
  p_Var3 = crt_iostream_cpp_istream_ctor_FUN_00606376((_istream *)pfVar2->padding_0x44,1);
  ppvVar4 = &p_Var3[-2]._ios.__i_lock;
  *(int *)((int)ppvVar4 + *(int *)((int)*ppvVar4 + 4) + -4) = *(int *)((int)*ppvVar4 + 4);
  p_Var3[-1]._ios.cleanup_vtable = &g_IFStream_FStreamBaseDestructor;
  pvVar1 = *ppvVar4;
  (p_Var3->_istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
  *(void ***)((int)ppvVar4 + *(int *)((int)pvVar1 + 4) + 0x28) = &g_IFStream_IOSDestructor;
  return (ifstream *)ppvVar4;
}
