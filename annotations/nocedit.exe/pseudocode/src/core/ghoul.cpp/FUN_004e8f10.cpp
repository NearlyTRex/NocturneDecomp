// Name: core_ghoul.cpp_FUN_004e8f10
// Address: 004e8f10
// Address Range: [[004e8f10, 004e8fc8]]
// Convention: __cdecl
// Signature: CGhoul * core_ghoul.cpp_FUN_004e8f10(CGhoul * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CGhoulTypeInfo
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

CGhoul * __cdecl
core_ghoul_cpp_FUN_004e8f10
          (CGhoul *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CGhoul *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CGhoulTypeInfo);
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
  ptr = (CGhoul *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004e8f10: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8f10
// 004e8f11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e8f15: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004e8f1a: JNZ 0x004e8fa1
//   XREF to: 004e8fa1 (CONDITIONAL_JUMP)
// 004e8f20: PUSH 0x0
// 004e8f22: ADD EBX,0x33cc
// 004e8f28: PUSH EBX
// 004e8f29: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004e8f2e: ADD ESP,0x8
// 004e8f31: PUSH 0x0
// 004e8f33: SUB EAX,0x4b0
// 004e8f38: PUSH EAX
// 004e8f39: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004e8f3e: ADD ESP,0x8
// 004e8f41: PUSH 0x0
// 004e8f43: SUB EAX,0x20c
// 004e8f48: PUSH EAX
// 004e8f49: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004e8f4e: ADD ESP,0x8
// 004e8f51: PUSH 0x0
// 004e8f53: SUB EAX,0xb4
// 004e8f58: PUSH EAX
// 004e8f59: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004e8f5e: ADD ESP,0x8
// 004e8f61: PUSH 0x0
// 004e8f63: SUB EAX,0x1c8
// 004e8f68: PUSH EAX
// 004e8f69: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004e8f6e: ADD ESP,0x8
// 004e8f71: PUSH 0x0
// 004e8f73: SUB EAX,0x293c
// 004e8f78: PUSH EAX
// 004e8f79: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004e8f7e: ADD ESP,0x8
// 004e8f81: PUSH 0x1
// 004e8f83: LEA EBX,[EAX + 0xfffffea8]
// 004e8f89: PUSH EBX
// 004e8f8a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004e8f8f: ADD ESP,0x8
// 004e8f92: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e8f96: MOV EBX,EAX
// 004e8f98: TEST DL,0x2
// 004e8f9b: JNZ 0x004e8fbc
//   XREF to: 004e8fbc (CONDITIONAL_JUMP)
// 004e8f9d: MOV EAX,EBX
// 004e8f9f: POP EBX
// 004e8fa0: RET
// 004e8fa1: PUSH 0x65eeb0
//   Label: LAB_004e8fa1
//   XREF to: 0065eeb0 (DATA)
// 004e8fa6: PUSH EBX
// 004e8fa7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004e8fac: ADD ESP,0x8
// 004e8faf: PUSH EAX
// 004e8fb0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004e8fb5: ADD ESP,0x4
// 004e8fb8: MOV EAX,EBX
// 004e8fba: POP EBX
// 004e8fbb: RET
// 004e8fbc: PUSH EAX
//   Label: LAB_004e8fbc
// 004e8fbd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004e8fc2: ADD ESP,0x4
// 004e8fc5: MOV EAX,EBX
// 004e8fc7: POP EBX
// 004e8fc8: RET
