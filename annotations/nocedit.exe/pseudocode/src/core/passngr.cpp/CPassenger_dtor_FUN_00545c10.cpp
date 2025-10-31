// Name: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// Address: 00545c10
// Address Range: [[00545c10, 00545d2c]]
// Convention: __cdecl
// Signature: CPassenger * core_passngr.cpp_CPassenger_dtor_FUN_00545c10(CPassenger * this_ptr, uint d1)
// Globals:
//   TerminatedCString s_core_passngr_cpp_0063e7b0
//   CDemonActor_vtable PTR_core_passngr.cpp_FUN_00545d30_00661f64
//   WatcomTypeInfo g_CPassengerTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_FUN_0043bf80
//   core_morph.cpp_FUN_0052b330
//   core_path.cpp_CPathMap_dtor_FUN_005464d0
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CPassenger * __cdecl core_passngr_cpp_CPassenger_dtor_FUN_00545c10(CPassenger *this_ptr,uint d1)

{
  int iVar1;
  CPathMap *pCVar2;
  CDeformableModelInstance *pCVar3;
  CPassenger *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_ESI;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CPassengerTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = *(int *)(this_ptr->field1_0x1f708 + 0x108);
  (this_ptr->base_npc).base_character.base_actor.metadata.vtable =
       &PTR_core_passngr_cpp_FUN_00545d30_00661f64;
  if (iVar1 != 0) {
    g_CurrentDebugLine = 0x50;
    g_CurrentDebugFilename = "..\\core\\passngr.cpp";
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))();
    }
  }
  iVar1 = core_morph_cpp_FUN_0052b330();
  pCVar2 = core_path_cpp_CPathMap_dtor_FUN_005464d0((CPathMap *)(iVar1 + -0x139f0));
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720
                    ((CFlame **)(pCVar2[-1].height_cache_tags[0xb] + 0x39));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,unaff_ESI,unaff_EBX,
                      unaff_retaddr);
  ptr = (CPassenger *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar3[-1].padding_0x0 + 0x215c),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 00545c10: PUSH EBX
//   Label: core_passngr.cpp_CPassenger_dtor_FUN_00545c10
// 00545c11: PUSH ESI
// 00545c12: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00545c16: TEST byte ptr [ESP + 0x10],0x4
//   XREF to: Stack[0x8] (READ)
// 00545c1b: JNZ 0x00545d03
//   XREF to: 00545d03 (CONDITIONAL_JUMP)
// 00545c21: MOV EDX,dword ptr [EBX + 0x1f810]
// 00545c27: MOV dword ptr [EBX + 0x154],0x661f64
//   XREF to: 00661f64 (DATA)
// 00545c31: TEST EDX,EDX
// 00545c33: JZ 0x00545c61
//   XREF to: 00545c61 (CONDITIONAL_JUMP)
// 00545c35: MOV ESI,0x50
// 00545c3a: MOV ECX,0x63e7b0
//   XREF to: 0063e7b0 (PARAM)
// 00545c3f: MOV EAX,EDX
// 00545c41: MOV dword ptr [0x02f0d944],ESI
//   XREF to: 02f0d944 (WRITE)
// 00545c47: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 00545c4d: JZ 0x00545c61
//   XREF to: 00545c61 (CONDITIONAL_JUMP)
// 00545c4f: PUSH 0x2
// 00545c51: MOV EDX,dword ptr [EDX + 0x154]
// 00545c57: PUSH EAX
// 00545c58: CALL dword ptr [EDX + 0xe4]
// 00545c5e: ADD ESP,0x8
// 00545c61: PUSH 0x0
//   Label: LAB_00545c61
// 00545c63: ADD EBX,0x1f814
// 00545c69: PUSH EBX
// 00545c6a: CALL core_morph.cpp_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 00545c6f: ADD ESP,0x8
// 00545c72: PUSH 0x0
// 00545c74: SUB EAX,0x139f0
// 00545c79: PUSH EAX
// 00545c7a: CALL core_path.cpp_CPathMap_dtor_FUN_005464d0
//   XREF to: 005464d0 (UNCONDITIONAL_CALL)
// 00545c7f: ADD ESP,0x8
// 00545c82: PUSH 0x0
// 00545c84: SUB EAX,0x8a58
// 00545c89: PUSH EAX
// 00545c8a: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 00545c8f: ADD ESP,0x8
// 00545c92: PUSH 0x0
// 00545c94: SUB EAX,0x4b0
// 00545c99: PUSH EAX
// 00545c9a: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 00545c9f: ADD ESP,0x8
// 00545ca2: PUSH 0x0
// 00545ca4: SUB EAX,0x20c
// 00545ca9: PUSH EAX
// 00545caa: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00545caf: ADD ESP,0x8
// 00545cb2: PUSH 0x0
// 00545cb4: SUB EAX,0xb4
// 00545cb9: PUSH EAX
// 00545cba: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 00545cbf: ADD ESP,0x8
// 00545cc2: PUSH 0x0
// 00545cc4: SUB EAX,0x1c8
// 00545cc9: PUSH EAX
// 00545cca: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 00545ccf: ADD ESP,0x8
// 00545cd2: PUSH 0x0
// 00545cd4: SUB EAX,0x293c
// 00545cd9: PUSH EAX
// 00545cda: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 00545cdf: ADD ESP,0x8
// 00545ce2: PUSH 0x1
// 00545ce4: LEA EBX,[EAX + 0xfffffea8]
// 00545cea: PUSH EBX
// 00545ceb: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 00545cf0: ADD ESP,0x8
// 00545cf3: MOV DL,byte ptr [ESP + 0x10]
// 00545cf7: MOV EBX,EAX
// 00545cf9: TEST DL,0x2
// 00545cfc: JNZ 0x00545d1f
//   XREF to: 00545d1f (CONDITIONAL_JUMP)
// 00545cfe: MOV EAX,EBX
// 00545d00: POP ESI
// 00545d01: POP EBX
// 00545d02: RET
// 00545d03: PUSH 0x6620c0
//   Label: LAB_00545d03
//   XREF to: 006620c0 (DATA)
// 00545d08: PUSH EBX
// 00545d09: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00545d0e: ADD ESP,0x8
// 00545d11: PUSH EAX
// 00545d12: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00545d17: ADD ESP,0x4
// 00545d1a: MOV EAX,EBX
// 00545d1c: POP ESI
// 00545d1d: POP EBX
// 00545d1e: RET
// 00545d1f: PUSH EAX
//   Label: LAB_00545d1f
// 00545d20: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00545d25: ADD ESP,0x4
// 00545d28: MOV EAX,EBX
// 00545d2a: POP ESI
// 00545d2b: POP EBX
// 00545d2c: RET
