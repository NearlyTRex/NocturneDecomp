// Name: core_hiram.cpp_FUN_004f4450
// Address: 004f4450
// Address Range: [[004f4450, 004f4522]]
// Convention: __cdecl
// Signature: CHiram * core_hiram.cpp_FUN_004f4450(CHiram * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9)
// Globals:
//   CDemonActor_vtable PTR_core_hiram.cpp_FUN_004f4530_0065f974
//   WatcomTypeInfo g_CHiramTypeInfo
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

CHiram * __cdecl
core_hiram_cpp_FUN_004f4450
          (CHiram *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,uint d9)

{
  CPathMap *pCVar1;
  int iVar2;
  CDeformableModelInstance *pCVar3;
  CHiram *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CHiramTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_actor).base_character.base_actor.metadata.vtable =
       &PTR_core_hiram_cpp_FUN_004f4530_0065f974;
  pCVar1 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)&(this_ptr->base_actor).model_name);
  iVar2 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar1[-1].height_cache_tags[0xb] + 0x39));
  iVar2 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar2 + -0x4b0));
  iVar2 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar2 + -0xb4));
  iVar2 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar2 + -0x293c),0,d4,d5,d6);
  ptr = (CHiram *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d9 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004f4450: PUSH EBX
//   Label: core_hiram.cpp_FUN_004f4450
// 004f4451: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f4455: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004f445a: JNZ 0x004f44fb
//   XREF to: 004f44fb (CONDITIONAL_JUMP)
// 004f4460: PUSH 0x0
// 004f4462: ADD EBX,0xbe24
// 004f4468: PUSH EBX
// 004f4469: MOV dword ptr [EBX + 0xffff4330],0x65f974
//   XREF to: 0065f974 (DATA)
// 004f4473: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 004f4478: ADD ESP,0x8
// 004f447b: PUSH 0x0
// 004f447d: SUB EAX,0x8a58
// 004f4482: PUSH EAX
// 004f4483: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 004f4488: ADD ESP,0x8
// 004f448b: PUSH 0x0
// 004f448d: SUB EAX,0x4b0
// 004f4492: PUSH EAX
// 004f4493: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 004f4498: ADD ESP,0x8
// 004f449b: PUSH 0x0
// 004f449d: SUB EAX,0x20c
// 004f44a2: PUSH EAX
// 004f44a3: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f44a8: ADD ESP,0x8
// 004f44ab: PUSH 0x0
// 004f44ad: SUB EAX,0xb4
// 004f44b2: PUSH EAX
// 004f44b3: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 004f44b8: ADD ESP,0x8
// 004f44bb: PUSH 0x0
// 004f44bd: SUB EAX,0x1c8
// 004f44c2: PUSH EAX
// 004f44c3: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 004f44c8: ADD ESP,0x8
// 004f44cb: PUSH 0x0
// 004f44cd: SUB EAX,0x293c
// 004f44d2: PUSH EAX
// 004f44d3: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 004f44d8: ADD ESP,0x8
// 004f44db: PUSH 0x1
// 004f44dd: LEA EBX,[EAX + 0xfffffea8]
// 004f44e3: PUSH EBX
// 004f44e4: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004f44e9: ADD ESP,0x8
// 004f44ec: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f44f0: MOV EBX,EAX
// 004f44f2: TEST DL,0x2
// 004f44f5: JNZ 0x004f4516
//   XREF to: 004f4516 (CONDITIONAL_JUMP)
// 004f44f7: MOV EAX,EBX
// 004f44f9: POP EBX
// 004f44fa: RET
// 004f44fb: PUSH 0x65fad0
//   Label: LAB_004f44fb
//   XREF to: 0065fad0 (DATA)
// 004f4500: PUSH EBX
// 004f4501: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004f4506: ADD ESP,0x8
// 004f4509: PUSH EAX
// 004f450a: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004f450f: ADD ESP,0x4
// 004f4512: MOV EAX,EBX
// 004f4514: POP EBX
// 004f4515: RET
// 004f4516: PUSH EAX
//   Label: LAB_004f4516
// 004f4517: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004f451c: ADD ESP,0x4
// 004f451f: MOV EAX,EBX
// 004f4521: POP EBX
// 004f4522: RET
