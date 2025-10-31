// Name: core_hpriest.cpp_FUN_004f7cb0
// Address: 004f7cb0
// Address Range: [[004f7cb0, 004f7d78]]
// Convention: __cdecl
// Signature: CHighPriestOfGardath * core_hpriest.cpp_FUN_004f7cb0(CHighPriestOfGardath * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CHighPriestOfGardathTypeInfo
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

CHighPriestOfGardath * __cdecl
core_hpriest_cpp_FUN_004f7cb0
          (CHighPriestOfGardath *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,
          uint d8,uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CHighPriestOfGardath *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHighPriestOfGardathTypeInfo);
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
  ptr = (CHighPriestOfGardath *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f7cb0: PUSH EBX
//   Label: core_hpriest.cpp_FUN_004f7cb0
// 004f7cb1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7cb5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f7cba: JNZ 0x004f7d51
//   XREF to: 004f7d51 (CONDITIONAL_JUMP)
// 004f7cc0: PUSH 0x0
// 004f7cc2: ADD EBX,0xbe24
// 004f7cc8: PUSH EBX
// 004f7cc9: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 004f7cce: ADD ESP,0x8
// 004f7cd1: PUSH 0x0
// 004f7cd3: SUB EAX,0x8a58
// 004f7cd8: PUSH EAX
// 004f7cd9: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f7cde: ADD ESP,0x8
// 004f7ce1: PUSH 0x0
// 004f7ce3: SUB EAX,0x4b0
// 004f7ce8: PUSH EAX
// 004f7ce9: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f7cee: ADD ESP,0x8
// 004f7cf1: PUSH 0x0
// 004f7cf3: SUB EAX,0x20c
// 004f7cf8: PUSH EAX
// 004f7cf9: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f7cfe: ADD ESP,0x8
// 004f7d01: PUSH 0x0
// 004f7d03: SUB EAX,0xb4
// 004f7d08: PUSH EAX
// 004f7d09: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f7d0e: ADD ESP,0x8
// 004f7d11: PUSH 0x0
// 004f7d13: SUB EAX,0x1c8
// 004f7d18: PUSH EAX
// 004f7d19: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f7d1e: ADD ESP,0x8
// 004f7d21: PUSH 0x0
// 004f7d23: SUB EAX,0x293c
// 004f7d28: PUSH EAX
// 004f7d29: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f7d2e: ADD ESP,0x8
// 004f7d31: PUSH 0x1
// 004f7d33: LEA EBX,[EAX + 0xfffffea8]
// 004f7d39: PUSH EBX
// 004f7d3a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f7d3f: ADD ESP,0x8
// 004f7d42: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7d46: MOV EBX,EAX
// 004f7d48: TEST DL,0x2
// 004f7d4b: JNZ 0x004f7d6c
//   XREF to: 004f7d6c (CONDITIONAL_JUMP)
// 004f7d4d: MOV EAX,EBX
// 004f7d4f: POP EBX
// 004f7d50: RET
// 004f7d51: PUSH 0x65fff0
//   Label: LAB_004f7d51
//   XREF to: 0065fff0 (DATA)
// 004f7d56: PUSH EBX
// 004f7d57: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f7d5c: ADD ESP,0x8
// 004f7d5f: PUSH EAX
// 004f7d60: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f7d65: ADD ESP,0x4
// 004f7d68: MOV EAX,EBX
// 004f7d6a: POP EBX
// 004f7d6b: RET
// 004f7d6c: PUSH EAX
//   Label: LAB_004f7d6c
// 004f7d6d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f7d72: ADD ESP,0x4
// 004f7d75: MOV EAX,EBX
// 004f7d77: POP EBX
// 004f7d78: RET
