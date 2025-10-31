// Name: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
// Address: 0041b640
// Address Range: [[0041b640, 0041b655]]
// Convention: __cdecl
// Signature: SBodyPartFire * core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30

#include "nocturne.h"

SBodyPartFire * __cdecl core_bodypart_cpp_SBodyPartFire_dtor_FUN_0041b640(SBodyPartFire *this_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                     ((CDemonActor *)(this_ptr->field0_0x0 + 0xc),1);
  return (SBodyPartFire *)&pCVar1[-1].metadata.next_actor;
}


// Assembly code:
// 0041b640: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_bodypart.cpp_SBodyPartFire_dtor_FUN_0041b640
//   XREF to: Stack[0x4] (READ)
// 0041b644: PUSH 0x1
// 0041b646: ADD EAX,0xc
// 0041b649: PUSH EAX
// 0041b64a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041b64f: ADD ESP,0x8
// 0041b652: SUB EAX,0xc
// 0041b655: RET
