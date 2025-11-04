// Name: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// Address: 005e7700
// Address Range: [[005e7700, 005e7808]]
// Convention: __cdecl
// Signature: CVampireBoss * core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700(CVampireBoss * this_ptr, uint d1, uint d2, uint d3, uint d4, uint d5, uint d6, uint d7, uint d8, uint d9, uint d10, uint d11, uint d12, uint d13)
// Globals:
//   WatcomTypeInfo g_CVampireBossTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   core_backgnd.cpp_cleanupVector_FUN_004126e0
//   core_backgnd.cpp_freeFires_FUN_00412700
//   core_backgnd.cpp_freeFlames_FUN_00412720
//   core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   core_cloth.cpp_FUN_0043bf80
//   core_morph.cpp_CMorphModel_FUN_0052b330
//   core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CVampireBoss * __cdecl
core_vampboss_cpp_CVampireBoss_dtor_FUN_005e7700
          (CVampireBoss *this_ptr,uint d1,uint d2,uint d3,uint d4,uint d5,uint d6,uint d7,uint d8,
          uint d9,uint d10,uint d11,uint d12,uint d13)

{
  int iVar1;
  CDeformableModelInstance *pCVar2;
  CVampireBoss *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CVampireBossTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  core_morph_cpp_CMorphModel_FUN_0052b330((CMorphModel *)this_ptr->field3_0xcdcc4);
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  iVar1 = core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x22b4),0,d2,d3,d4);
  iVar1 = core_backgnd_cpp_freeFlames_FUN_00412720((CFlame **)(pCVar2[-5].field18_0x2260 + 0x34));
  iVar1 = core_backgnd_cpp_freeFires_FUN_00412700((SFire **)(iVar1 + -0x4b0));
  iVar1 = core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0x20c));
  core_backgnd_cpp_cleanupVector_FUN_004126e0((CVector3f **)(iVar1 + -0xb4));
  iVar1 = core_cloth_cpp_FUN_0043bf80();
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0059de40
                     ((CDeformableModelInstance *)(iVar1 + -0x293c),0,d8,d9,d10);
  ptr = (CVampireBoss *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)(pCVar2[-1].part_visibility_flags + 7),1);
  if ((d13 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 005e7700: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700
// 005e7701: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e7705: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005e770a: JNZ 0x005e77e1
//   XREF to: 005e77e1 (CONDITIONAL_JUMP)
// 005e7710: PUSH 0x0
// 005e7712: ADD EBX,0xcdcc4
// 005e7718: PUSH EBX
// 005e7719: CALL core_morph.cpp_CMorphModel_FUN_0052b330
//   XREF to: 0052b330 (UNCONDITIONAL_CALL)
// 005e771e: ADD ESP,0x8
// 005e7721: PUSH 0x0
// 005e7723: SUB EAX,0x3fe74
// 005e7728: PUSH EAX
// 005e7729: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 005e772e: ADD ESP,0x8
// 005e7731: PUSH 0x0
// 005e7733: SUB EAX,0x3fe70
// 005e7738: PUSH EAX
// 005e7739: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 005e773e: ADD ESP,0x8
// 005e7741: PUSH 0x0
// 005e7743: SUB EAX,0x3fe70
// 005e7748: PUSH EAX
// 005e7749: CALL core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
//   XREF to: 00438c00 (UNCONDITIONAL_CALL)
// 005e774e: ADD ESP,0x8
// 005e7751: PUSH 0x0
// 005e7753: SUB EAX,0x22b4
// 005e7758: PUSH EAX
// 005e7759: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005e775e: ADD ESP,0x8
// 005e7761: PUSH 0x0
// 005e7763: SUB EAX,0x8af0
// 005e7768: PUSH EAX
// 005e7769: CALL core_backgnd.cpp_freeFlames_FUN_00412720
//   XREF to: 00412720 (UNCONDITIONAL_CALL)
// 005e776e: ADD ESP,0x8
// 005e7771: PUSH 0x0
// 005e7773: SUB EAX,0x4b0
// 005e7778: PUSH EAX
// 005e7779: CALL core_backgnd.cpp_freeFires_FUN_00412700
//   XREF to: 00412700 (UNCONDITIONAL_CALL)
// 005e777e: ADD ESP,0x8
// 005e7781: PUSH 0x0
// 005e7783: SUB EAX,0x20c
// 005e7788: PUSH EAX
// 005e7789: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005e778e: ADD ESP,0x8
// 005e7791: PUSH 0x0
// 005e7793: SUB EAX,0xb4
// 005e7798: PUSH EAX
// 005e7799: CALL core_backgnd.cpp_cleanupVector_FUN_004126e0
//   XREF to: 004126e0 (UNCONDITIONAL_CALL)
// 005e779e: ADD ESP,0x8
// 005e77a1: PUSH 0x0
// 005e77a3: SUB EAX,0x1c8
// 005e77a8: PUSH EAX
// 005e77a9: CALL core_cloth.cpp_FUN_0043bf80
//   XREF to: 0043bf80 (UNCONDITIONAL_CALL)
// 005e77ae: ADD ESP,0x8
// 005e77b1: PUSH 0x0
// 005e77b3: SUB EAX,0x293c
// 005e77b8: PUSH EAX
// 005e77b9: CALL core_skeleton.cpp_CDeformableModelInstance_dtor_FUN_0059de40
//   XREF to: 0059de40 (UNCONDITIONAL_CALL)
// 005e77be: ADD ESP,0x8
// 005e77c1: LEA EBX,[EAX + 0xfffffea8]
// 005e77c7: PUSH 0x1
// 005e77c9: PUSH EBX
// 005e77ca: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005e77cf: ADD ESP,0x8
// 005e77d2: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e77d6: MOV EBX,EAX
// 005e77d8: TEST DL,0x2
// 005e77db: JNZ 0x005e77fc
//   XREF to: 005e77fc (CONDITIONAL_JUMP)
// 005e77dd: MOV EAX,EBX
// 005e77df: POP EBX
// 005e77e0: RET
// 005e77e1: PUSH 0x665000
//   Label: LAB_005e77e1
//   XREF to: 00665000 (DATA)
// 005e77e6: PUSH EBX
// 005e77e7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005e77ec: ADD ESP,0x8
// 005e77ef: PUSH EAX
// 005e77f0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005e77f5: ADD ESP,0x4
// 005e77f8: MOV EAX,EBX
// 005e77fa: POP EBX
// 005e77fb: RET
// 005e77fc: PUSH EAX
//   Label: LAB_005e77fc
// 005e77fd: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005e7802: ADD ESP,0x4
// 005e7805: MOV EAX,EBX
// 005e7807: POP EBX
// 005e7808: RET
