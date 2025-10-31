// Name: core_mobster.cpp_CMobster_dtor_FUN_00527c70
// Address: 00527c70
// Address Range: [[00527c70, 00527d28]]
// Convention: __cdecl
// Signature: CMobster * core_mobster.cpp_CMobster_dtor_FUN_00527c70(CMobster * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CMobsterTypeInfo
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

CMobster * __cdecl
core_mobster_cpp_CMobster_dtor_FUN_00527c70
          (CMobster *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CMobster *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMobsterTypeInfo);
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
  ptr = (CMobster *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00527c70: PUSH EBX
//   Label: core_mobster.cpp_CMobster_dtor_FUN_00527c70
// 00527c71: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00527c75: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00527c7a: JNZ 0x00527d01
//   XREF to: 00527d01 (CONDITIONAL_JUMP)
// 00527c80: PUSH 0x0
// 00527c82: ADD EBX,0x33cc
// 00527c88: PUSH EBX
// 00527c89: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00527c8e: ADD ESP,0x8
// 00527c91: PUSH 0x0
// 00527c93: SUB EAX,0x4b0
// 00527c98: PUSH EAX
// 00527c99: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00527c9e: ADD ESP,0x8
// 00527ca1: PUSH 0x0
// 00527ca3: SUB EAX,0x20c
// 00527ca8: PUSH EAX
// 00527ca9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00527cae: ADD ESP,0x8
// 00527cb1: PUSH 0x0
// 00527cb3: SUB EAX,0xb4
// 00527cb8: PUSH EAX
// 00527cb9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00527cbe: ADD ESP,0x8
// 00527cc1: PUSH 0x0
// 00527cc3: SUB EAX,0x1c8
// 00527cc8: PUSH EAX
// 00527cc9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00527cce: ADD ESP,0x8
// 00527cd1: PUSH 0x0
// 00527cd3: SUB EAX,0x293c
// 00527cd8: PUSH EAX
// 00527cd9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00527cde: ADD ESP,0x8
// 00527ce1: PUSH 0x1
// 00527ce3: LEA EBX,[EAX + 0xfffffea8]
// 00527ce9: PUSH EBX
// 00527cea: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00527cef: ADD ESP,0x8
// 00527cf2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00527cf6: MOV EBX,EAX
// 00527cf8: TEST DL,0x2
// 00527cfb: JNZ 0x00527d1c
//   XREF to: 00527d1c (CONDITIONAL_JUMP)
// 00527cfd: MOV EAX,EBX
// 00527cff: POP EBX
// 00527d00: RET
// 00527d01: PUSH 0x661900
//   Label: LAB_00527d01
//   XREF to: 00661900 (DATA)
// 00527d06: PUSH EBX
// 00527d07: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00527d0c: ADD ESP,0x8
// 00527d0f: PUSH EAX
// 00527d10: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00527d15: ADD ESP,0x4
// 00527d18: MOV EAX,EBX
// 00527d1a: POP EBX
// 00527d1b: RET
// 00527d1c: PUSH EAX
//   Label: LAB_00527d1c
// 00527d1d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00527d22: ADD ESP,0x4
// 00527d25: MOV EAX,EBX
// 00527d27: POP EBX
// 00527d28: RET
