// Name: core_colonel.cpp_CColonel_dtor_FUN_00440670
// Address: 00440670
// Address Range: [[00440670, 004406bd]]
// Convention: __cdecl
// Signature: CColonel * core_colonel.cpp_CColonel_dtor_FUN_00440670(CColonel * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CColonelTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_dtor_FUN_00440670(CColonel *this_ptr,uint d1,uint d2)

{
  CColonel *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  uint in_stack_00000010;
  uint in_stack_00000014;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CColonelTypeInfo);
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
// 00440670: PUSH EBX
//   Label: core_colonel.cpp_CColonel_dtor_FUN_00440670
// 00440671: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00440675: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0044067a: JNZ 0x00440696
//   XREF to: 00440696 (CONDITIONAL_JUMP)
// 0044067c: PUSH 0x1
// 0044067e: PUSH EBX
// 0044067f: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 00440684: ADD ESP,0x8
// 00440687: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0044068b: MOV EBX,EAX
// 0044068d: TEST DL,0x2
// 00440690: JNZ 0x004406b1
//   XREF to: 004406b1 (CONDITIONAL_JUMP)
// 00440692: MOV EAX,EBX
// 00440694: POP EBX
// 00440695: RET
// 00440696: PUSH 0x65bec0
//   Label: LAB_00440696
//   XREF to: 0065bec0 (DATA)
// 0044069b: PUSH EBX
// 0044069c: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004406a1: ADD ESP,0x8
// 004406a4: PUSH EAX
// 004406a5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004406aa: ADD ESP,0x4
// 004406ad: MOV EAX,EBX
// 004406af: POP EBX
// 004406b0: RET
// 004406b1: PUSH EAX
//   Label: LAB_004406b1
// 004406b2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004406b7: ADD ESP,0x4
// 004406ba: MOV EAX,EBX
// 004406bc: POP EBX
// 004406bd: RET
