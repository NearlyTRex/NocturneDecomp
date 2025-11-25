// Name: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// Address: 005e3ef0
// Address Range: [[005e3ef0, 005e3f41]]
// Convention: __cdecl
// Signature: CTVBat * core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat * this_ptr)
// Cross-references:
//   core_tvbat.cpp_FUN_005e3e80 (005e3e80) at 005e3e9a [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable g_CTVBatVTable
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_enemy.cpp_CEnemy_ctor_FUN_004a9500

#include "nocturne.h"

CTVBat * __cdecl core_tvbat_cpp_CTVBat_ctor_FUN_005e3ef0(CTVBat *this_ptr)

{
  CEnemy *pCVar1;
  CKeyFramedModelInstance *this_ptr_00;
  float fVar2;
  float fStack0000000c;
  float fStack00000010;
  
  pCVar1 = core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base_enemy);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)
                           (pCVar1[1].base_character.base_actor.actor_name + 0xc));
  *(CDemonActor_vtable **)(this_ptr_00[-0x80].model_name + 0x1c) = &g_CTVBatVTable;
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)0x0;
  this_ptr_00[1].part_visibility_flags[1] = 0;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[0] = (int)fVar2;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr_00,"bat.kfm");
  this_ptr_00[1].part_visibility_flags[6] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[5] = 0x41700000;
  fStack0000000c = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  this_ptr_00[1].part_visibility_flags[8] = (int)(fStack0000000c * DAT_006568a6);
  fStack00000010 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.9,1.1);
  fStack0000000c = fStack00000010 * DAT_006568aa;
  this_ptr_00[1].part_visibility_flags[7] = (int)fStack0000000c;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  this_ptr_00[1].part_visibility_flags[10] = 0;
  this_ptr_00[1].part_visibility_flags[0xb] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0;
  this_ptr_00[-0x67].part_visibility_flags[0x12] = 0;
  this_ptr_00[1].model_name[0x3c] = '\0';
  this_ptr_00[1].model_name[0x3d] = '\0';
  this_ptr_00[1].model_name[0x3e] = '\0';
  this_ptr_00[1].model_name[0x3f] = '\0';
  *(undefined1 *)(this_ptr_00[1].part_visibility_flags + 0x10) = 0;
  this_ptr_00[1].model_name[0x2c] = '\0';
  this_ptr_00[1].model_name[0x2d] = '\0';
  this_ptr_00[1].model_name[0x2e] = 'p';
  this_ptr_00[1].model_name[0x2f] = 'A';
  this_ptr_00[1].model_name[0x30] = '\0';
  this_ptr_00[1].model_name[0x31] = '\0';
  this_ptr_00[1].model_name[0x32] = -0x10;
  this_ptr_00[1].model_name[0x33] = 'A';
  this_ptr_00[1].model_name[0x38] = '\0';
  this_ptr_00[1].model_name[0x39] = '\0';
  this_ptr_00[1].model_name[0x3a] = '\0';
  this_ptr_00[1].model_name[0x3b] = '\0';
  this_ptr_00[1].part_visibility_flags[9] = (int)fVar2;
  return (CTVBat *)(this_ptr_00[-0x81].model_name + 0x44);
}


// Assembly code:
// 005e3ef0: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_ctor_FUN_005e3ef0
// 005e3ef1: SUB ESP,0x8
// 005e3ef4: MOV EBX,dword ptr [ESP + 0x10]
// 005e3ef8: PUSH EBX
// 005e3ef9: CALL core_enemy.cpp_CEnemy_ctor_FUN_004a9500
//   XREF to: 004a9500 (UNCONDITIONAL_CALL)
// 005e3efe: ADD ESP,0x4
// 005e3f01: ADD EAX,0xbec0
// 005e3f06: PUSH EAX
// 005e3f07: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005e3f0c: LEA EBX,[EAX + 0xffff4140]
// 005e3f12: ADD ESP,0x4
// 005e3f15: MOV dword ptr [EBX + 0x154],0x664cd4
//   XREF to: 00664cd4 (DATA)
// 005e3f1f: PUSH 0x3f8ccccd
// 005e3f24: MOV dword ptr [EBX + 0xbebc],0x0
// 005e3f2e: PUSH 0x3f666666
// 005e3f33: MOV dword ptr [EBX + 0xc040],0x0
// 005e3f3d: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
