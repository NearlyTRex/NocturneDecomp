// Name: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
// Address: 005e8d20
// Address Range: [[005e8d20, 005e8d94]]
// Convention: __cdecl
// Signature: CVehicle * core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20(CVehicle * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   WatcomTypeInfo g_CVehicleTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   core_vehicle.cpp_FUN_005e8dd0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CVehicle * __cdecl
core_vehicle_cpp_CVehicle_dtor_FUN_005e8d20(CVehicle *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  CVehicle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CVehicleTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->field3_0x93c + 0x6e4));
  iVar1 = core_vehicle_cpp_FUN_005e8dd0();
  ptr = (CVehicle *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x93c),1);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e8d20: PUSH EBX
//   Label: core_vehicle.cpp_CVehicle_dtor_FUN_005e8d20
// 005e8d21: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e8d25: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e8d2a: JNZ 0x005e8d6d
//   XREF to: 005e8d6d (CONDITIONAL_JUMP)
// 005e8d2c: PUSH 0x0
// 005e8d2e: ADD EBX,0x1020
// 005e8d34: PUSH EBX
// 005e8d35: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 005e8d3a: ADD ESP,0x8
// 005e8d3d: PUSH 0x0
// 005e8d3f: SUB EAX,0x6e4
// 005e8d44: PUSH EAX
// 005e8d45: CALL core_vehicle.cpp_FUN_005e8dd0
//   XREF to: 005e8dd0 (UNCONDITIONAL_CALL)
// 005e8d4a: ADD ESP,0x8
// 005e8d4d: PUSH 0x1
// 005e8d4f: LEA EBX,[EAX + 0xfffff6c4]
// 005e8d55: PUSH EBX
// 005e8d56: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e8d5b: ADD ESP,0x8
// 005e8d5e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e8d62: MOV EBX,EAX
// 005e8d64: TEST DL,0x2
// 005e8d67: JNZ 0x005e8d88
//   XREF to: 005e8d88 (CONDITIONAL_JUMP)
// 005e8d69: MOV EAX,EBX
// 005e8d6b: POP EBX
// 005e8d6c: RET
// 005e8d6d: PUSH 0x665170
//   Label: LAB_005e8d6d
//   XREF to: 00665170 (DATA)
// 005e8d72: PUSH EBX
// 005e8d73: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e8d78: ADD ESP,0x8
// 005e8d7b: PUSH EAX
// 005e8d7c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e8d81: ADD ESP,0x4
// 005e8d84: MOV EAX,EBX
// 005e8d86: POP EBX
// 005e8d87: RET
// 005e8d88: PUSH EAX
//   Label: LAB_005e8d88
// 005e8d89: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e8d8e: ADD ESP,0x4
// 005e8d91: MOV EAX,EBX
// 005e8d93: POP EBX
// 005e8d94: RET
