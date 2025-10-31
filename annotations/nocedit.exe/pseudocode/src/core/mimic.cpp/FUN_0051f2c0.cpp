// Name: core_mimic.cpp_FUN_0051f2c0
// Address: 0051f2c0
// Address Range: [[0051f2c0, 0051f3de]]
// Convention: __cdecl
// Signature: CMimic * core_mimic.cpp_FUN_0051f2c0(CMimic * this_ptr, uint d1)
// Globals:
//   TerminatedCString s_core_mimic_cpp_0063855b
//   CDemonActor_vtable PTR_core_mimic.cpp_CMimic_setup_FUN_0051f3e0_00661424
//   WatcomTypeInfo g_CMimicTypeInfo
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_cloth.cpp_FUN_0043bf80
//   core_morph.cpp_FUN_0052b330
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CMimic * __cdecl core_mimic_cpp_FUN_0051f2c0(CMimic *this_ptr,uint d1)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CMimic *ptr;
  void *ptr_00;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CMimicTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  iVar1 = *(int *)(this_ptr->field3_0x4bdf8 + 0xc5c);
  (this_ptr->field0_0x0).base_character.base_actor.metadata.vtable =
       &PTR_core_mimic_cpp_CMimic_setup_FUN_0051f3e0_00661424;
  g_CurrentDebugFilename = "..\\core\\mimic.cpp";
  g_CurrentDebugLine = 0xa9;
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xe4))();
  }
  this_ptr->field3_0x4bdf8[0xc5c] = '\0';
  this_ptr->field3_0x4bdf8[0xc5d] = '\0';
  this_ptr->field3_0x4bdf8[0xc5e] = '\0';
  this_ptr->field3_0x4bdf8[0xc5f] = '\0';
  core_morph_cpp_FUN_0052b330();
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(iVar1 + -0x8bb8));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,unaff_EBX,unaff_retaddr,
                      (uint)this_ptr);
  ptr = (CMimic *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].padding_0x0 + 0x215c),1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0051f2c0: PUSH EBX
//   Label: core_mimic.cpp_FUN_0051f2c0
// 0051f2c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0051f2c5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0051f2ca: JNZ 0x0051f3b7
//   XREF to: 0051f3b7 (CONDITIONAL_JUMP)
// 0051f2d0: MOV EDX,0x63855b
//   XREF to: 0063855b (PARAM)
// 0051f2d5: MOV ECX,0xa9
// 0051f2da: MOV EAX,dword ptr [EBX + 0x4ca54]
// 0051f2e0: MOV dword ptr [EBX + 0x154],0x661424
//   XREF to: 00661424 (DATA)
// 0051f2ea: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0051f2f0: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 0051f2f6: TEST EAX,EAX
// 0051f2f8: JZ 0x0051f30c
//   XREF to: 0051f30c (CONDITIONAL_JUMP)
// 0051f2fa: PUSH 0x2
// 0051f2fc: MOV EDX,dword ptr [EAX + 0x154]
// 0051f302: PUSH EAX
// 0051f303: CALL dword ptr [EDX + 0xe4]
// 0051f309: ADD ESP,0x8
// 0051f30c: PUSH 0x0
//   Label: LAB_0051f30c
// 0051f30e: ADD EBX,0x4be24
// 0051f314: PUSH EBX
// 0051f315: MOV dword ptr [EBX + 0xc30],0x0
// 0051f31f: CALL core_morph.cpp_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 0051f324: ADD ESP,0x8
// 0051f327: PUSH 0x0
// 0051f329: SUB EAX,0x3fea0
// 0051f32e: PUSH EAX
// 0051f32f: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 0051f334: ADD ESP,0x8
// 0051f337: PUSH 0x0
// 0051f339: SUB EAX,0x8bb8
// 0051f33e: PUSH EAX
// 0051f33f: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 0051f344: ADD ESP,0x8
// 0051f347: PUSH 0x0
// 0051f349: SUB EAX,0x4b0
// 0051f34e: PUSH EAX
// 0051f34f: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 0051f354: ADD ESP,0x8
// 0051f357: PUSH 0x0
// 0051f359: SUB EAX,0x20c
// 0051f35e: PUSH EAX
// 0051f35f: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0051f364: ADD ESP,0x8
// 0051f367: PUSH 0x0
// 0051f369: SUB EAX,0xb4
// 0051f36e: PUSH EAX
// 0051f36f: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 0051f374: ADD ESP,0x8
// 0051f377: PUSH 0x0
// 0051f379: SUB EAX,0x1c8
// 0051f37e: PUSH EAX
// 0051f37f: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 0051f384: ADD ESP,0x8
// 0051f387: PUSH 0x0
// 0051f389: SUB EAX,0x293c
// 0051f38e: PUSH EAX
// 0051f38f: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 0051f394: ADD ESP,0x8
// 0051f397: PUSH 0x1
// 0051f399: LEA EBX,[EAX + 0xfffffea8]
// 0051f39f: PUSH EBX
// 0051f3a0: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 0051f3a5: ADD ESP,0x8
// 0051f3a8: MOV DL,byte ptr [ESP + 0xc]
// 0051f3ac: MOV EBX,EAX
// 0051f3ae: TEST DL,0x2
// 0051f3b1: JNZ 0x0051f3d2
//   XREF to: 0051f3d2 (CONDITIONAL_JUMP)
// 0051f3b3: MOV EAX,EBX
// 0051f3b5: POP EBX
// 0051f3b6: RET
// 0051f3b7: PUSH 0x661590
//   Label: LAB_0051f3b7
//   XREF to: 00661590 (DATA)
// 0051f3bc: PUSH EBX
// 0051f3bd: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0051f3c2: ADD ESP,0x8
// 0051f3c5: PUSH EAX
// 0051f3c6: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0051f3cb: ADD ESP,0x4
// 0051f3ce: MOV EAX,EBX
// 0051f3d0: POP EBX
// 0051f3d1: RET
// 0051f3d2: PUSH EAX
//   Label: LAB_0051f3d2
// 0051f3d3: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0051f3d8: ADD ESP,0x4
// 0051f3db: MOV EAX,EBX
// 0051f3dd: POP EBX
// 0051f3de: RET
