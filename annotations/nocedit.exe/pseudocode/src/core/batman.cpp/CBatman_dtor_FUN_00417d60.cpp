// Name: core_batman.cpp_CBatman_dtor_FUN_00417d60
// Address: 00417d60
// Address Range: [[00417d60, 00417e18]]
// Convention: __cdecl
// Signature: CBatman * core_batman.cpp_CBatman_dtor_FUN_00417d60(CBatman * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CBatmanTypeInfo
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

CBatman * __cdecl
core_batman_cpp_CBatman_dtor_FUN_00417d60
          (CBatman *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBatman *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBatmanTypeInfo);
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
  ptr = (CBatman *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00417d60: PUSH EBX
//   Label: core_batman.cpp_CBatman_dtor_FUN_00417d60
// 00417d61: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00417d65: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00417d6a: JNZ 0x00417df1
//   XREF to: 00417df1 (CONDITIONAL_JUMP)
// 00417d70: PUSH 0x0
// 00417d72: ADD EBX,0x33cc
// 00417d78: PUSH EBX
// 00417d79: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00417d7e: ADD ESP,0x8
// 00417d81: PUSH 0x0
// 00417d83: SUB EAX,0x4b0
// 00417d88: PUSH EAX
// 00417d89: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00417d8e: ADD ESP,0x8
// 00417d91: PUSH 0x0
// 00417d93: SUB EAX,0x20c
// 00417d98: PUSH EAX
// 00417d99: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00417d9e: ADD ESP,0x8
// 00417da1: PUSH 0x0
// 00417da3: SUB EAX,0xb4
// 00417da8: PUSH EAX
// 00417da9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00417dae: ADD ESP,0x8
// 00417db1: PUSH 0x0
// 00417db3: SUB EAX,0x1c8
// 00417db8: PUSH EAX
// 00417db9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00417dbe: ADD ESP,0x8
// 00417dc1: PUSH 0x0
// 00417dc3: SUB EAX,0x293c
// 00417dc8: PUSH EAX
// 00417dc9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00417dce: ADD ESP,0x8
// 00417dd1: PUSH 0x1
// 00417dd3: LEA EBX,[EAX + 0xfffffea8]
// 00417dd9: PUSH EBX
// 00417dda: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00417ddf: ADD ESP,0x8
// 00417de2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00417de6: MOV EBX,EAX
// 00417de8: TEST DL,0x2
// 00417deb: JNZ 0x00417e0c
//   XREF to: 00417e0c (CONDITIONAL_JUMP)
// 00417ded: MOV EAX,EBX
// 00417def: POP EBX
// 00417df0: RET
// 00417df1: PUSH 0x65a8f0
//   Label: LAB_00417df1
//   XREF to: 0065a8f0 (DATA)
// 00417df6: PUSH EBX
// 00417df7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00417dfc: ADD ESP,0x8
// 00417dff: PUSH EAX
// 00417e00: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00417e05: ADD ESP,0x4
// 00417e08: MOV EAX,EBX
// 00417e0a: POP EBX
// 00417e0b: RET
// 00417e0c: PUSH EAX
//   Label: LAB_00417e0c
// 00417e0d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00417e12: ADD ESP,0x4
// 00417e15: MOV EAX,EBX
// 00417e17: POP EBX
// 00417e18: RET
