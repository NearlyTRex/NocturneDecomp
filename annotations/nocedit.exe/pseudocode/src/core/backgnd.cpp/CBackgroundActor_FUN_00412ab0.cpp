// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412ab0
// Address: 00412ab0
// Address Range: [[00412ab0, 00412ac7]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_FUN_00412ab0(CBackgroundActor * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0

#include "nocturne.h"

void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412ab0(CBackgroundActor *this_ptr)

{
  FILE *in_stack_00000008;
  
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)this_ptr->model_name,in_stack_00000008);
  return;
}


// Assembly code:
// 00412ab0: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412ab0
//   XREF to: Stack[0x8] (READ)
// 00412ab4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00412ab8: PUSH EDX
// 00412ab9: ADD EAX,0x158
// 00412abe: PUSH EAX
// 00412abf: CALL core_dmodel.cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
//   XREF to: 0047edd0 (UNCONDITIONAL_CALL)
// 00412ac4: ADD ESP,0x8
// 00412ac7: RET
