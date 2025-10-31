// Name: core_gabriela.cpp_freeMaybe_FUN_004d7660
// Address: 004d7660
// Address Range: [[004d7660, 004d76c4]]
// Convention: __cdecl
// Signature: CGabriella * core_gabriela.cpp_freeMaybe_FUN_004d7660(CGabriella * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CGabriellaTypeInfo
// Function calls:
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGabriella * __cdecl
core_gabriela_cpp_freeMaybe_FUN_004d7660(CGabriella *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CGabriella *ptr;
  void *ptr_00;
  uint unaff_retaddr;
  uint in_stack_00000014;
  uint in_stack_00000018;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGabriellaTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)(iVar1 + -0x1fc14),1,unaff_retaddr,(uint)this_ptr,d1,d2,d3,in_stack_00000014,
             in_stack_00000018);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004d7660: PUSH EBX
//   Label: core_gabriela.cpp_freeMaybe_FUN_004d7660
// 004d7661: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004d7665: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004d766a: JNZ 0x004d769d
//   XREF to: 004d769d (CONDITIONAL_JUMP)
// 004d766c: PUSH 0x0
// 004d766e: ADD EBX,0x1fc14
// 004d7674: PUSH EBX
// 004d7675: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 004d767a: ADD ESP,0x8
// 004d767d: PUSH 0x1
// 004d767f: LEA EBX,[EAX + 0xfffe03ec]
// 004d7685: PUSH EBX
// 004d7686: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 004d768b: ADD ESP,0x8
// 004d768e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004d7692: MOV EBX,EAX
// 004d7694: TEST DL,0x2
// 004d7697: JNZ 0x004d76b8
//   XREF to: 004d76b8 (CONDITIONAL_JUMP)
// 004d7699: MOV EAX,EBX
// 004d769b: POP EBX
// 004d769c: RET
// 004d769d: PUSH 0x65e970
//   Label: LAB_004d769d
//   XREF to: 0065e970 (DATA)
// 004d76a2: PUSH EBX
// 004d76a3: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004d76a8: ADD ESP,0x8
// 004d76ab: PUSH EAX
// 004d76ac: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004d76b1: ADD ESP,0x4
// 004d76b4: MOV EAX,EBX
// 004d76b6: POP EBX
// 004d76b7: RET
// 004d76b8: PUSH EAX
//   Label: LAB_004d76b8
// 004d76b9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004d76be: ADD ESP,0x4
// 004d76c1: MOV EAX,EBX
// 004d76c3: POP EBX
// 004d76c4: RET
