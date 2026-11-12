// Name: core_doc.cpp_CDoc_dtor_FUN_00476700
// Address: 00476700
// Address Range: [[00476700, 0047674d]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_dtor_FUN_00476700(CDoc *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_dtor_FUN_00476700(CDoc *this_ptr,uint flags)

{
  CDoc *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CDocTypeInfo);
    FUN_005c0336(ptr);
    return this_ptr;
  }
  pCVar1 = (CDoc *)core_hero_cpp_FUN_004ea980(this_ptr,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005c0344(pCVar1);
  return pCVar1;
}
