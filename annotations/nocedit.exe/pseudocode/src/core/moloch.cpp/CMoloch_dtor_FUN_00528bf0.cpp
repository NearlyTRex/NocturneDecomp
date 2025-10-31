// Name: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
// Address: 00528bf0
// Address Range: [[00528bf0, 00528c6e]]
// Convention: __cdecl
// Signature: CMoloch * core_moloch.cpp_CMoloch_dtor_FUN_00528bf0(CMoloch * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   CDemonActor_vtable PTR_core_moloch.cpp_FUN_00528c70_00661944
//   WatcomTypeInfo g_CMolochTypeInfo
// Function calls:
//   core_hero.cpp_CHero_dtor_FUN_004f2470
//   core_morph.cpp_FUN_0052b330
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMoloch * __cdecl
core_moloch_cpp_CMoloch_dtor_FUN_00528bf0(CMoloch *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CMoloch *ptr;
  void *ptr_00;
  uint unaff_retaddr;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMolochTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_hero).base_character.base_actor.metadata.vtable =
       &PTR_core_moloch_cpp_FUN_00528c70_00661944;
  iVar1 = core_morph_cpp_FUN_0052b330();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x2388),0,unaff_retaddr,(uint)this_ptr,
                      d1);
  core_hero_cpp_CHero_dtor_FUN_004f2470
            ((CHero *)(pCVar2[-0xf].padding_0x0 + 0xcb8),1,(uint)this_ptr,d1,d2,d3,d4,
             in_stack_00000018,in_stack_0000001c);
  if ((d4 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00528bf0: PUSH EBX
//   Label: core_moloch.cpp_CMoloch_dtor_FUN_00528bf0
// 00528bf1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00528bf5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00528bfa: JNZ 0x00528c47
//   XREF to: 00528c47 (CONDITIONAL_JUMP)
// 00528bfc: PUSH 0x0
// 00528bfe: ADD EBX,0x21f5c
// 00528c04: PUSH EBX
// 00528c05: MOV dword ptr [EBX + 0xfffde1f8],0x661944
//   XREF to: 00661944 (DATA)
// 00528c0f: CALL core_morph.cpp_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 00528c14: ADD ESP,0x8
// 00528c17: PUSH 0x0
// 00528c19: SUB EAX,0x2388
// 00528c1e: PUSH EAX
// 00528c1f: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00528c24: ADD ESP,0x8
// 00528c27: PUSH 0x1
// 00528c29: LEA EBX,[EAX + 0xfffe042c]
// 00528c2f: PUSH EBX
// 00528c30: CALL core_hero.cpp_CHero_dtor_FUN_004f2470
//   XREF to: 004f2470 (UNCONDITIONAL_CALL)
// 00528c35: ADD ESP,0x8
// 00528c38: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00528c3c: MOV EBX,EAX
// 00528c3e: TEST DL,0x2
// 00528c41: JNZ 0x00528c62
//   XREF to: 00528c62 (CONDITIONAL_JUMP)
// 00528c43: MOV EAX,EBX
// 00528c45: POP EBX
// 00528c46: RET
// 00528c47: PUSH 0x661ab0
//   Label: LAB_00528c47
//   XREF to: 00661ab0 (DATA)
// 00528c4c: PUSH EBX
// 00528c4d: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00528c52: ADD ESP,0x8
// 00528c55: PUSH EAX
// 00528c56: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00528c5b: ADD ESP,0x4
// 00528c5e: MOV EAX,EBX
// 00528c60: POP EBX
// 00528c61: RET
// 00528c62: PUSH EAX
//   Label: LAB_00528c62
// 00528c63: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00528c68: ADD ESP,0x4
// 00528c6b: MOV EAX,EBX
// 00528c6d: POP EBX
// 00528c6e: RET
