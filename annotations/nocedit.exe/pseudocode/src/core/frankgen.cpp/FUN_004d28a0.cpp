// Name: core_frankgen.cpp_FUN_004d28a0
// Address: 004d28a0
// Address Range: [[004d28a0, 004d2904]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * core_frankgen.cpp_FUN_004d28a0(CFrankenstienMachine * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CFrankenstienMachineTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_course.cpp_CCourse_dtor_FUN_004424e0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFrankenstienMachine * __cdecl
core_frankgen_cpp_FUN_004d28a0(CFrankenstienMachine *this_ptr,uint d1,uint d2,uint d3)

{
  CCourse *pCVar1;
  CFrankenstienMachine *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFrankenstienMachineTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_course_cpp_CCourse_dtor_FUN_004424e0((CCourse *)(this_ptr->field3_0x160 + 0x1a0));
  ptr = (CFrankenstienMachine *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(pCVar1 + -0x40),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004d28a0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d28a0
// 004d28a1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d28a5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004d28aa: JNZ 0x004d28dd
//   XREF to: 004d28dd (CONDITIONAL_JUMP)
// 004d28ac: PUSH 0x0
// 004d28ae: ADD EBX,0x300
// 004d28b4: PUSH EBX
// 004d28b5: CALL core_course.cpp_CCourse_dtor_FUN_004424e0
//   XREF to: 004424e0 (UNCONDITIONAL_CALL)
// 004d28ba: ADD ESP,0x8
// 004d28bd: PUSH 0x1
// 004d28bf: LEA EBX,[EAX + 0xfffffd00]
// 004d28c5: PUSH EBX
// 004d28c6: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004d28cb: ADD ESP,0x8
// 004d28ce: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d28d2: MOV EBX,EAX
// 004d28d4: TEST DL,0x2
// 004d28d7: JNZ 0x004d28f8
//   XREF to: 004d28f8 (CONDITIONAL_JUMP)
// 004d28d9: MOV EAX,EBX
// 004d28db: POP EBX
// 004d28dc: RET
// 004d28dd: PUSH 0x65e770
//   Label: LAB_004d28dd
//   XREF to: 0065e770 (DATA)
// 004d28e2: PUSH EBX
// 004d28e3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004d28e8: ADD ESP,0x8
// 004d28eb: PUSH EAX
// 004d28ec: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004d28f1: ADD ESP,0x4
// 004d28f4: MOV EAX,EBX
// 004d28f6: POP EBX
// 004d28f7: RET
// 004d28f8: PUSH EAX
//   Label: LAB_004d28f8
// 004d28f9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004d28fe: ADD ESP,0x4
// 004d2901: MOV EAX,EBX
// 004d2903: POP EBX
// 004d2904: RET
