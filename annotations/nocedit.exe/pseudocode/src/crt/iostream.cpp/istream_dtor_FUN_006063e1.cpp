// Name: crt_iostream.cpp_istream_dtor_FUN_006063e1
// Address: 006063e1
// Address Range: [[006063e1, 00606455]]
// Convention: __cdecl
// Signature: istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(istream *this_ptr,uint flags)

#include "nocturne.h"

istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(istream *this_ptr,uint flags)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  
  if ((flags & 4) == 0) {
    iVar1 = ((this_ptr->_istream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x35) = iVar1;
    (this_ptr->_istream_core).destructor_vtable = &PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74;
    *(void ***)
     ((this_ptr->_ios).padding + ((this_ptr->_istream_core).layout_info)->offset_to_base + -9) =
         &PTR_FUN_00665e7c;
    if ((flags & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->_ios,1);
      this_ptr = (istream *)&piVar2[-1].__xalloc_list;
    }
    if ((flags & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = __vec_delete(this_ptr,&g_IStreamTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
