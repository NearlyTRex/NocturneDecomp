// Name: core_doc.cpp_CDoc_dtor_FUN_00450580
// Address: 00450580
// Address Range: [[00450580, 0045061c]]
// Convention: unknown
// Signature: CDoc * core_doc_cpp_CDoc_dtor_FUN_00450580(CDoc *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDoc * core_doc_cpp_CDoc_dtor_FUN_00450580(CDoc *this_ptr,uint flags)

{
  CBox *pCVar1;
  CDemonActor *pCVar2;
  CDoc *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CDocTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte **)&this_ptr->field_0x2b0 = &g_CDocVTable;
  unkaddr_005a7eb0_cpp_FUN_005a8100(&this_ptr->field_0x154,0);
  unkafter_superopt_cpp_FUN_005a8220(&this_ptr->field_0x154);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70((CBox *)&this_ptr->field_0x25ea4,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x4f0),1);
  pCVar3 = (CDoc *)core_hero_cpp_CHero_dtor_FUN_004ce3d0((CHero *)&pCVar2[-0xdf].field_0x118,1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005b7fdc(pCVar3);
  return pCVar3;
}
