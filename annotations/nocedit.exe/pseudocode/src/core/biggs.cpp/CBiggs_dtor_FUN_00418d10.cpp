// Name: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// Address: 00418d10
// Address Range: [[00418d10, 00418dd8]]
// Convention: __cdecl
// Signature: CBiggs * core_biggs.cpp_CBiggs_dtor_FUN_00418d10(CBiggs * this_ptr, uint d1)
// Globals:
//   WatcomTypeInfo g_CBiggsTypeInfo
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

CBiggs * __cdecl core_biggs_cpp_CBiggs_dtor_FUN_00418d10(CBiggs *this_ptr,uint d1)

{
  int extraout_EAX;
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CBiggs *ptr;
  void *ptr_00;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  byte in_stack_00000028;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CBiggsTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->field4_0xc040);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(extraout_EAX + -0x8c74));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,in_stack_00000014,
                      in_stack_00000018,in_stack_0000001c);
  ptr = (CBiggs *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((in_stack_00000028 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00418d10: PUSH EBX
//   Label: core_biggs.cpp_CBiggs_dtor_FUN_00418d10
// 00418d11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418d15: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00418d1a: JNZ 0x00418db1
//   XREF to: 00418db1 (CONDITIONAL_JUMP)
// 00418d20: PUSH 0x0
// 00418d22: ADD EBX,0xc040
// 00418d28: PUSH EBX
// 00418d29: CALL core_morph.cpp_CMorphModel_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 00418d2e: ADD ESP,0x8
// 00418d31: PUSH 0x0
// 00418d33: SUB EAX,0x8c74
// 00418d38: PUSH EAX
// 00418d39: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00418d3e: ADD ESP,0x8
// 00418d41: PUSH 0x0
// 00418d43: SUB EAX,0x4b0
// 00418d48: PUSH EAX
// 00418d49: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00418d4e: ADD ESP,0x8
// 00418d51: PUSH 0x0
// 00418d53: SUB EAX,0x20c
// 00418d58: PUSH EAX
// 00418d59: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00418d5e: ADD ESP,0x8
// 00418d61: PUSH 0x0
// 00418d63: SUB EAX,0xb4
// 00418d68: PUSH EAX
// 00418d69: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00418d6e: ADD ESP,0x8
// 00418d71: PUSH 0x0
// 00418d73: SUB EAX,0x1c8
// 00418d78: PUSH EAX
// 00418d79: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00418d7e: ADD ESP,0x8
// 00418d81: PUSH 0x0
// 00418d83: SUB EAX,0x293c
// 00418d88: PUSH EAX
// 00418d89: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00418d8e: ADD ESP,0x8
// 00418d91: PUSH 0x1
// 00418d93: LEA EBX,[EAX + 0xfffffea8]
// 00418d99: PUSH EBX
// 00418d9a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00418d9f: ADD ESP,0x8
// 00418da2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418da6: MOV EBX,EAX
// 00418da8: TEST DL,0x2
// 00418dab: JNZ 0x00418dcc
//   XREF to: 00418dcc (CONDITIONAL_JUMP)
// 00418dad: MOV EAX,EBX
// 00418daf: POP EBX
// 00418db0: RET
// 00418db1: PUSH 0x65ad90
//   Label: LAB_00418db1
//   XREF to: 0065ad90 (DATA)
// 00418db6: PUSH EBX
// 00418db7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00418dbc: ADD ESP,0x8
// 00418dbf: PUSH EAX
// 00418dc0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00418dc5: ADD ESP,0x4
// 00418dc8: MOV EAX,EBX
// 00418dca: POP EBX
// 00418dcb: RET
// 00418dcc: PUSH EAX
//   Label: LAB_00418dcc
// 00418dcd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00418dd2: ADD ESP,0x4
// 00418dd5: MOV EAX,EBX
// 00418dd7: POP EBX
// 00418dd8: RET
