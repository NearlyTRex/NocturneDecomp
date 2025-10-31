// Name: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
// Address: 005c69c0
// Address Range: [[005c69c0, 005c6a0d]]
// Convention: __cdecl
// Signature: CStranger * core_stranger.cpp_CStranger_dtor_FUN_005c69c0(CStranger * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   WatcomTypeInfo g_CStrangerTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CStranger * __cdecl
core_stranger_cpp_CStranger_dtor_FUN_005c69c0(CStranger *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  CStranger *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CStrangerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_hero_cpp_CHero_dtor_FUN_004f2470
            (&this_ptr->base_hero,1,unaff_EBX,unaff_retaddr,(uint)this_ptr,d1,d2,d3,d4);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005c69c0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_dtor_FUN_005c69c0
// 005c69c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c69c5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005c69ca: JNZ 0x005c69e6
//   XREF to: 005c69e6 (CONDITIONAL_JUMP)
// 005c69cc: PUSH 0x1
// 005c69ce: PUSH EBX
// 005c69cf: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 005c69d4: ADD ESP,0x8
// 005c69d7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c69db: MOV EBX,EAX
// 005c69dd: TEST DL,0x2
// 005c69e0: JNZ 0x005c6a01
//   XREF to: 005c6a01 (CONDITIONAL_JUMP)
// 005c69e2: MOV EAX,EBX
// 005c69e4: POP EBX
// 005c69e5: RET
// 005c69e6: PUSH 0x6638f0
//   Label: LAB_005c69e6
//   XREF to: 006638f0 (DATA)
// 005c69eb: PUSH EBX
// 005c69ec: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005c69f1: ADD ESP,0x8
// 005c69f4: PUSH EAX
// 005c69f5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c69fa: ADD ESP,0x4
// 005c69fd: MOV EAX,EBX
// 005c69ff: POP EBX
// 005c6a00: RET
// 005c6a01: PUSH EAX
//   Label: LAB_005c6a01
// 005c6a02: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005c6a07: ADD ESP,0x4
// 005c6a0a: MOV EAX,EBX
// 005c6a0c: POP EBX
// 005c6a0d: RET
