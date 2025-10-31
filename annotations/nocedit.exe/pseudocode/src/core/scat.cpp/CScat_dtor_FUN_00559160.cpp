// Name: core_scat.cpp_CScat_dtor_FUN_00559160
// Address: 00559160
// Address Range: [[00559160, 005591ad]]
// Convention: __cdecl
// Signature: CScat * core_scat.cpp_CScat_dtor_FUN_00559160(CScat * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CScatTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CScat * __cdecl core_scat_cpp_CScat_dtor_FUN_00559160(CScat *this_ptr,uint d1,uint d2)

{
  CScat *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CScatTypeInfo);
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
// 00559160: PUSH EBX
//   Label: core_scat.cpp_CScat_dtor_FUN_00559160
// 00559161: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00559165: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0055916a: JNZ 0x00559186
//   XREF to: 00559186 (CONDITIONAL_JUMP)
// 0055916c: PUSH 0x1
// 0055916e: PUSH EBX
// 0055916f: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 00559174: ADD ESP,0x8
// 00559177: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0055917b: MOV EBX,EAX
// 0055917d: TEST DL,0x2
// 00559180: JNZ 0x005591a1
//   XREF to: 005591a1 (CONDITIONAL_JUMP)
// 00559182: MOV EAX,EBX
// 00559184: POP EBX
// 00559185: RET
// 00559186: PUSH 0x6625d0
//   Label: LAB_00559186
//   XREF to: 006625d0 (DATA)
// 0055918b: PUSH EBX
// 0055918c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00559191: ADD ESP,0x8
// 00559194: PUSH EAX
// 00559195: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0055919a: ADD ESP,0x4
// 0055919d: MOV EAX,EBX
// 0055919f: POP EBX
// 005591a0: RET
// 005591a1: PUSH EAX
//   Label: LAB_005591a1
// 005591a2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005591a7: ADD ESP,0x4
// 005591aa: MOV EAX,EBX
// 005591ac: POP EBX
// 005591ad: RET
