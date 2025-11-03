// Name: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// Address: 00599880
// Address Range: [[00599880, 005998dd]]
// Convention: __cdecl
// Signature: CSkeleton * core_skeleton.cpp_CSkeleton_ctor_FUN_00599880(CSkeleton * this_ptr)
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
// Function calls:
//   core_motion.cpp_CMotionList_ctor_FUN_0052cd50
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

CSkeleton * __cdecl core_skeleton_cpp_CSkeleton_ctor_FUN_00599880(CSkeleton *this_ptr)

{
  int extraout_EAX;
  undefined4 *puVar1;
  CMotionList *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  core_motion_cpp_CMotionList_ctor_FUN_0052cd50(in_stack_0000000c);
  puVar1 = (undefined4 *)
           crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)(extraout_EAX + 0x2937c),100,&g_CVectorTypeInfo);
  puVar1[-0x389] = 0;
  puVar1[-4] = 0;
  puVar1[-3] = 0;
  puVar1[-2] = 0;
  puVar1[-1] = 0;
  *puVar1 = 0xc7c34f80;
  return (CSkeleton *)(puVar1 + -0xa4df);
}


// Assembly code:
// 00599880: PUSH 0x10
//   Label: core_skeleton.cpp_CSkeleton_ctor_FUN_00599880
// 00599885: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0059988a: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0059988e: PUSH EAX
// 0059988f: CALL core_motion.cpp_CMotionList_ctor_FUN_0052cd50
//   XREF to: 0052cd50 (UNCONDITIONAL_CALL)
// 00599894: ADD ESP,0x4
// 00599897: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 0059989c: PUSH 0x64
// 0059989e: ADD EAX,0x2937c
// 005998a3: PUSH EAX
// 005998a4: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005998a9: MOV dword ptr [EAX + 0xfffff1dc],0x0
// 005998b3: MOV dword ptr [EAX + -0x10],0x0
// 005998ba: MOV dword ptr [EAX + -0xc],0x0
// 005998c1: MOV dword ptr [EAX + -0x8],0x0
// 005998c8: MOV dword ptr [EAX + -0x4],0x0
// 005998cf: ADD ESP,0xc
// 005998d2: MOV dword ptr [EAX],0xc7c34f80
// 005998d8: SUB EAX,0x2937c
// 005998dd: RET
