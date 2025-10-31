// Name: core_tbplayer.cpp_CDrummer_dtor_FUN_005da540
// Address: 005da540
// Address Range: [[005da540, 005da608]]
// Convention: __cdecl
// Signature: CDrummer * core_tbplayer.cpp_CDrummer_dtor_FUN_005da540(CDrummer * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CDrummerTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_path.cpp_CPathMap_dtor_FUN_005464d0
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CDrummer * __cdecl
core_tbplayer_cpp_CDrummer_dtor_FUN_005da540
          (CDrummer *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CDrummer *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CDrummerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)&(this_ptr->base_npc).model_name);
  iVar2 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,d4,d5,d6);
  ptr = (CDrummer *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005da540: PUSH EBX
//   Label: core_tbplayer.cpp_CDrummer_dtor_FUN_005da540
// 005da541: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005da545: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005da54a: JNZ 0x005da5e1
//   XREF to: 005da5e1 (CONDITIONAL_JUMP)
// 005da550: PUSH 0x0
// 005da552: ADD EBX,0xbe24
// 005da558: PUSH EBX
// 005da559: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 005da55e: ADD ESP,0x8
// 005da561: PUSH 0x0
// 005da563: SUB EAX,0x8a58
// 005da568: PUSH EAX
// 005da569: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005da56e: ADD ESP,0x8
// 005da571: PUSH 0x0
// 005da573: SUB EAX,0x4b0
// 005da578: PUSH EAX
// 005da579: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005da57e: ADD ESP,0x8
// 005da581: PUSH 0x0
// 005da583: SUB EAX,0x20c
// 005da588: PUSH EAX
// 005da589: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005da58e: ADD ESP,0x8
// 005da591: PUSH 0x0
// 005da593: SUB EAX,0xb4
// 005da598: PUSH EAX
// 005da599: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005da59e: ADD ESP,0x8
// 005da5a1: PUSH 0x0
// 005da5a3: SUB EAX,0x1c8
// 005da5a8: PUSH EAX
// 005da5a9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005da5ae: ADD ESP,0x8
// 005da5b1: PUSH 0x0
// 005da5b3: SUB EAX,0x293c
// 005da5b8: PUSH EAX
// 005da5b9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005da5be: ADD ESP,0x8
// 005da5c1: PUSH 0x1
// 005da5c3: LEA EBX,[EAX + 0xfffffea8]
// 005da5c9: PUSH EBX
// 005da5ca: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005da5cf: ADD ESP,0x8
// 005da5d2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005da5d6: MOV EBX,EAX
// 005da5d8: TEST DL,0x2
// 005da5db: JNZ 0x005da5fc
//   XREF to: 005da5fc (CONDITIONAL_JUMP)
// 005da5dd: MOV EAX,EBX
// 005da5df: POP EBX
// 005da5e0: RET
// 005da5e1: PUSH 0x6641d0
//   Label: LAB_005da5e1
//   XREF to: 006641d0 (DATA)
// 005da5e6: PUSH EBX
// 005da5e7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005da5ec: ADD ESP,0x8
// 005da5ef: PUSH EAX
// 005da5f0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005da5f5: ADD ESP,0x4
// 005da5f8: MOV EAX,EBX
// 005da5fa: POP EBX
// 005da5fb: RET
// 005da5fc: PUSH EAX
//   Label: LAB_005da5fc
// 005da5fd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005da602: ADD ESP,0x4
// 005da605: MOV EAX,EBX
// 005da607: POP EBX
// 005da608: RET
