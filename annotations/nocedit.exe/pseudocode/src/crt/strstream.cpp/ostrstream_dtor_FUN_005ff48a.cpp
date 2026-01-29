// Name: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// Address: 005ff48a
// Address Range: [[005ff48a, 005ff523]]
// Convention: __cdecl
// Signature: ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream *this_ptr,int d1)

#include "nocturne.h"

ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream *this_ptr,int d1)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  ostream *poVar3;
  void *ptr;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->_strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x75) = iVar1;
    (this_ptr->_ostream_core).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665b7c;
    pWVar2 = (this_ptr->_strstreambase_core).layout_info;
    (this_ptr->_ostream_core).ostream_data = &PTR_LAB_00665b84;
    *(void ***)((this_ptr->_ios).padding + pWVar2->offset_to_vbase + -0x49) = &PTR_FUN_00665b8c;
    poVar3 = crt_iostream_cpp_ostream_dtor_FUN_00606231
                       ((ostream *)&(this_ptr->_ostream_core).destructor_vtable,1,unaff_EBX);
    this_ptr = (ostrstream *)
               crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                         ((strstreambase *)&poVar3[-2]._ios.__xalloc_list,1,unaff_EBX,unaff_retaddr)
    ;
    if ((d1 & 1U) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&(this_ptr->_ios).__tied_stream,1,unaff_EBX);
      this_ptr = (ostrstream *)&piVar4[-2].__tied_stream;
    }
    if ((d1 & 2U) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_OStrStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
