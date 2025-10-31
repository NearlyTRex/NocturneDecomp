// Name: core_gabriela.cpp_constructorMaybe_FUN_004d2b20
// Address: 004d2b20
// Address Range: [[004d2b20, 004d2c37]]
// Convention: __cdecl
// Signature: CGabriella * core_gabriela.cpp_constructorMaybe_FUN_004d2b20(CGabriella * this_ptr)
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ae0 (004d2ae0) at 004d2afd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gabriela_dfm_0062acca
//   TerminatedCString s_gabgun_kfm_0062acd7
//   undefined4 DAT_0065e7ec
//   CDemonActor_vtable PTR_core_gabriela.cpp_FUN_0065e804
// Function calls:
//   core_cloth.cpp_FUN_00438ba0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CGabriella * __cdecl core_gabriela_cpp_constructorMaybe_FUN_004d2b20(CGabriella *this_ptr)

{
  undefined4 uVar1;
  int iVar2;
  
  core_hero_cpp_FUN_004f2340();
  iVar2 = core_cloth_cpp_FUN_00438ba0();
  *(CDemonActor_vtable **)(iVar2 + -0x1fac0) = &PTR_core_gabriela_cpp_FUN_0065e804;
  *(undefined4 *)(iVar2 + -0x40) = 0;
  *(undefined4 *)(iVar2 + -0x3c) = 0;
  *(undefined4 *)(iVar2 + -0x38) = 0;
  *(undefined4 *)(iVar2 + -0x34) = 0;
  *(undefined4 *)(iVar2 + -0x1c) = 0;
  *(undefined4 *)(iVar2 + -0x30) = 0;
  *(undefined4 *)(iVar2 + -0x2c) = 0xbf060a92;
  *(undefined4 *)(iVar2 + -8) = 0;
  *(undefined4 *)(iVar2 + -0x10) = 0;
  *(undefined4 *)(iVar2 + -0x18) = 0;
  *(undefined4 *)(iVar2 + -4) = 0;
  uVar1 = _DAT_0065e7ec;
  *(undefined4 *)(iVar2 + -0x28) = 0;
  *(undefined4 *)(iVar2 + 0x3fe70) = uVar1;
  *(undefined4 *)(iVar2 + -0x24) = 0;
  *(undefined4 *)(iVar2 + -0x20) = 0;
  *(undefined4 *)(iVar2 + -0xc) = *(undefined4 *)(iVar2 + -0x10);
  *(undefined4 *)(iVar2 + -0x14) = *(undefined4 *)(iVar2 + -0x18);
  core_skeleton_cpp_FUN_005a0840();
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(*(int *)(iVar2 + -0x1ac) + 0x158),"gabgun.kfm");
  return (CGabriella *)(iVar2 + -0x1fc14);
}


// Assembly code:
// 004d2b20: PUSH EBX
//   Label: core_gabriela.cpp_constructorMaybe_FUN_004d2b20
// 004d2b21: PUSH EBP
// 004d2b22: MOV EBP,ESP
// 004d2b24: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d2b27: PUSH EBX
// 004d2b28: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 004d2b2d: ADD ESP,0x4
// 004d2b30: ADD EAX,0x1fc14
// 004d2b35: PUSH EAX
// 004d2b36: CALL core_cloth.cpp_FUN_00438ba0
//   XREF to: 00438ba0 (UNCONDITIONAL_CALL)
// 004d2b3b: LEA EBX,[EAX + 0xfffe03ec]
// 004d2b41: MOV dword ptr [EBX + 0x154],0x65e804
//   XREF to: 0065e804 (DATA)
// 004d2b4b: MOV dword ptr [EBX + 0x1fbd4],0x0
// 004d2b55: MOV dword ptr [EBX + 0x1fbd8],0x0
// 004d2b5f: MOV dword ptr [EBX + 0x1fbdc],0x0
// 004d2b69: MOV dword ptr [EBX + 0x1fbe0],0x0
// 004d2b73: MOV dword ptr [EBX + 0x1fbf8],0x0
// 004d2b7d: MOV dword ptr [EBX + 0x1fbe4],0x0
// 004d2b87: MOV dword ptr [EBX + 0x1fbe8],0xbf060a92
// 004d2b91: MOV dword ptr [EBX + 0x1fc0c],0x0
// 004d2b9b: MOV dword ptr [EBX + 0x1fc04],0x0
// 004d2ba5: MOV dword ptr [EBX + 0x1fbfc],0x0
// 004d2baf: MOV dword ptr [EBX + 0x1fc10],0x0
// 004d2bb9: FLD float ptr [0x0065e7ec]
//   XREF to: 0065e7ec (READ)
// 004d2bbf: MOV dword ptr [EBX + 0x1fbec],0x0
// 004d2bc9: ADD ESP,0x4
// 004d2bcc: FSTP float ptr [EBX + 0x5fa84]
// 004d2bd2: MOV dword ptr [EBX + 0x1fbf0],0x0
// 004d2bdc: PUSH 0x62acca
//   XREF to: 0062acca (DATA)
// 004d2be1: MOV dword ptr [EBX + 0x1fbf4],0x0
// 004d2beb: LEA EAX,[EBX + 0x158]
// 004d2bf1: FLD float ptr [EBX + 0x1fc04]
// 004d2bf7: FLD float ptr [EBX + 0x1fbfc]
// 004d2bfd: PUSH EAX
// 004d2bfe: FXCH
// 004d2c00: FSTP float ptr [EBX + 0x1fc08]
// 004d2c06: FSTP float ptr [EBX + 0x1fc00]
// 004d2c0c: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004d2c11: LEA EAX,[EBX + 0x1f738]
// 004d2c17: ADD ESP,0x8
// 004d2c1a: MOV EAX,dword ptr [EAX + 0x330]
// 004d2c20: PUSH 0x62acd7
//   XREF to: 0062acd7 (DATA)
// 004d2c25: ADD EAX,0x158
// 004d2c2a: PUSH EAX
// 004d2c2b: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004d2c30: ADD ESP,0x8
// 004d2c33: MOV EAX,EBX
// 004d2c35: POP EBP
// 004d2c36: POP EBX
// 004d2c37: RET
