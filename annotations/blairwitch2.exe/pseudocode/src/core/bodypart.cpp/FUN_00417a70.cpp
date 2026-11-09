// Name: core_bodypart.cpp_FUN_00417a70
// Address: 00417a70
// Address Range: [[00417a70, 00417aa5]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_FUN_00417a70(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_FUN_00417a70(CBodyPart *this_ptr)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_FUN_0040d060(0.08);
  if (iVar1 == 0) {
    return;
  }
  core_gore_cpp_FUN_004c9730
            (g_CGorePtr,(CVector3f *)&this_ptr->field_0x20,(CVector3f *)&DAT_0265370c,
             *(EBloodType *)&this_ptr->field_0x10cc);
  return;
}
