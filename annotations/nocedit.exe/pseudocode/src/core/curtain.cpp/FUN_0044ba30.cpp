// Name: core_curtain.cpp_FUN_0044ba30
// Address: 0044ba30
// Address Range: [[0044ba30, 0044ba94]]
// Convention: __cdecl
// Signature: CCurtain * core_curtain.cpp_FUN_0044ba30(CCurtain * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CCurtainTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_curtain.cpp_FUN_0044bad0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCurtain * __cdecl core_curtain_cpp_FUN_0044ba30(CCurtain *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  CCurtain *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCurtainTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_curtain_cpp_FUN_0044bad0();
  ptr = (CCurtain *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)(iVar1 + -0x208),1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0044ba30: PUSH EBX
//   Label: core_curtain.cpp_FUN_0044ba30
// 0044ba31: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0044ba35: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0044ba3a: JNZ 0x0044ba6d
//   XREF to: 0044ba6d (CONDITIONAL_JUMP)
// 0044ba3c: PUSH 0x0
// 0044ba3e: ADD EBX,0x208
// 0044ba44: PUSH EBX
// 0044ba45: CALL core_curtain.cpp_FUN_0044bad0
//   XREF to: 0044bad0 (UNCONDITIONAL_CALL)
// 0044ba4a: ADD ESP,0x8
// 0044ba4d: PUSH 0x1
// 0044ba4f: LEA EBX,[EAX + 0xfffffdf8]
// 0044ba55: PUSH EBX
// 0044ba56: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0044ba5b: ADD ESP,0x8
// 0044ba5e: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0044ba62: MOV EBX,EAX
// 0044ba64: TEST DL,0x2
// 0044ba67: JNZ 0x0044ba88
//   XREF to: 0044ba88 (CONDITIONAL_JUMP)
// 0044ba69: MOV EAX,EBX
// 0044ba6b: POP EBX
// 0044ba6c: RET
// 0044ba6d: PUSH 0x65c610
//   Label: LAB_0044ba6d
//   XREF to: 0065c610 (DATA)
// 0044ba72: PUSH EBX
// 0044ba73: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0044ba78: ADD ESP,0x8
// 0044ba7b: PUSH EAX
// 0044ba7c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0044ba81: ADD ESP,0x4
// 0044ba84: MOV EAX,EBX
// 0044ba86: POP EBX
// 0044ba87: RET
// 0044ba88: PUSH EAX
//   Label: LAB_0044ba88
// 0044ba89: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0044ba8e: ADD ESP,0x4
// 0044ba91: MOV EAX,EBX
// 0044ba93: POP EBX
// 0044ba94: RET
