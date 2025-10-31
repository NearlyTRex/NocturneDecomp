// Name: core_gargoyle.cpp_FUN_004e5bd0
// Address: 004e5bd0
// Address Range: [[004e5bd0, 004e5c88]]
// Convention: __cdecl
// Signature: CGargoyle * core_gargoyle.cpp_FUN_004e5bd0(CGargoyle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CGargoyleTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CGargoyle * __cdecl
core_gargoyle_cpp_FUN_004e5bd0
          (CGargoyle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CGargoyle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGargoyleTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)((this_ptr->base_enemy).base_character.cloth_data + 0x934));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d3,d4,d5);
  ptr = (CGargoyle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004e5bd0: PUSH EBX
//   Label: core_gargoyle.cpp_FUN_004e5bd0
// 004e5bd1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5bd5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004e5bda: JNZ 0x004e5c61
//   XREF to: 004e5c61 (CONDITIONAL_JUMP)
// 004e5be0: PUSH 0x0
// 004e5be2: ADD EBX,0x33cc
// 004e5be8: PUSH EBX
// 004e5be9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004e5bee: ADD ESP,0x8
// 004e5bf1: PUSH 0x0
// 004e5bf3: SUB EAX,0x4b0
// 004e5bf8: PUSH EAX
// 004e5bf9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004e5bfe: ADD ESP,0x8
// 004e5c01: PUSH 0x0
// 004e5c03: SUB EAX,0x20c
// 004e5c08: PUSH EAX
// 004e5c09: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004e5c0e: ADD ESP,0x8
// 004e5c11: PUSH 0x0
// 004e5c13: SUB EAX,0xb4
// 004e5c18: PUSH EAX
// 004e5c19: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004e5c1e: ADD ESP,0x8
// 004e5c21: PUSH 0x0
// 004e5c23: SUB EAX,0x1c8
// 004e5c28: PUSH EAX
// 004e5c29: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004e5c2e: ADD ESP,0x8
// 004e5c31: PUSH 0x0
// 004e5c33: SUB EAX,0x293c
// 004e5c38: PUSH EAX
// 004e5c39: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004e5c3e: ADD ESP,0x8
// 004e5c41: PUSH 0x1
// 004e5c43: LEA EBX,[EAX + 0xfffffea8]
// 004e5c49: PUSH EBX
// 004e5c4a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004e5c4f: ADD ESP,0x8
// 004e5c52: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5c56: MOV EBX,EAX
// 004e5c58: TEST DL,0x2
// 004e5c5b: JNZ 0x004e5c7c
//   XREF to: 004e5c7c (CONDITIONAL_JUMP)
// 004e5c5d: MOV EAX,EBX
// 004e5c5f: POP EBX
// 004e5c60: RET
// 004e5c61: PUSH 0x65ebb0
//   Label: LAB_004e5c61
//   XREF to: 0065ebb0 (DATA)
// 004e5c66: PUSH EBX
// 004e5c67: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004e5c6c: ADD ESP,0x8
// 004e5c6f: PUSH EAX
// 004e5c70: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004e5c75: ADD ESP,0x4
// 004e5c78: MOV EAX,EBX
// 004e5c7a: POP EBX
// 004e5c7b: RET
// 004e5c7c: PUSH EAX
//   Label: LAB_004e5c7c
// 004e5c7d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004e5c82: ADD ESP,0x4
// 004e5c85: MOV EAX,EBX
// 004e5c87: POP EBX
// 004e5c88: RET
