// Name: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// Address: 0041da40
// Address Range: [[0041da40, 0041db08]]
// Convention: __cdecl
// Signature: CBoneGuy * core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40(CBoneGuy * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   WatcomTypeInfo g_CBoneGuyTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_boneguy.cpp_FUN_0041db30
//   core_cloth.cpp_FUN_0043bf80
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CBoneGuy * __cdecl
core_boneguy_cpp_CBoneGuy_dtor_FUN_0041da40
          (CBoneGuy *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBoneGuy *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBoneGuyTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = core_boneguy_cpp_FUN_0041db30((SBoneGuyBox **)&this_ptr->box_list_pos);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(iVar1 + -0x8b70));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d4,d5,d6);
  ptr = (CBoneGuy *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0041da40: PUSH EBX
//   Label: core_boneguy.cpp_CBoneGuy_dtor_FUN_0041da40
// 0041da41: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0041da45: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0041da4a: JNZ 0x0041dae1
//   XREF to: 0041dae1 (CONDITIONAL_JUMP)
// 0041da50: PUSH 0x0
// 0041da52: ADD EBX,0xbf3c
// 0041da58: PUSH EBX
// 0041da59: CALL core_boneguy.cpp_FUN_0041db30
//   XREF to: 0041db30 (UNCONDITIONAL_CALL)
// 0041da5e: ADD ESP,0x8
// 0041da61: PUSH 0x0
// 0041da63: SUB EAX,0x8b70
// 0041da68: PUSH EAX
// 0041da69: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0041da6e: ADD ESP,0x8
// 0041da71: PUSH 0x0
// 0041da73: SUB EAX,0x4b0
// 0041da78: PUSH EAX
// 0041da79: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0041da7e: ADD ESP,0x8
// 0041da81: PUSH 0x0
// 0041da83: SUB EAX,0x20c
// 0041da88: PUSH EAX
// 0041da89: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041da8e: ADD ESP,0x8
// 0041da91: PUSH 0x0
// 0041da93: SUB EAX,0xb4
// 0041da98: PUSH EAX
// 0041da99: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0041da9e: ADD ESP,0x8
// 0041daa1: PUSH 0x0
// 0041daa3: SUB EAX,0x1c8
// 0041daa8: PUSH EAX
// 0041daa9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0041daae: ADD ESP,0x8
// 0041dab1: PUSH 0x0
// 0041dab3: SUB EAX,0x293c
// 0041dab8: PUSH EAX
// 0041dab9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0041dabe: ADD ESP,0x8
// 0041dac1: PUSH 0x1
// 0041dac3: LEA EBX,[EAX + 0xfffffea8]
// 0041dac9: PUSH EBX
// 0041daca: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0041dacf: ADD ESP,0x8
// 0041dad2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0041dad6: MOV EBX,EAX
// 0041dad8: TEST DL,0x2
// 0041dadb: JNZ 0x0041dafc
//   XREF to: 0041dafc (CONDITIONAL_JUMP)
// 0041dadd: MOV EAX,EBX
// 0041dadf: POP EBX
// 0041dae0: RET
// 0041dae1: PUSH 0x65b100
//   Label: LAB_0041dae1
//   XREF to: 0065b100 (DATA)
// 0041dae6: PUSH EBX
// 0041dae7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0041daec: ADD ESP,0x8
// 0041daef: PUSH EAX
// 0041daf0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0041daf5: ADD ESP,0x4
// 0041daf8: MOV EAX,EBX
// 0041dafa: POP EBX
// 0041dafb: RET
// 0041dafc: PUSH EAX
//   Label: LAB_0041dafc
// 0041dafd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0041db02: ADD ESP,0x4
// 0041db05: MOV EAX,EBX
// 0041db07: POP EBX
// 0041db08: RET
