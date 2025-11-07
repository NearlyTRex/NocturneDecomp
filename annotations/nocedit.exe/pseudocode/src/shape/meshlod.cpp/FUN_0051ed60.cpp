// Name: shape_meshlod.cpp_FUN_0051ed60
// Address: 0051ed60
// Address Range: [[0051ed60, 0051edc7]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051ed60()
// Globals:
//   TerminatedCString s_hsw737_mdl_00638530
// Function calls:
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   shape_design.c_loadModelFile_FUN_00458ac0
//   shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
//   shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
//   shape_meshlod.cpp_CLodMesh_FUN_0051b080
//   shape_meshlod.cpp_FUN_0051d520
//   wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051ed60(void)

{
  BADSPACEBASE *in_ESP;
  int iStack_68;
  SLodVert *pSStack_64;
  
  wincore_wddvmem_cpp_setScreenResolution_FUN_005ecef0(0x280,0x1e0,0x20);
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840((CLodMesh *)&stack0xffffff90);
  shape_design_c_loadModelFile_FUN_00458ac0("hsw737.mdl");
  shape_meshlod_cpp_CLodMesh_FUN_0051b080((CLodMesh *)&iStack_68);
  iStack_68 = 0x51ed9f;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pSStack_64 = (SLodVert *)0x0;
  iStack_68 = 1;
  shape_meshlod_cpp_FUN_0051d520();
  engine_2d_c_clearInputAndWait_FUN_00403260();
  pSStack_64 = (SLodVert *)0x51edc1;
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950((CLodMesh *)&stack0xffffffa8);
  return;
}


// Assembly code:
// 0051ed60: SUB ESP,0x74
//   Label: shape_meshlod.cpp_FUN_0051ed60
// 0051ed63: PUSH 0x20
// 0051ed65: PUSH 0x1e0
// 0051ed6a: PUSH 0x280
// 0051ed6f: CALL wincore_wddvmem.cpp_setScreenResolution_FUN_005ecef0
//   XREF to: 005ecef0 (UNCONDITIONAL_CALL)
// 0051ed74: ADD ESP,0xc
// 0051ed77: MOV EAX,ESP
// 0051ed79: PUSH EAX
// 0051ed7a: CALL shape_meshlod.cpp_CLodMesh_ctor_FUN_00515840
//   XREF to: 00515840 (UNCONDITIONAL_CALL)
// 0051ed7f: ADD ESP,0x4
// 0051ed82: PUSH 0x638530
//   XREF to: 00638530 (DATA)
// 0051ed87: CALL shape_design.c_loadModelFile_FUN_00458ac0
//   XREF to: 00458ac0 (UNCONDITIONAL_CALL)
// 0051ed8c: ADD ESP,0x4
// 0051ed8f: MOV EAX,ESP
// 0051ed91: PUSH EAX
// 0051ed92: CALL shape_meshlod.cpp_CLodMesh_FUN_0051b080
//   XREF to: 0051b080 (UNCONDITIONAL_CALL)
// 0051ed97: ADD ESP,0x4
// 0051ed9a: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051ed9f: PUSH 0x0
// 0051eda1: PUSH 0x1
// 0051eda3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x74] (DATA)
// 0051eda7: PUSH EAX
// 0051eda8: CALL shape_meshlod.cpp_FUN_0051d520
//   XREF to: 0051d520 (UNCONDITIONAL_CALL)
// 0051edad: ADD ESP,0xc
// 0051edb0: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051edb5: PUSH 0x0
// 0051edb7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x74] (DATA)
// 0051edbb: PUSH EAX
// 0051edbc: CALL shape_meshlod.cpp_CLodMesh_dtor_FUN_00515950
//   XREF to: 00515950 (UNCONDITIONAL_CALL)
// 0051edc1: ADD ESP,0x8
// 0051edc4: ADD ESP,0x74
// 0051edc7: RET
