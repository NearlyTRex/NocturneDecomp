// Name: crt_fstream.cpp_ofstream_ctor_FUN_005ff95c
// Address: 005ff95c
// Address Range: [[005ff95c, 005ff9c7]]
// Convention: __cdecl
// Signature: ofstream * crt_fstream.cpp_ofstream_ctor_FUN_005ff95c(ofstream * this_ptr, int c1)

#include "nocturne.h"

ofstream * __cdecl crt_fstream_cpp_ofstream_ctor_FUN_005ff95c(ofstream *this_ptr,int c1)

{
  int iVar1;
  fstreambase *pfVar2;
  ostream *poVar3;
  char *pcVar4;
  ios *piVar5;
  
  if ((c1 & 1U) == 0) {
    (this_ptr->_fstreambase_core).layout_info = &g_OFStream_VirtualBaseLayout;
    (this_ptr->_ostream_core).layout_info =
         (WatcomInheritanceLayout *)&g_OFStream_OStreamSubobjectLayout;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->_ios);
    this_ptr = (ofstream *)&piVar5[-2].__format_flags;
  }
  pfVar2 = crt_fstream_cpp_fstreambase_ctor_FUN_0060658f((fstreambase *)this_ptr,1);
  poVar3 = crt_iostream_cpp_ostream_ctor_FUN_006061a2((ostream *)pfVar2->padding_0x44,1);
  pcVar4 = &poVar3[-2]._ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  poVar3[-1]._ios.cleanup_vtable = &g_OFStream_FStreamBaseDestructor;
  iVar1 = *(int *)pcVar4;
  (poVar3->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
  *(void ***)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &g_OFStream_IOS;
  return (ofstream *)pcVar4;
}
