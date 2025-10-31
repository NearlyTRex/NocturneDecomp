// Name: core_baron.cpp_CBaron_dtor_FUN_00414100
// Address: 00414100
// Address Range: [[00414100, 0041414d]]
// Convention: __cdecl
// Signature: CBaron * core_baron.cpp_CBaron_dtor_FUN_00414100(CBaron * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CBaronTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBaron * __cdecl core_baron_cpp_CBaron_dtor_FUN_00414100(CBaron *this_ptr,uint d1,uint d2)

{
  CBaron *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBaronTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470
            (&this_ptr->field0_0x0,1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,in_stack_00000010,
             in_stack_00000014);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00414100: PUSH EBX
//   Label: core_baron.cpp_CBaron_dtor_FUN_00414100
// 00414101: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00414105: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041410a: JNZ 0x00414126
//   XREF to: 00414126 (CONDITIONAL_JUMP)
// 0041410c: PUSH 0x1
// 0041410e: PUSH EBX
// 0041410f: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 00414114: ADD ESP,0x8
// 00414117: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041411b: MOV EBX,EAX
// 0041411d: TEST DL,0x2
// 00414120: JNZ 0x00414141
//   XREF to: 00414141 (CONDITIONAL_JUMP)
// 00414122: MOV EAX,EBX
// 00414124: POP EBX
// 00414125: RET
// 00414126: PUSH 0x65a310
//   Label: LAB_00414126
//   XREF to: 0065a310 (DATA)
// 0041412b: PUSH EBX
// 0041412c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00414131: ADD ESP,0x8
// 00414134: PUSH EAX
// 00414135: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0041413a: ADD ESP,0x4
// 0041413d: MOV EAX,EBX
// 0041413f: POP EBX
// 00414140: RET
// 00414141: PUSH EAX
//   Label: LAB_00414141
// 00414142: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00414147: ADD ESP,0x4
// 0041414a: MOV EAX,EBX
// 0041414c: POP EBX
// 0041414d: RET
