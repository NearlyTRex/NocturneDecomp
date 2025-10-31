// Name: core_haystack.cpp_FUN_004f1d10
// Address: 004f1d10
// Address Range: [[004f1d10, 004f1d5d]]
// Convention: __cdecl
// Signature: CHaystack * core_haystack.cpp_FUN_004f1d10(CHaystack * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CHaystackTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_FUN_004f1d10(CHaystack *this_ptr,uint d1,uint d2)

{
  CHaystack *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHaystackTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470
            (&this_ptr->base_hero,1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,in_stack_00000010,
             in_stack_00000014);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f1d10: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f1d10
// 004f1d11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1d15: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f1d1a: JNZ 0x004f1d36
//   XREF to: 004f1d36 (CONDITIONAL_JUMP)
// 004f1d1c: PUSH 0x1
// 004f1d1e: PUSH EBX
// 004f1d1f: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 004f1d24: ADD ESP,0x8
// 004f1d27: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f1d2b: MOV EBX,EAX
// 004f1d2d: TEST DL,0x2
// 004f1d30: JNZ 0x004f1d51
//   XREF to: 004f1d51 (CONDITIONAL_JUMP)
// 004f1d32: MOV EAX,EBX
// 004f1d34: POP EBX
// 004f1d35: RET
// 004f1d36: PUSH 0x65f560
//   Label: LAB_004f1d36
//   XREF to: 0065f560 (DATA)
// 004f1d3b: PUSH EBX
// 004f1d3c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f1d41: ADD ESP,0x8
// 004f1d44: PUSH EAX
// 004f1d45: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f1d4a: ADD ESP,0x4
// 004f1d4d: MOV EAX,EBX
// 004f1d4f: POP EBX
// 004f1d50: RET
// 004f1d51: PUSH EAX
//   Label: LAB_004f1d51
// 004f1d52: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f1d57: ADD ESP,0x4
// 004f1d5a: MOV EAX,EBX
// 004f1d5c: POP EBX
// 004f1d5d: RET
