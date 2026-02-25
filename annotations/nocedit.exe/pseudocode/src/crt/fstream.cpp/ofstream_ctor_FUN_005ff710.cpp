// Name: crt_fstream.cpp_ofstream_ctor_FUN_005ff710
// Address: 005ff710
// Address Range: [[005ff710, 005ff78d]]
// Convention: __cdecl
// Signature: void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff710(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

#include "nocturne.h"

void __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff710(void *this_ptr,int ctor_flags,char *filename,int open_mode,int buffer_size)

{
  int iVar1;
  int extraout_EAX;
  _ostream *p_Var2;
  char *pcVar3;
  ios *piVar4;
  SIZE_T unaff_retaddr;
  
  if ((ctor_flags & 1U) == 0) {
    *(WatcomVirtualBaseDescriptor **)this_ptr = &g_OFStream_VirtualBaseLayout;
    *(WatcomVirtualBaseDescriptor **)((int)this_ptr + 0x44) = &g_OFStream_OStreamSubobjectLayout;
    piVar4 = crt_iostream_cpp_ios_ctor_FUN_006061fc((ios *)((int)this_ptr + 0x50));
    this_ptr = &piVar4[-2].__format_flags;
  }
  crt_fstream_cpp_fstreambase_ctor_FUN_00606456
            (this_ptr,1,(int)filename,open_mode | 2,(char *)buffer_size,unaff_retaddr);
  p_Var2 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((_ostream *)(extraout_EAX + 0x44),1);
  pcVar3 = &p_Var2[-2]._ios.__fill_character;
  *(void **)(pcVar3 + (int)*(void **)(*(int *)pcVar3 + 4) + -4) = *(void **)(*(int *)pcVar3 + 4);
  p_Var2[-1]._ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar3;
  (p_Var2->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar3 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return;
}
