// Name: core_cloth.cpp_FUN_00438ba0
// Address: 00438ba0
// Address Range: [[00438ba0, 00438bf7]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_00438ba0()
// Cross-references:
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0 (0043bfa0) at 0043bffa [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be204 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_constructorMaybe_FUN_004d2b20 (004d2b20) at 004d2b36 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051f1d0 (0051f1d0) at 0051f1e5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_ctor_FUN_005d8850 (005d8850) at 005d8864 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_ctor_FUN_005e5590 (005e5590) at 005e55c0 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SClothVertexTypeInfo
//   WatcomTypeInfo g_SClothBoneTypeInfo
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

int core_cloth_cpp_FUN_00438ba0(void)

{
  CKeyFramedModel *pCVar1;
  void *pvVar2;
  CKeyFramedModel *in_stack_00000004;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(in_stack_00000004);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (pCVar1 + 1,800,&g_SClothVertexTypeInfo);
  pvVar2 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     ((void *)((int)pvVar2 + 0x377b8),0x32,&g_SClothBoneTypeInfo);
  *(undefined4 *)((int)pvVar2 + 0x2fac) = 0;
  *(undefined4 *)((int)pvVar2 + -4) = 0;
  *(undefined4 *)((int)pvVar2 + -0xc) = 0;
  return (int)pvVar2 + -0x3ce90;
}


// Assembly code:
// 00438ba0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_cloth.cpp_FUN_00438ba0
//   XREF to: Stack[0x4] (READ)
// 00438ba4: PUSH EAX
// 00438ba5: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00438baa: ADD ESP,0x4
// 00438bad: PUSH 0x65bb80
//   XREF to: 0065bb80 (DATA)
// 00438bb2: PUSH 0x320
// 00438bb7: ADD EAX,0x56d8
// 00438bbc: PUSH EAX
// 00438bbd: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00438bc2: ADD ESP,0xc
// 00438bc5: PUSH 0x65bba0
//   XREF to: 0065bba0 (DATA)
// 00438bca: PUSH 0x32
// 00438bcc: ADD EAX,0x377b8
// 00438bd1: PUSH EAX
// 00438bd2: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 00438bd7: MOV dword ptr [EAX + 0x2fac],0x0
// 00438be1: MOV dword ptr [EAX + -0x4],0x0
// 00438be8: ADD ESP,0xc
// 00438beb: MOV dword ptr [EAX + -0xc],0x0
// 00438bf2: SUB EAX,0x3ce90
// 00438bf7: RET
