// Name: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610
// Address: 005da610
// Address Range: [[005da610, 005da6d8]]
// Convention: __cdecl
// Signature: CBassPlayer * core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer * this_ptr)
// Globals:
//   WatcomTypeInfo g_CBassPlayerTypeInfo
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

CBassPlayer * __cdecl core_tbplayer_cpp_CBassPlayer_dtor_FUN_005da610(CBassPlayer *this_ptr)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CBassPlayer *ptr;
  void *ptr_00;
  uint in_stack_00000008;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  byte in_stack_00000028;
  
  if ((in_stack_00000008 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBassPlayerTypeInfo);
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
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,in_stack_00000014,
                      in_stack_00000018,in_stack_0000001c);
  ptr = (CBassPlayer *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((in_stack_00000028 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005da610: PUSH EBX
//   Label: core_tbplayer.cpp_CBassPlayer_dtor_FUN_005da610
// 005da611: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005da615: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005da61a: JNZ 0x005da6b1
//   XREF to: 005da6b1 (CONDITIONAL_JUMP)
// 005da620: PUSH 0x0
// 005da622: ADD EBX,0xbe24
// 005da628: PUSH EBX
// 005da629: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 005da62e: ADD ESP,0x8
// 005da631: PUSH 0x0
// 005da633: SUB EAX,0x8a58
// 005da638: PUSH EAX
// 005da639: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005da63e: ADD ESP,0x8
// 005da641: PUSH 0x0
// 005da643: SUB EAX,0x4b0
// 005da648: PUSH EAX
// 005da649: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005da64e: ADD ESP,0x8
// 005da651: PUSH 0x0
// 005da653: SUB EAX,0x20c
// 005da658: PUSH EAX
// 005da659: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005da65e: ADD ESP,0x8
// 005da661: PUSH 0x0
// 005da663: SUB EAX,0xb4
// 005da668: PUSH EAX
// 005da669: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005da66e: ADD ESP,0x8
// 005da671: PUSH 0x0
// 005da673: SUB EAX,0x1c8
// 005da678: PUSH EAX
// 005da679: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005da67e: ADD ESP,0x8
// 005da681: PUSH 0x0
// 005da683: SUB EAX,0x293c
// 005da688: PUSH EAX
// 005da689: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005da68e: ADD ESP,0x8
// 005da691: PUSH 0x1
// 005da693: LEA EBX,[EAX + 0xfffffea8]
// 005da699: PUSH EBX
// 005da69a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005da69f: ADD ESP,0x8
// 005da6a2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005da6a6: MOV EBX,EAX
// 005da6a8: TEST DL,0x2
// 005da6ab: JNZ 0x005da6cc
//   XREF to: 005da6cc (CONDITIONAL_JUMP)
// 005da6ad: MOV EAX,EBX
// 005da6af: POP EBX
// 005da6b0: RET
// 005da6b1: PUSH 0x6641f0
//   Label: LAB_005da6b1
//   XREF to: 006641f0 (DATA)
// 005da6b6: PUSH EBX
// 005da6b7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005da6bc: ADD ESP,0x8
// 005da6bf: PUSH EAX
// 005da6c0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005da6c5: ADD ESP,0x4
// 005da6c8: MOV EAX,EBX
// 005da6ca: POP EBX
// 005da6cb: RET
// 005da6cc: PUSH EAX
//   Label: LAB_005da6cc
// 005da6cd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005da6d2: ADD ESP,0x4
// 005da6d5: MOV EAX,EBX
// 005da6d7: POP EBX
// 005da6d8: RET
