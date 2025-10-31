// Name: core_conveyor.cpp_dtor_FUN_00442310
// Address: 00442310
// Address Range: [[00442310, 00442374]]
// Convention: __cdecl
// Signature: CConveyor * core_conveyor.cpp_dtor_FUN_00442310(CConveyor * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CConveyorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CConveyor * __cdecl core_conveyor_cpp_dtor_FUN_00442310(CConveyor *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CConveyor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CConveyorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0
                     ((CCourse *)((this_ptr->base_platform).field9_0x2f0 + 0x20));
  ptr = (CConveyor *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x42].loop,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00442310: PUSH EBX
//   Label: core_conveyor.cpp_dtor_FUN_00442310
// 00442311: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00442315: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0044231a: JNZ 0x0044234d
//   XREF to: 0044234d (CONDITIONAL_JUMP)
// 0044231c: PUSH 0x0
// 0044231e: ADD EBX,0x310
// 00442324: PUSH EBX
// 00442325: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 0044232a: ADD ESP,0x8
// 0044232d: PUSH 0x1
// 0044232f: LEA EBX,[EAX + 0xfffffcf0]
// 00442335: PUSH EBX
// 00442336: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0044233b: ADD ESP,0x8
// 0044233e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00442342: MOV EBX,EAX
// 00442344: TEST DL,0x2
// 00442347: JNZ 0x00442368
//   XREF to: 00442368 (CONDITIONAL_JUMP)
// 00442349: MOV EAX,EBX
// 0044234b: POP EBX
// 0044234c: RET
// 0044234d: PUSH 0x65c020
//   Label: LAB_0044234d
//   XREF to: 0065c020 (DATA)
// 00442352: PUSH EBX
// 00442353: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00442358: ADD ESP,0x8
// 0044235b: PUSH EAX
// 0044235c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00442361: ADD ESP,0x4
// 00442364: MOV EAX,EBX
// 00442366: POP EBX
// 00442367: RET
// 00442368: PUSH EAX
//   Label: LAB_00442368
// 00442369: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0044236e: ADD ESP,0x4
// 00442371: MOV EAX,EBX
// 00442373: POP EBX
// 00442374: RET
