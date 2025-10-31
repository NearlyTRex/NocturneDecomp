// Name: core_bride.cpp_CBride_dtor_FUN_00424b80
// Address: 00424b80
// Address Range: [[00424b80, 00424c38]]
// Convention: __cdecl
// Signature: CBride * core_bride.cpp_CBride_dtor_FUN_00424b80(CBride * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CBrideTypeInfo
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

CBride * __cdecl
core_bride_cpp_CBride_dtor_FUN_00424b80
          (CBride *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBride *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBrideTypeInfo);
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
  ptr = (CBride *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00424b80: PUSH EBX
//   Label: core_bride.cpp_CBride_dtor_FUN_00424b80
// 00424b81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00424b85: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00424b8a: JNZ 0x00424c11
//   XREF to: 00424c11 (CONDITIONAL_JUMP)
// 00424b90: PUSH 0x0
// 00424b92: ADD EBX,0x33cc
// 00424b98: PUSH EBX
// 00424b99: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00424b9e: ADD ESP,0x8
// 00424ba1: PUSH 0x0
// 00424ba3: SUB EAX,0x4b0
// 00424ba8: PUSH EAX
// 00424ba9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00424bae: ADD ESP,0x8
// 00424bb1: PUSH 0x0
// 00424bb3: SUB EAX,0x20c
// 00424bb8: PUSH EAX
// 00424bb9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00424bbe: ADD ESP,0x8
// 00424bc1: PUSH 0x0
// 00424bc3: SUB EAX,0xb4
// 00424bc8: PUSH EAX
// 00424bc9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00424bce: ADD ESP,0x8
// 00424bd1: PUSH 0x0
// 00424bd3: SUB EAX,0x1c8
// 00424bd8: PUSH EAX
// 00424bd9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00424bde: ADD ESP,0x8
// 00424be1: PUSH 0x0
// 00424be3: SUB EAX,0x293c
// 00424be8: PUSH EAX
// 00424be9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00424bee: ADD ESP,0x8
// 00424bf1: PUSH 0x1
// 00424bf3: LEA EBX,[EAX + 0xfffffea8]
// 00424bf9: PUSH EBX
// 00424bfa: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00424bff: ADD ESP,0x8
// 00424c02: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00424c06: MOV EBX,EAX
// 00424c08: TEST DL,0x2
// 00424c0b: JNZ 0x00424c2c
//   XREF to: 00424c2c (CONDITIONAL_JUMP)
// 00424c0d: MOV EAX,EBX
// 00424c0f: POP EBX
// 00424c10: RET
// 00424c11: PUSH 0x65b590
//   Label: LAB_00424c11
//   XREF to: 0065b590 (DATA)
// 00424c16: PUSH EBX
// 00424c17: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00424c1c: ADD ESP,0x8
// 00424c1f: PUSH EAX
// 00424c20: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00424c25: ADD ESP,0x4
// 00424c28: MOV EAX,EBX
// 00424c2a: POP EBX
// 00424c2b: RET
// 00424c2c: PUSH EAX
//   Label: LAB_00424c2c
// 00424c2d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00424c32: ADD ESP,0x4
// 00424c35: MOV EAX,EBX
// 00424c37: POP EBX
// 00424c38: RET
