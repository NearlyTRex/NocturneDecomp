// Name: core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0
// Address: 005dbcf0
// Address Range: [[005dbcf0, 005dbda8]]
// Convention: __cdecl
// Signature: CTentacle * core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0(CTentacle * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CTentacleTypeInfo
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

CTentacle * __cdecl
core_tentacle_cpp_CTentacle_dtor_FUN_005dbcf0
          (CTentacle *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CTentacle *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTentacleTypeInfo);
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
  ptr = (CTentacle *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005dbcf0: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_dtor_FUN_005dbcf0
// 005dbcf1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dbcf5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005dbcfa: JNZ 0x005dbd81
//   XREF to: 005dbd81 (CONDITIONAL_JUMP)
// 005dbd00: PUSH 0x0
// 005dbd02: ADD EBX,0x33cc
// 005dbd08: PUSH EBX
// 005dbd09: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005dbd0e: ADD ESP,0x8
// 005dbd11: PUSH 0x0
// 005dbd13: SUB EAX,0x4b0
// 005dbd18: PUSH EAX
// 005dbd19: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005dbd1e: ADD ESP,0x8
// 005dbd21: PUSH 0x0
// 005dbd23: SUB EAX,0x20c
// 005dbd28: PUSH EAX
// 005dbd29: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005dbd2e: ADD ESP,0x8
// 005dbd31: PUSH 0x0
// 005dbd33: SUB EAX,0xb4
// 005dbd38: PUSH EAX
// 005dbd39: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005dbd3e: ADD ESP,0x8
// 005dbd41: PUSH 0x0
// 005dbd43: SUB EAX,0x1c8
// 005dbd48: PUSH EAX
// 005dbd49: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005dbd4e: ADD ESP,0x8
// 005dbd51: PUSH 0x0
// 005dbd53: SUB EAX,0x293c
// 005dbd58: PUSH EAX
// 005dbd59: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005dbd5e: ADD ESP,0x8
// 005dbd61: PUSH 0x1
// 005dbd63: LEA EBX,[EAX + 0xfffffea8]
// 005dbd69: PUSH EBX
// 005dbd6a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005dbd6f: ADD ESP,0x8
// 005dbd72: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dbd76: MOV EBX,EAX
// 005dbd78: TEST DL,0x2
// 005dbd7b: JNZ 0x005dbd9c
//   XREF to: 005dbd9c (CONDITIONAL_JUMP)
// 005dbd7d: MOV EAX,EBX
// 005dbd7f: POP EBX
// 005dbd80: RET
// 005dbd81: PUSH 0x6645e0
//   Label: LAB_005dbd81
//   XREF to: 006645e0 (DATA)
// 005dbd86: PUSH EBX
// 005dbd87: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005dbd8c: ADD ESP,0x8
// 005dbd8f: PUSH EAX
// 005dbd90: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005dbd95: ADD ESP,0x4
// 005dbd98: MOV EAX,EBX
// 005dbd9a: POP EBX
// 005dbd9b: RET
// 005dbd9c: PUSH EAX
//   Label: LAB_005dbd9c
// 005dbd9d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005dbda2: ADD ESP,0x4
// 005dbda5: MOV EAX,EBX
// 005dbda7: POP EBX
// 005dbda8: RET
