// Name: core_bat.cpp_CBat_dtor_FUN_00414fe0
// Address: 00414fe0
// Address Range: [[00414fe0, 00415044]]
// Convention: __cdecl
// Signature: CBat * core_bat.cpp_CBat_dtor_FUN_00414fe0(CBat * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CBatTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBat * __cdecl core_bat_cpp_CBat_dtor_FUN_00414fe0(CBat *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CBat *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBatTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->course_filename + 0x20));
  ptr = (CBat *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)&pCVar1[-0x20].loop,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00414fe0: PUSH EBX
//   Label: core_bat.cpp_CBat_dtor_FUN_00414fe0
// 00414fe1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414fe5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00414fea: JNZ 0x0041501d
//   XREF to: 0041501d (CONDITIONAL_JUMP)
// 00414fec: PUSH 0x0
// 00414fee: ADD EBX,0x178
// 00414ff4: PUSH EBX
// 00414ff5: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 00414ffa: ADD ESP,0x8
// 00414ffd: PUSH 0x1
// 00414fff: LEA EBX,[EAX + 0xfffffe88]
// 00415005: PUSH EBX
// 00415006: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041500b: ADD ESP,0x8
// 0041500e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00415012: MOV EBX,EAX
// 00415014: TEST DL,0x2
// 00415017: JNZ 0x00415038
//   XREF to: 00415038 (CONDITIONAL_JUMP)
// 00415019: MOV EAX,EBX
// 0041501b: POP EBX
// 0041501c: RET
// 0041501d: PUSH 0x65a570
//   Label: LAB_0041501d
//   XREF to: 0065a570 (DATA)
// 00415022: PUSH EBX
// 00415023: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00415028: ADD ESP,0x8
// 0041502b: PUSH EAX
// 0041502c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00415031: ADD ESP,0x4
// 00415034: MOV EAX,EBX
// 00415036: POP EBX
// 00415037: RET
// 00415038: PUSH EAX
//   Label: LAB_00415038
// 00415039: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0041503e: ADD ESP,0x4
// 00415041: MOV EAX,EBX
// 00415043: POP EBX
// 00415044: RET
