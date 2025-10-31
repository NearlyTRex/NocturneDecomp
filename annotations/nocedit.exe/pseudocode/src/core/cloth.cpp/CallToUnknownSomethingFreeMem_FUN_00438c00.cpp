// Name: core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
// Address: 00438c00
// Address Range: [[00438c00, 00438c41]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00()
// Cross-references:
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0 (0043bfa0) at 0043c059 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_CClothList_remove_FUN_0043c170 (0043c170) at 0043c1d7 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043c070 (0043c070) at 0043c0a4 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be214 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_freeMaybe_FUN_004d7660 (004d7660) at 004d7675 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f2c0 (0051f2c0) at 0051f32f [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_dtor_FUN_005d9f50 (005d9f50) at 005d9f65 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_dtor_FUN_005e7700 (005e7700) at 005e7729 [UNCONDITIONAL_CALL]
// Function calls:
//   core_cloth.cpp_freeClothBones_FUN_0043e4a0
//   core_cloth.cpp_freeClothVertices_FUN_0043e480
//   core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
//   core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90

#include "nocturne.h"

void core_cloth_cpp_CallToUnknownSomethingFreeMem_FUN_00438c00(void)

{
  int extraout_EAX;
  int iVar1;
  int in_stack_00000004;
  
  core_cloth_cpp_UnknownSomethingAndFreeMem_FUN_00438cb0();
  core_cloth_cpp_freeClothBones_FUN_0043e4a0((SClothBone **)(in_stack_00000004 + 0x3ce90));
  iVar1 = core_cloth_cpp_freeClothVertices_FUN_0043e480((SClothVertex **)(extraout_EAX + -0x377b8));
  core_dmodel_cpp_CKeyFramedModel_dtor_FUN_00476d90((CKeyFramedModel *)(iVar1 + -0x56d8));
  return;
}


// Assembly code:
// 00438c00: PUSH EBX
//   Label: core_cloth.cpp_CallToUnknownSomethingFreeMem_FUN_00438c00
// 00438c01: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00438c05: PUSH EBX
// 00438c06: CALL core_cloth.cpp_UnknownSomethingAndFreeMem_FUN_00438cb0
//   XREF to: 00438cb0 (UNCONDITIONAL_CALL)
// 00438c0b: ADD ESP,0x4
// 00438c0e: PUSH 0x0
// 00438c10: ADD EBX,0x3ce90
// 00438c16: PUSH EBX
// 00438c17: CALL core_cloth.cpp_freeClothBones_FUN_0043e4a0
//   XREF to: 0043e4a0 (UNCONDITIONAL_CALL)
// 00438c1c: ADD ESP,0x8
// 00438c1f: PUSH 0x0
// 00438c21: SUB EAX,0x377b8
// 00438c26: PUSH EAX
// 00438c27: CALL core_cloth.cpp_freeClothVertices_FUN_0043e480
//   XREF to: 0043e480 (UNCONDITIONAL_CALL)
// 00438c2c: ADD ESP,0x8
// 00438c2f: PUSH 0x1
// 00438c31: LEA EBX,[EAX + 0xffffa928]
// 00438c37: PUSH EBX
// 00438c38: CALL core_dmodel.cpp_CKeyFramedModel_dtor_FUN_00476d90
//   XREF to: 00476d90 (UNCONDITIONAL_CALL)
// 00438c3d: ADD ESP,0x8
// 00438c40: POP EBX
// 00438c41: RET
