// Name: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
// Address: 005ff95c
// Address Range: [[005ff95c, 005ff9c7]]
// Convention: __cdecl
// Signature: ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(void *this_ptr,int c1)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(void *this_ptr,int c1)

{
  int iVar1;
  fstreambase *pfVar2;
  _ostream *p_Var3;
  char *pcVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    *(WatcomVirtualBaseDescriptor **)this_ptr = &g_OFStream_VirtualBaseLayout;
    *(WatcomVirtualBaseDescriptor **)((int)this_ptr + 0x44) = &g_OFStream_OStreamSubobjectLayout;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar5[-2].__format_flags;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0060658f(this_ptr,1);
  p_Var3 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((_ostream *)pfVar2->padding_0x44,1);
  pcVar4 = &p_Var3[-2]._ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  p_Var3[-1]._ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar4;
  (p_Var3->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return (ofstream *)pcVar4;
}
