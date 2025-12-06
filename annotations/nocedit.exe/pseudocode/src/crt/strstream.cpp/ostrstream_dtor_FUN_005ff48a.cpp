// Name: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// Address: 005ff48a
// Address Range: [[005ff48a, 005ff523]]
// Convention: __cdecl
// Signature: ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, int d1)

#include "nocturne.h"

ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream *this_ptr,int d1)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  ostream *poVar3;
  ostrstream *ptr;
  void *ptr_00;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  byte in_stack_00000010;
  byte in_stack_00000014;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)((this_ptr->field_80).padding + iVar1 + -0x75) = iVar1;
    (this_ptr->field_68).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665b7c;
    pWVar2 = (this_ptr->strstreambase_core).layout_info;
    (this_ptr->field_68).ostream_data = &PTR_LAB_00665b84;
    *(void ***)((this_ptr->field_80).padding + pWVar2->offset_to_vbase + -0x49) = &PTR_FUN_00665b8c;
    poVar3 = crt_iostream_cpp_ostream_dtor_FUN_00606231
                       ((ostream *)&(this_ptr->field_68).destructor_vtable,1,unaff_EBX);
    ptr = (ostrstream *)
          crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                    ((strstreambase *)&poVar3[-2].ios.__xalloc_list,1,unaff_retaddr,(uint)this_ptr);
    if ((in_stack_00000010 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&(ptr->field_80).__tied_stream,1,(uint)this_ptr);
      ptr = (ostrstream *)&piVar4[-2].__tied_stream;
    }
    if ((in_stack_00000014 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_OStrStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
  }
  return this_ptr;
}
