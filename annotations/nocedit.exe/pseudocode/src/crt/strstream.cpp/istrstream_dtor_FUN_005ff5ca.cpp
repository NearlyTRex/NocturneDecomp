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
  istrstream *ptr;
  void *ptr_00;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  byte in_stack_00000010;
  byte in_stack_00000014;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x58) = iVar1;
    (this_ptr->istream_core).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665bf4;
    pWVar2 = (this_ptr->strstreambase_core).layout_info;
    (this_ptr->istream_core).istream_data = &PTR_FUN_00665bfc;
    *(WatcomThunkedDestructorDirect **)(this_ptr->padding + pWVar2->offset_to_vbase + -0x2c) =
         &PTR_FUN_00665c04;
    piVar3 = crt_iostream_cpp_istream_dtor_FUN_006063e1
                       ((istream *)&(this_ptr->istream_core).__last_read_length,1,unaff_EBX);
    ptr = (istrstream *)
          crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                    ((strstreambase *)&piVar3[-2].ios.__fill_character,1,unaff_retaddr,
                     (uint)this_ptr);
    if ((in_stack_00000010 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&ptr->ios,1,(uint)this_ptr);
      ptr = (istrstream *)(piVar4 + -2);
    }
    if ((in_stack_00000014 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IStrStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
  }
  return this_ptr;
}
