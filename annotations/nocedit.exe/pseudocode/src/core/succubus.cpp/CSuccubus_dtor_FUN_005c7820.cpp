// Name: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// Address: 005c7820
// Address Range: [[005c7820, 005c7908]]
// Convention: __cdecl
// Signature: CSuccubus * core_succubus.cpp_CSuccubus_dtor_FUN_005c7820(CSuccubus * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11)
// Globals:
//   WatcomTypeInfo g_CSuccubusTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_morph.cpp_CMorphModel_FUN_0052b330
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CSuccubus * __cdecl
core_succubus_cpp_CSuccubus_dtor_FUN_005c7820
          (CSuccubus *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9,uint d10,uint d11)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CSuccubus *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CSuccubusTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)(this_ptr->field1_0xbeb4 + 0x2488));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x22b4),0,(uint)this_ptr,d1,d2);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(pCVar2[-5].model_name + 0x34));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d6,d7,d8);
  ptr = (CSuccubus *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d11 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005c7820: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_dtor_FUN_005c7820
// 005c7821: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005c7825: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005c782a: JNZ 0x005c78e1
//   XREF to: 005c78e1 (CONDITIONAL_JUMP)
// 005c7830: PUSH 0x0
// 005c7832: ADD EBX,0xe33c
// 005c7838: PUSH EBX
// 005c7839: CALL core_morph.cpp_CMorphModel_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 005c783e: ADD ESP,0x8
// 005c7841: PUSH 0x0
// 005c7843: SUB EAX,0x1cc
// 005c7848: PUSH EAX
// 005c7849: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005c784e: ADD ESP,0x8
// 005c7851: PUSH 0x0
// 005c7853: SUB EAX,0x22b4
// 005c7858: PUSH EAX
// 005c7859: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005c785e: ADD ESP,0x8
// 005c7861: PUSH 0x0
// 005c7863: SUB EAX,0x8af0
// 005c7868: PUSH EAX
// 005c7869: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005c786e: ADD ESP,0x8
// 005c7871: PUSH 0x0
// 005c7873: SUB EAX,0x4b0
// 005c7878: PUSH EAX
// 005c7879: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005c787e: ADD ESP,0x8
// 005c7881: PUSH 0x0
// 005c7883: SUB EAX,0x20c
// 005c7888: PUSH EAX
// 005c7889: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005c788e: ADD ESP,0x8
// 005c7891: PUSH 0x0
// 005c7893: SUB EAX,0xb4
// 005c7898: PUSH EAX
// 005c7899: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005c789e: ADD ESP,0x8
// 005c78a1: PUSH 0x0
// 005c78a3: SUB EAX,0x1c8
// 005c78a8: PUSH EAX
// 005c78a9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005c78ae: ADD ESP,0x8
// 005c78b1: PUSH 0x0
// 005c78b3: SUB EAX,0x293c
// 005c78b8: PUSH EAX
// 005c78b9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005c78be: ADD ESP,0x8
// 005c78c1: PUSH 0x1
// 005c78c3: LEA EBX,[EAX + 0xfffffea8]
// 005c78c9: PUSH EBX
// 005c78ca: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005c78cf: ADD ESP,0x8
// 005c78d2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005c78d6: MOV EBX,EAX
// 005c78d8: TEST DL,0x2
// 005c78db: JNZ 0x005c78fc
//   XREF to: 005c78fc (CONDITIONAL_JUMP)
// 005c78dd: MOV EAX,EBX
// 005c78df: POP EBX
// 005c78e0: RET
// 005c78e1: PUSH 0x663ab0
//   Label: LAB_005c78e1
//   XREF to: 00663ab0 (DATA)
// 005c78e6: PUSH EBX
// 005c78e7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005c78ec: ADD ESP,0x8
// 005c78ef: PUSH EAX
// 005c78f0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005c78f5: ADD ESP,0x4
// 005c78f8: MOV EAX,EBX
// 005c78fa: POP EBX
// 005c78fb: RET
// 005c78fc: PUSH EAX
//   Label: LAB_005c78fc
// 005c78fd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005c7902: ADD ESP,0x4
// 005c7905: MOV EAX,EBX
// 005c7907: POP EBX
// 005c7908: RET
