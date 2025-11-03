// Name: core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220
// Address: 005f2220
// Address Range: [[005f2220, 005f22d8]]
// Convention: __cdecl
// Signature: CWerewolf * core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220(CWerewolf * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8)
// Globals:
//   WatcomTypeInfo g_CWerewolfTypeInfo
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

CWerewolf * __cdecl
core_werewolf_cpp_CWerewolf_dtor_FUN_005f2220
          (CWerewolf *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CWerewolf *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWerewolfTypeInfo);
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
  ptr = (CWerewolf *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d8 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005f2220: PUSH EBX
//   Label: core_werewolf.cpp_CWerewolf_dtor_FUN_005f2220
// 005f2221: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005f2225: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005f222a: JNZ 0x005f22b1
//   XREF to: 005f22b1 (CONDITIONAL_JUMP)
// 005f2230: PUSH 0x0
// 005f2232: ADD EBX,0x33cc
// 005f2238: PUSH EBX
// 005f2239: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005f223e: ADD ESP,0x8
// 005f2241: PUSH 0x0
// 005f2243: SUB EAX,0x4b0
// 005f2248: PUSH EAX
// 005f2249: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005f224e: ADD ESP,0x8
// 005f2251: PUSH 0x0
// 005f2253: SUB EAX,0x20c
// 005f2258: PUSH EAX
// 005f2259: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005f225e: ADD ESP,0x8
// 005f2261: PUSH 0x0
// 005f2263: SUB EAX,0xb4
// 005f2268: PUSH EAX
// 005f2269: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005f226e: ADD ESP,0x8
// 005f2271: PUSH 0x0
// 005f2273: SUB EAX,0x1c8
// 005f2278: PUSH EAX
// 005f2279: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005f227e: ADD ESP,0x8
// 005f2281: PUSH 0x0
// 005f2283: SUB EAX,0x293c
// 005f2288: PUSH EAX
// 005f2289: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005f228e: ADD ESP,0x8
// 005f2291: PUSH 0x1
// 005f2293: LEA EBX,[EAX + 0xfffffea8]
// 005f2299: PUSH EBX
// 005f229a: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005f229f: ADD ESP,0x8
// 005f22a2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005f22a6: MOV EBX,EAX
// 005f22a8: TEST DL,0x2
// 005f22ab: JNZ 0x005f22cc
//   XREF to: 005f22cc (CONDITIONAL_JUMP)
// 005f22ad: MOV EAX,EBX
// 005f22af: POP EBX
// 005f22b0: RET
// 005f22b1: PUSH 0x6658f0
//   Label: LAB_005f22b1
//   XREF to: 006658f0 (DATA)
// 005f22b6: PUSH EBX
// 005f22b7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005f22bc: ADD ESP,0x8
// 005f22bf: PUSH EAX
// 005f22c0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005f22c5: ADD ESP,0x4
// 005f22c8: MOV EAX,EBX
// 005f22ca: POP EBX
// 005f22cb: RET
// 005f22cc: PUSH EAX
//   Label: LAB_005f22cc
// 005f22cd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005f22d2: ADD ESP,0x4
// 005f22d5: MOV EAX,EBX
// 005f22d7: POP EBX
// 005f22d8: RET
