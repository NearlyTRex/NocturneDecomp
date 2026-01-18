// Name: crt_strstream.cpp_istrstream_constructor_FUN_005ff524
// Address: 005ff524
// Address Range: [[005ff524, 005ff59b]]
// Convention: __cdecl
// Signature: istrstream * crt_strstream.cpp_istrstream_constructor_FUN_005ff524(istrstream * this_ptr, int ctor_flags, char * buffer, int size)

#include "nocturne.h"

istrstream * __cdecl
crt_strstream_cpp_istrstream_constructor_FUN_005ff524
          (istrstream *this_ptr,int ctor_flags,char *buffer,int size)

{
  int iVar1;
  strstreambase *psVar2;
  istream *piVar3;
  char *pcVar4;
  ios *piVar5;
  
  if ((ctor_flags & 1U) == 0) {
    (this_ptr->_strstreambase_core).layout_info = &g_IstrstreamLayoutInfo;
    (this_ptr->_istream_core).__last_read_length = (int)&g_Istrstream_IstreamLastReadLength;
    piVar5 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->_ios);
    this_ptr = (istrstream *)(piVar5 + -2);
  }
  psVar2 = crt_strstream_cpp_strstreambase_constructor_FUN_006060fe
                     ((strstreambase *)this_ptr,1,buffer,size,(char *)0x0);
  piVar3 = crt_iostream_cpp_istream_ctor_FUN_00606376((istream *)&psVar2->_ios,1);
  pcVar4 = &piVar3[-2]._ios.__fill_character;
  *(int *)(pcVar4 + *(int *)(*(int *)pcVar4 + 4) + -4) = *(int *)(*(int *)pcVar4 + 4);
  piVar3[-1]._ios.cleanup_vtable = &PTR_FUN_00665bf4.destructor_func;
  iVar1 = *(int *)pcVar4;
  (piVar3->_istream_core).destructor_vtable = &PTR_FUN_00665bfc;
  *(WatcomThunkedDestructorDirect **)(pcVar4 + *(int *)(iVar1 + 4) + 0x28) = &PTR_FUN_00665c04;
  return (istrstream *)pcVar4;
}
