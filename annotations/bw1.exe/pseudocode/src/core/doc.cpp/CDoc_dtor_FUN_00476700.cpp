// Name: core_doc.cpp_CDoc_dtor_FUN_00476700
// Address: 00476700
// Address Range: [[00476700, 0047674d]]
// Convention: __cdecl
// Signature: CDoc * __cdecl core_doc_cpp_CDoc_dtor_FUN_00476700(CDoc *this_ptr,uint flags)

#include "nocturne.h"

CDoc * __cdecl core_doc_cpp_CDoc_dtor_FUN_00476700(CDoc *this_ptr,uint flags)

{
  CDoc *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CDocTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CDoc *)core_hero_cpp_CHero_dtor_FUN_004ea980(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
