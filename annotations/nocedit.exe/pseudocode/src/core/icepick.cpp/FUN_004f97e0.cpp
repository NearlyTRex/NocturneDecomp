// Name: core_icepick.cpp_FUN_004f97e0
// Address: 004f97e0
// Address Range: [[004f97e0, 004f982d]]
// Convention: __cdecl
// Signature: CIcePick * core_icepick.cpp_FUN_004f97e0(CIcePick * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CIcePickTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_FUN_004f97e0(CIcePick *this_ptr,uint d1,uint d2)

{
  CIcePick *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CIcePickTypeInfo);
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
// 004f97e0: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f97e0
// 004f97e1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f97e5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f97ea: JNZ 0x004f9806
//   XREF to: 004f9806 (CONDITIONAL_JUMP)
// 004f97ec: PUSH 0x1
// 004f97ee: PUSH EBX
// 004f97ef: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 004f97f4: ADD ESP,0x8
// 004f97f7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f97fb: MOV EBX,EAX
// 004f97fd: TEST DL,0x2
// 004f9800: JNZ 0x004f9821
//   XREF to: 004f9821 (CONDITIONAL_JUMP)
// 004f9802: MOV EAX,EBX
// 004f9804: POP EBX
// 004f9805: RET
// 004f9806: PUSH 0x6601a0
//   Label: LAB_004f9806
//   XREF to: 006601a0 (DATA)
// 004f980b: PUSH EBX
// 004f980c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f9811: ADD ESP,0x8
// 004f9814: PUSH EAX
// 004f9815: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f981a: ADD ESP,0x4
// 004f981d: MOV EAX,EBX
// 004f981f: POP EBX
// 004f9820: RET
// 004f9821: PUSH EAX
//   Label: LAB_004f9821
// 004f9822: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f9827: ADD ESP,0x4
// 004f982a: MOV EAX,EBX
// 004f982c: POP EBX
// 004f982d: RET
