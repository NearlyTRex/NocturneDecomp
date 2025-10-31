// Name: core_actor.cpp_checkNameHash_FUN_0040c700
// Address: 0040c700
// Address Range: [[0040c700, 0040c71f]]
// Convention: __cdecl
// Signature: int core_actor.cpp_checkNameHash_FUN_0040c700(CDemonActorType * type_ptr, uint name_hash)
// Cross-references:
//   core_actor.cpp_isOfClassHash_FUN_0040c760 (0040c760) at 0040c77f [UNCONDITIONAL_CALL]
//   core_actor.cpp_matchClassTerm_FUN_0040c4f0 (0040c4f0) at 0040c5e9 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_actor_cpp_checkNameHash_FUN_0040c700(CDemonActorType *type_ptr,uint name_hash)

{
  if (type_ptr != (CDemonActorType *)0x0) {
    do {
      if (name_hash == type_ptr->name_hash) {
        return 1;
      }
      type_ptr = type_ptr->parent_type;
    } while (type_ptr != (CDemonActorType *)0x0);
  }
  return 0;
}


// Assembly code:
// 0040c700: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_actor.cpp_checkNameHash_FUN_0040c700
//   XREF to: Stack[0x4] (READ)
// 0040c704: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0040c708: MOV EAX,ECX
// 0040c70a: TEST ECX,ECX
// 0040c70c: JZ 0x0040c720
//   XREF to: 0040c720 (CONDITIONAL_JUMP)
// 0040c70e: CMP EDX,dword ptr [EAX + 0x38]
//   Label: LAB_0040c70e
// 0040c711: JZ 0x0040c730
//   XREF to: 0040c730 (CONDITIONAL_JUMP)
// 0040c713: MOV EAX,dword ptr [EAX + 0x28]
// 0040c716: TEST EAX,EAX
// 0040c718: JNZ 0x0040c70e
//   XREF to: 0040c70e (CONDITIONAL_JUMP)
// 0040c71a: LEA EAX,[EAX]
