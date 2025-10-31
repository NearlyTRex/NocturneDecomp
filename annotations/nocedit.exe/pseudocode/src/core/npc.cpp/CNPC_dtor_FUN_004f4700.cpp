// Name: core_npc.cpp_CNPC_dtor_FUN_004f4700
// Address: 004f4700
// Address Range: [[004f4700, 004f47c8]]
// Convention: __cdecl
// Signature: CNPC * core_npc.cpp_CNPC_dtor_FUN_004f4700(CNPC * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CNPCTypeInfo
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

CNPC * __cdecl
core_npc_cpp_CNPC_dtor_FUN_004f4700
          (CNPC *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CNPC *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CNPCTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)&this_ptr->model_name);
  iVar2 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,d4,d5,d6);
  ptr = (CNPC *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                          ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f4700: PUSH EBX
//   Label: core_npc.cpp_CNPC_dtor_FUN_004f4700
// 004f4701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f4705: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f470a: JNZ 0x004f47a1
//   XREF to: 004f47a1 (CONDITIONAL_JUMP)
// 004f4710: PUSH 0x0
// 004f4712: ADD EBX,0xbe24
// 004f4718: PUSH EBX
// 004f4719: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 004f471e: ADD ESP,0x8
// 004f4721: PUSH 0x0
// 004f4723: SUB EAX,0x8a58
// 004f4728: PUSH EAX
// 004f4729: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f472e: ADD ESP,0x8
// 004f4731: PUSH 0x0
// 004f4733: SUB EAX,0x4b0
// 004f4738: PUSH EAX
// 004f4739: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f473e: ADD ESP,0x8
// 004f4741: PUSH 0x0
// 004f4743: SUB EAX,0x20c
// 004f4748: PUSH EAX
// 004f4749: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f474e: ADD ESP,0x8
// 004f4751: PUSH 0x0
// 004f4753: SUB EAX,0xb4
// 004f4758: PUSH EAX
// 004f4759: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f475e: ADD ESP,0x8
// 004f4761: PUSH 0x0
// 004f4763: SUB EAX,0x1c8
// 004f4768: PUSH EAX
// 004f4769: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f476e: ADD ESP,0x8
// 004f4771: PUSH 0x0
// 004f4773: SUB EAX,0x293c
// 004f4778: PUSH EAX
// 004f4779: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f477e: ADD ESP,0x8
// 004f4781: PUSH 0x1
// 004f4783: LEA EBX,[EAX + 0xfffffea8]
// 004f4789: PUSH EBX
// 004f478a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f478f: ADD ESP,0x8
// 004f4792: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f4796: MOV EBX,EAX
// 004f4798: TEST DL,0x2
// 004f479b: JNZ 0x004f47bc
//   XREF to: 004f47bc (CONDITIONAL_JUMP)
// 004f479d: MOV EAX,EBX
// 004f479f: POP EBX
// 004f47a0: RET
// 004f47a1: PUSH 0x65faf0
//   Label: LAB_004f47a1
//   XREF to: 0065faf0 (DATA)
// 004f47a6: PUSH EBX
// 004f47a7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f47ac: ADD ESP,0x8
// 004f47af: PUSH EAX
// 004f47b0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f47b5: ADD ESP,0x4
// 004f47b8: MOV EAX,EBX
// 004f47ba: POP EBX
// 004f47bb: RET
// 004f47bc: PUSH EAX
//   Label: LAB_004f47bc
// 004f47bd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f47c2: ADD ESP,0x4
// 004f47c5: MOV EAX,EBX
// 004f47c7: POP EBX
// 004f47c8: RET
