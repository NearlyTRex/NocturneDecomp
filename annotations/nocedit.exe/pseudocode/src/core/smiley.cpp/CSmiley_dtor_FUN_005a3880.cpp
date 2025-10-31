// Name: core_smiley.cpp_CSmiley_dtor_FUN_005a3880
// Address: 005a3880
// Address Range: [[005a3880, 005a3938]]
// Convention: __cdecl
// Signature: CSmiley * core_smiley.cpp_CSmiley_dtor_FUN_005a3880(CSmiley * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CSmileyTypeInfo
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

CSmiley * __cdecl
core_smiley_cpp_CSmiley_dtor_FUN_005a3880
          (CSmiley *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CSmiley *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSmileyTypeInfo);
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
  ptr = (CSmiley *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005a3880: PUSH EBX
//   Label: core_smiley.cpp_CSmiley_dtor_FUN_005a3880
// 005a3881: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a3885: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005a388a: JNZ 0x005a3911
//   XREF to: 005a3911 (CONDITIONAL_JUMP)
// 005a3890: PUSH 0x0
// 005a3892: ADD EBX,0x33cc
// 005a3898: PUSH EBX
// 005a3899: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005a389e: ADD ESP,0x8
// 005a38a1: PUSH 0x0
// 005a38a3: SUB EAX,0x4b0
// 005a38a8: PUSH EAX
// 005a38a9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005a38ae: ADD ESP,0x8
// 005a38b1: PUSH 0x0
// 005a38b3: SUB EAX,0x20c
// 005a38b8: PUSH EAX
// 005a38b9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005a38be: ADD ESP,0x8
// 005a38c1: PUSH 0x0
// 005a38c3: SUB EAX,0xb4
// 005a38c8: PUSH EAX
// 005a38c9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005a38ce: ADD ESP,0x8
// 005a38d1: PUSH 0x0
// 005a38d3: SUB EAX,0x1c8
// 005a38d8: PUSH EAX
// 005a38d9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005a38de: ADD ESP,0x8
// 005a38e1: PUSH 0x0
// 005a38e3: SUB EAX,0x293c
// 005a38e8: PUSH EAX
// 005a38e9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005a38ee: ADD ESP,0x8
// 005a38f1: PUSH 0x1
// 005a38f3: LEA EBX,[EAX + 0xfffffea8]
// 005a38f9: PUSH EBX
// 005a38fa: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005a38ff: ADD ESP,0x8
// 005a3902: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005a3906: MOV EBX,EAX
// 005a3908: TEST DL,0x2
// 005a390b: JNZ 0x005a392c
//   XREF to: 005a392c (CONDITIONAL_JUMP)
// 005a390d: MOV EAX,EBX
// 005a390f: POP EBX
// 005a3910: RET
// 005a3911: PUSH 0x6630f0
//   Label: LAB_005a3911
//   XREF to: 006630f0 (DATA)
// 005a3916: PUSH EBX
// 005a3917: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005a391c: ADD ESP,0x8
// 005a391f: PUSH EAX
// 005a3920: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005a3925: ADD ESP,0x4
// 005a3928: MOV EAX,EBX
// 005a392a: POP EBX
// 005a392b: RET
// 005a392c: PUSH EAX
//   Label: LAB_005a392c
// 005a392d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005a3932: ADD ESP,0x4
// 005a3935: MOV EAX,EBX
// 005a3937: POP EBX
// 005a3938: RET
