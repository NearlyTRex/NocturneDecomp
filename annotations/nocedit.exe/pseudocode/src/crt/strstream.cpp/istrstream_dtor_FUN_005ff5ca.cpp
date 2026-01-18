// Name: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
// Address: 005ff5ca
// Address Range: [[005ff5ca, 005ff663]]
// Convention: __cdecl
// Signature: istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)

#include "nocturne.h"

istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(istrstream *this_ptr,int d1)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  istream *piVar3;
  void *ptr;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->_strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x58) = iVar1;
    (this_ptr->_istream_core).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665bf4;
    pWVar2 = (this_ptr->_strstreambase_core).layout_info;
    (this_ptr->_istream_core).istream_data = &PTR_FUN_00665bfc;
    *(WatcomThunkedDestructorDirect **)(this_ptr->padding + pWVar2->offset_to_vbase + -0x2c) =
         &PTR_FUN_00665c04;
    piVar3 = crt_iostream_cpp_istream_dtor_FUN_006063e1
                       ((istream *)&(this_ptr->_istream_core).__last_read_length,1,unaff_EBX);
    this_ptr = (istrstream *)
               crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                         ((strstreambase *)&piVar3[-2]._ios.__fill_character,1,unaff_EBX,
                          unaff_retaddr);
    if ((d1 & 1U) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->_ios,1,unaff_EBX);
      this_ptr = (istrstream *)(piVar4 + -2);
    }
    if ((d1 & 2U) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IStrStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
