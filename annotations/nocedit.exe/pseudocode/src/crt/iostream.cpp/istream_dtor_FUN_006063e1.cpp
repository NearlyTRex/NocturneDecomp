// Name: crt_iostream.cpp_istream_dtor_FUN_006063e1
// Address: 006063e1
// Address Range: [[006063e1, 00606455]]
// Convention: __cdecl
// Signature: istream * crt_iostream.cpp_istream_dtor_FUN_006063e1(istream * this_ptr, uint d1, uint d2)

#include "nocturne.h"

istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(istream *this_ptr,uint d1,uint d2)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  uint unaff_EBX;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->istream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->ios).padding + iVar1 + -0x35) = iVar1;
    (this_ptr->istream_core).destructor_vtable = &PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74;
    *(void ***)
     ((this_ptr->ios).padding + ((this_ptr->istream_core).layout_info)->offset_to_base + -9) =
         &PTR_FUN_00665e7c;
    if ((d1 & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->ios,1,unaff_EBX);
      this_ptr = (istream *)&piVar2[-1].__xalloc_list;
    }
    if ((d2 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
