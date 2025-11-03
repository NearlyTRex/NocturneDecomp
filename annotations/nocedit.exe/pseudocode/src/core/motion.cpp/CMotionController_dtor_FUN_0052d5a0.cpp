// Name: core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
// Address: 0052d5a0
// Address Range: [[0052d5a0, 0052d5e3]]
// Convention: __cdecl
// Signature: CMotionController * core_motion.cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController * this_ptr, uint d1)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40 (0059de40) at 0059de70 [UNCONDITIONAL_CALL]
// Globals:
//   CMotionController_vtable g_CMotionControllerVTable
//   WatcomTypeInfo g_CMotionControllerTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMotionController * __cdecl
core_motion_cpp_CMotionController_dtor_FUN_0052d5a0(CMotionController *this_ptr,uint d1)

{
  void *ptr;
  
  if ((d1 & 4) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMotionControllerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CMotionControllerVTable;
  if ((d1 & 2) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0052d5a0: PUSH EBX
//   Label: core_motion.cpp_CMotionController_dtor_FUN_0052d5a0
// 0052d5a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0052d5a5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0052d5a9: TEST AL,0x4
// 0052d5ab: JNZ 0x0052d5bc
//   XREF to: 0052d5bc (CONDITIONAL_JUMP)
// 0052d5ad: MOV dword ptr [EBX + 0x50],0x661bc4
//   XREF to: 00661bc4 (DATA)
// 0052d5b4: TEST AL,0x2
// 0052d5b6: JNZ 0x0052d5d7
//   XREF to: 0052d5d7 (CONDITIONAL_JUMP)
// 0052d5b8: MOV EAX,EBX
// 0052d5ba: POP EBX
// 0052d5bb: RET
// 0052d5bc: PUSH 0x661bd0
//   Label: LAB_0052d5bc
//   XREF to: 00661bd0 (DATA)
// 0052d5c1: PUSH EBX
// 0052d5c2: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0052d5c7: ADD ESP,0x8
// 0052d5ca: PUSH EAX
// 0052d5cb: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0052d5d0: ADD ESP,0x4
// 0052d5d3: MOV EAX,EBX
// 0052d5d5: POP EBX
// 0052d5d6: RET
// 0052d5d7: PUSH EBX
//   Label: LAB_0052d5d7
// 0052d5d8: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0052d5dd: ADD ESP,0x4
// 0052d5e0: MOV EAX,EBX
// 0052d5e2: POP EBX
// 0052d5e3: RET
