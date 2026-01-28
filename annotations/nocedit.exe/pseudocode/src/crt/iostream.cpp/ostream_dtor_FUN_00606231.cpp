// Name: crt_iostream.cpp_ostream_dtor_FUN_00606231
// Address: 00606231
// Address Range: [[00606231, 006062a5]]
// Convention: __cdecl
// Signature: ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(ostream *this_ptr,uint d1,uint d2)

#include "nocturne.h"

ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(ostream *this_ptr,uint d1,uint d2)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  uint unaff_EBX;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->_ostream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->_ios).padding + iVar1 + -0x31) = iVar1;
    (this_ptr->_ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OStream_Destructor;
    *(void ***)
     ((this_ptr->_ios).padding + ((this_ptr->_ostream_core).layout_info)->offset_to_base + -5) =
         &g_OStream_IOSDestructor;
    if ((d1 & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->_ios,1,unaff_EBX);
      this_ptr = (ostream *)&piVar2[-1].__fill_character;
    }
    if ((d1 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_OStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}
