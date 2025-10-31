// Name: core_actor.cpp_matchesClassName_FUN_0040c740
// Address: 0040c740
// Address Range: [[0040c740, 0040c75c]]
// Convention: __cdecl
// Signature: int core_actor.cpp_matchesClassName_FUN_0040c740(CDemonActorType * type_ptr, char * class_name)
// Cross-references:
//   core_actor.cpp_isOfClass_FUN_0040c6d0 (0040c6d0) at 0040c6ef [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00562be2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_matchClassExpression_FUN_0040c610

#include "nocturne.h"

int __cdecl core_actor_cpp_matchesClassName_FUN_0040c740(CDemonActorType *type_ptr,char *class_name)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = core_actor_cpp_matchClassExpression_FUN_0040c610(type_ptr,&class_name);
  return (uint)(0 < iVar1);
}


// Assembly code:
// 0040c740: LEA EAX,[ESP + 0x8]
//   Label: core_actor.cpp_matchesClassName_FUN_0040c740
//   XREF to: Stack[0x8] (DATA)
// 0040c744: PUSH EAX
// 0040c745: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0040c749: PUSH EDX
// 0040c74a: CALL core_actor.cpp_matchClassExpression_FUN_0040c610
//   XREF to: 0040c610 (UNCONDITIONAL_CALL)
// 0040c74f: ADD ESP,0x8
// 0040c752: TEST EAX,EAX
// 0040c754: SETG AL
// 0040c757: AND EAX,0xff
// 0040c75c: RET
