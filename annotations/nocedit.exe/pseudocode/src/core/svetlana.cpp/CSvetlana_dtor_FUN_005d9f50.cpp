// Name: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// Address: 005d9f50
// Address Range: [[005d9f50, 005d9fc4]]
// Convention: __cdecl
// Signature: CSvetlana * core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   WatcomTypeInfo g_CSvetlanaTypeInfo
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CSvetlana * __cdecl
core_svetlana_cpp_CSvetlana_dtor_FUN_005d9f50(CSvetlana *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  CSvetlana *ptr;
  void *ptr_00;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSvetlanaTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)(iVar1 + -0x1fbdc),1,(uint)this_ptr,d1,d2,d3,d4,in_stack_00000018,
             in_stack_0000001c);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005d9f50: PUSH EBX
//   Label: core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50
// 005d9f51: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005d9f55: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005d9f5a: JNZ 0x005d9f9d
//   XREF to: 005d9f9d (CONDITIONAL_JUMP)
// 005d9f5c: PUSH 0x0
// 005d9f5e: ADD EBX,0x5fa4c
// 005d9f64: PUSH EBX
// 005d9f65: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 005d9f6a: ADD ESP,0x8
// 005d9f6d: PUSH 0x0
// 005d9f6f: SUB EAX,0x3fe70
// 005d9f74: PUSH EAX
// 005d9f75: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 005d9f7a: ADD ESP,0x8
// 005d9f7d: PUSH 0x1
// 005d9f7f: LEA EBX,[EAX + 0xfffe0424]
// 005d9f85: PUSH EBX
// 005d9f86: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 005d9f8b: ADD ESP,0x8
// 005d9f8e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005d9f92: MOV EBX,EAX
// 005d9f94: TEST DL,0x2
// 005d9f97: JNZ 0x005d9fb8
//   XREF to: 005d9fb8 (CONDITIONAL_JUMP)
// 005d9f99: MOV EAX,EBX
// 005d9f9b: POP EBX
// 005d9f9c: RET
// 005d9f9d: PUSH 0x663ed0
//   Label: LAB_005d9f9d
//   XREF to: 00663ed0 (DATA)
// 005d9fa2: PUSH EBX
// 005d9fa3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005d9fa8: ADD ESP,0x8
// 005d9fab: PUSH EAX
// 005d9fac: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005d9fb1: ADD ESP,0x4
// 005d9fb4: MOV EAX,EBX
// 005d9fb6: POP EBX
// 005d9fb7: RET
// 005d9fb8: PUSH EAX
//   Label: LAB_005d9fb8
// 005d9fb9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005d9fbe: ADD ESP,0x4
// 005d9fc1: MOV EAX,EBX
// 005d9fc3: POP EBX
// 005d9fc4: RET
