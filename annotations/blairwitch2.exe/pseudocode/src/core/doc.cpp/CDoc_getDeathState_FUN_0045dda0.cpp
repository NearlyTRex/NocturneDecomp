// Name: core_doc.cpp_CDoc_getDeathState_FUN_0045dda0
// Address: 0045dda0
// Address Range: [[0045dda0, 0045ddc8]]
// Convention: __cdecl
// Signature: EDeathState __cdecl core_doc_cpp_CDoc_getDeathState_FUN_0045dda0(CDoc *this_ptr)

#include "nocturne.h"

EDeathState __cdecl core_doc_cpp_CDoc_getDeathState_FUN_0045dda0(CDoc *this_ptr)

{
  int iVar1;
  EDeathState EVar2;
  
  iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                    (0x01C38BC0,"docCannotDie");
  if (iVar1 != 0) {
    return DEATH_STATE_ALIVE;
  }
  EVar2 = core_charactr_cpp_CCharacter_getDeathState_FUN_004281d0((CCharacter *)this_ptr);
  return EVar2;
}
