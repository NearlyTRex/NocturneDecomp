// Name: core_doc.cpp_CDoc_getDeathState_FUN_00476430
// Address: 00476430
// Address Range: [[00476430, 00476458]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_doc_cpp_CDoc_getDeathState_FUN_00476430(CDoc *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_doc_cpp_CDoc_getDeathState_FUN_00476430(CDoc *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,"docCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_00431c30((CCharacter *)this_ptr);
  return EVar2;
}
