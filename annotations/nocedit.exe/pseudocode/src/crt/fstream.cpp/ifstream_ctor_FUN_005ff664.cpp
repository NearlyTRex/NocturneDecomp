// Name: crt_fstream.cpp_ifstream_ctor_FUN_005ff664
// Address: 005ff664
// Address Range: [[005ff664, 005ff6e1]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff664(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ifstream_ctor_FUN_005ff664(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  void *pvVar1;
  int extraout_EAX;
  _istream *p_Var2;
  void **ppvVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    *(WatcomVirtualBaseDescriptor **)this_ptr = &g_IFStream_LayoutInfo;
    *(WatcomVirtualBaseDescriptor **)((int)this_ptr + 0x44) = &g_IFStream_IStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)((int)this_ptr + 0x54));
    this_ptr = &piVar4[-2].__tied_stream;
  }
  crt_fstream_cpp_fstreambase_ctor_FUN_00606456
            (this_ptr,1,(int)filename,open_mode | 1,(char *)buffer_size,unaff_retaddr);
  p_Var2 = crt_iostream_cpp_istream_ctor_FUN_00606376((_istream *)(extraout_EAX + 0x44),1);
  ppvVar3 = &p_Var2[-2]._ios.__i_lock;
  *(int *)((int)ppvVar3 + *(int *)((int)*ppvVar3 + 4) + -4) = *(int *)((int)*ppvVar3 + 4);
  p_Var2[-1]._ios.cleanup_vtable = &g_IFStream_FStreamBaseDestructor;
  pvVar1 = *ppvVar3;
  (p_Var2->_istream_core).destructor_vtable =
       (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
  *(void ***)(*(int *)((int)pvVar1 + 4) + 0x28 + (int)ppvVar3) = &g_IFStream_IOSDestructor;
  return;
}
