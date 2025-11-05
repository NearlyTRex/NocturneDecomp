// Name: core_stranger.cpp_CStranger_ctor_FUN_005bb120
// Address: 005bb120
// Address Range: [[005bb120, 005bb4ad]]
// Convention: __cdecl
// Signature: CStranger * core_stranger.cpp_CStranger_ctor_FUN_005bb120(CStranger * this_ptr)
// Cross-references:
//   core_stranger.cpp_FUN_005bb0e0 (005bb0e0) at 005bb0fd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_stranger_dfm_006531c9
//   TerminatedCString s_gat_kfm_006531d6
//   TerminatedCString s_draw_stand2holsters_006531de
//   TerminatedCString s_draw_holsters2aimPistols_006531f2
//   TerminatedCString s_draw_stand2coatPocket_0065320b
//   TerminatedCString s_draw_coatPocket2aimShotg_00653221
//   TerminatedCString s_draw_coatPocket2aimFlame_0065323c
//   TerminatedCString s_draw_holsters2CoatPocket_0065325c
//   TerminatedCString s_draw_stand2TossAim_00653275
//   TerminatedCString s_draw_tossAim2Stand_00653288
//   TerminatedCString s_draw_shotGunRecoil_0065329b
//   TerminatedCString s_draw_coatPocket2aimTommy_006532ae
//   TerminatedCString s_draw_tommyRecoil_006532c7
//   TerminatedCString s_draw_stand2spearhold_006532d8
//   TerminatedCString s_draw_spearStab_006532ed
//   TerminatedCString s_draw_spearOverheadswing_006532fc
//   TerminatedCString s_draw_holdCrate_00653314
//   TerminatedCString s_draw_coatPocket2GasMask_00653323
//   TerminatedCString s_draw_gasMask2Stand_0065333b
//   TerminatedCString s_strcoat_cth_0065334e
//   undefined4 DAT_00663744
//   CDemonActor_vtable g_CStrangerVTable
// Function calls:
//   core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   core_cloth.cpp_CClothList_add_FUN_0043c0f0
//   core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CStranger * __cdecl core_stranger_cpp_CStranger_ctor_FUN_005bb120(CStranger *this_ptr)

{
  CStranger *this_ptr_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  CKeyFramedModelInstance *pCVar5;
  char *pcStack00000038;
  char *pcStack0000003c;
  char *pcStack00000040;
  char *pcStack00000048;
  
  iVar4 = core_hero_cpp_FUN_004f2340();
  pCVar5 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(iVar4 + 0x1fcd8));
  this_ptr_00 = (CStranger *)(pCVar5[-0x157].part_visibility_flags + 0x13);
  pCVar5[-0x156].part_visibility_flags[9] = (int)&g_CStrangerVTable;
  pCVar5[-0xffffffff00000001].model_name[0] = '\0';
  pCVar5[-0xffffffff00000001].model_name[1] = '\0';
  pCVar5[-0xffffffff00000001].model_name[2] = '\0';
  pCVar5[-0xffffffff00000001].model_name[3] = '\0';
  pCVar5[-0xffffffff00000001].model_name[4] = '\0';
  pCVar5[-0xffffffff00000001].model_name[5] = '\0';
  pCVar5[-0xffffffff00000001].model_name[6] = '\0';
  pCVar5[-0xffffffff00000001].model_name[7] = '\0';
  pCVar5[-0xffffffff00000001].model_name[8] = '\0';
  pCVar5[-0xffffffff00000001].model_name[9] = '\0';
  pCVar5[-0xffffffff00000001].model_name[10] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xb] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0xc] = -0x6e;
  pCVar5[-0xffffffff00000001].model_name[0xd] = '\n';
  pCVar5[-0xffffffff00000001].model_name[0xe] = '\x06';
  pCVar5[-0xffffffff00000001].model_name[0xf] = -0x41;
  pCVar5[-0xffffffff00000001].model_name[0x2c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x24] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x25] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x26] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x27] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x1f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x14] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x15] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x16] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x17] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x28] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x29] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x2b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x30] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x31] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x32] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x33] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x44] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x45] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x46] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x47] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x3f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x34] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x35] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x36] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x37] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x48] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x49] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x4b] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x50] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x51] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x52] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x53] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x54] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x55] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x56] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x57] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x54] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x55] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x56] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x57] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5c] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5d] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5e] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5f] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[4] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[5] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[6] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[7] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[8] = '\0';
  uVar1 = DAT_00663744;
  pCVar5[-0xffffffff00000001].animation_state[9] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[10] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0xb] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0xc] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0xd] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0xe] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0xf] = '\0';
  *(undefined4 *)(pCVar5[-1].model_name + 0x10) = uVar1;
  pCVar5[-0xffffffff00000001].animation_state[0x78] = -0x36;
  pCVar5[-0xffffffff00000001].animation_state[0x79] = -0xe;
  pCVar5[-0xffffffff00000001].animation_state[0x7a] = 'I';
  pCVar5[-0xffffffff00000001].animation_state[0x7b] = -0xf;
  pCVar5[-0xffffffff00000001].animation_state[0x60] = -0x36;
  pCVar5[-0xffffffff00000001].animation_state[0x61] = -0xe;
  pCVar5[-0xffffffff00000001].animation_state[0x62] = 'I';
  pCVar5[-0xffffffff00000001].animation_state[99] = -0xf;
  uVar1 = *(undefined4 *)(pCVar5[-1].model_name + 0x14);
  uVar2 = *(undefined4 *)(pCVar5[-1].model_name + 0x3c);
  uVar3 = *(undefined4 *)(pCVar5[-1].model_name + 0x34);
  *(undefined4 *)(pCVar5[-1].model_name + 0x20) = *(undefined4 *)(pCVar5[-1].model_name + 0x1c);
  *(undefined4 *)(pCVar5[-1].model_name + 0x18) = uVar1;
  *(undefined4 *)(pCVar5[-1].model_name + 0x40) = uVar2;
  *(undefined4 *)(pCVar5[-1].model_name + 0x38) = uVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar5[-0x156].part_visibility_flags + 10),
             "stranger.dfm");
  pCVar5[-0xffffffff0000013b].animation_state[0x6c] = '\0';
  pCVar5[-0xffffffff0000013b].animation_state[0x6d] = '\0';
  pCVar5[-0xffffffff0000013b].animation_state[0x6e] = '\0';
  pCVar5[-0xffffffff0000013b].animation_state[0x6f] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x58] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x59] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5a] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x5b] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x18] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x19] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1a] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1b] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1c] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1d] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1e] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x1f] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x48] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x49] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x4a] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x4b] = '\0';
  *(undefined4 *)(pCVar5[-1].animation_state + 0x44) =
       *(undefined4 *)(pCVar5[-1].animation_state + 0x48);
  *(undefined4 *)(pCVar5[-1].animation_state + 0x40) =
       *(undefined4 *)(pCVar5[-1].animation_state + 0x44);
  pCVar5[-0xffffffff00000001].animation_state[0x4c] = -1;
  pCVar5[-0xffffffff00000001].animation_state[0x4d] = -1;
  pCVar5[-0xffffffff00000001].animation_state[0x4e] = -1;
  pCVar5[-0xffffffff00000001].animation_state[0x4f] = -1;
  pCVar5[-0xffffffff00000001].model_name[0x60] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x61] = '\0';
  pCVar5[-0xffffffff00000001].model_name[0x62] = '\0';
  pCVar5[-0xffffffff00000001].model_name[99] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x20] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x21] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x22] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x23] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x24] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x25] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x26] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x27] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[1] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[2] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[3] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x50] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x51] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x52] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x53] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x58] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x59] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x5a] = '\0';
  pCVar5[-0xffffffff00000001].animation_state[0x5b] = '\0';
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(*(int *)(pCVar5[-2].model_name + 0x10) + 0x158),
             "gat.kfm");
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  pcStack00000038 = (char *)0x1;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  pcStack0000003c = (char *)0x0;
  pcStack00000038 = "draw_holdCrate";
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  pcStack00000040 = (char *)0x0;
  pcStack0000003c = "draw_coatPocket2GasMask";
  pcStack00000038 = (char *)0xa;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  pcStack00000040 = "draw_gasMask2Stand";
  pcStack0000003c = (char *)0x0;
  pcStack00000038 = (char *)0xa;
  core_charactr_cpp_CCharacter_addLayerAction_FUN_0042e5d0((CCharacter *)this_ptr_00);
  pcStack00000048 = "strcoat.cth";
  pcStack00000040 = (char *)0x5bb49c;
  core_cloth_cpp_CClothList_add_FUN_0043c0f0((CClothList *)(pCVar5[-0x13b].animation_state + 0x74));
  pCVar5[1].part_visibility_flags[6] = 0;
  return this_ptr_00;
}


// Assembly code:
// 005bb120: PUSH EBX
//   Label: core_stranger.cpp_CStranger_ctor_FUN_005bb120
// 005bb121: PUSH EBP
// 005bb122: MOV EBP,ESP
// 005bb124: MOV EBX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005bb127: PUSH EBX
// 005bb128: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 005bb12d: ADD ESP,0x4
// 005bb130: ADD EAX,0x1fcd8
// 005bb135: PUSH EAX
// 005bb136: CALL core_dmodel.cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
//   XREF to: 00478ce0 (UNCONDITIONAL_CALL)
// 005bb13b: LEA EBX,[EAX + 0xfffe0328]
// 005bb141: MOV dword ptr [EBX + 0x154],0x663784
//   XREF to: 00663784 (DATA)
// 005bb14b: MOV dword ptr [EBX + 0x1fbd4],0x0
// 005bb155: MOV dword ptr [EBX + 0x1fbd8],0x0
// 005bb15f: MOV dword ptr [EBX + 0x1fbdc],0x0
// 005bb169: MOV dword ptr [EBX + 0x1fbe0],0xbf060a92
// 005bb173: MOV dword ptr [EBX + 0x1fc00],0x0
// 005bb17d: MOV dword ptr [EBX + 0x1fbf8],0x0
// 005bb187: MOV dword ptr [EBX + 0x1fbf0],0x0
// 005bb191: MOV dword ptr [EBX + 0x1fbe8],0x0
// 005bb19b: MOV dword ptr [EBX + 0x1fbfc],0x0
// 005bb1a5: MOV dword ptr [EBX + 0x1fc04],0x0
// 005bb1af: MOV dword ptr [EBX + 0x1fc20],0x0
// 005bb1b9: MOV dword ptr [EBX + 0x1fc18],0x0
// 005bb1c3: MOV dword ptr [EBX + 0x1fc10],0x0
// 005bb1cd: MOV dword ptr [EBX + 0x1fc08],0x0
// 005bb1d7: MOV dword ptr [EBX + 0x1fc1c],0x0
// 005bb1e1: MOV dword ptr [EBX + 0x1fc24],0x0
// 005bb1eb: MOV dword ptr [EBX + 0x1fc8c],0x0
// 005bb1f5: MOV dword ptr [EBX + 0x1fc28],0x0
// 005bb1ff: MOV dword ptr [EBX + 0x1fc30],0x0
// 005bb209: MOV dword ptr [EBX + 0x1fc3c],0x0
// 005bb213: MOV dword ptr [EBX + 0x1fc40],0x0
// 005bb21d: FLD float ptr [0x00663744]
//   XREF to: 00663744 (READ)
// 005bb223: MOV dword ptr [EBX + 0x1fc44],0x0
// 005bb22d: ADD ESP,0x4
// 005bb230: FSTP float ptr [EBX + 0x1fbe4]
// 005bb236: MOV dword ptr [EBX + 0x1fcb0],0xf149f2ca
// 005bb240: PUSH 0x6531c9
//   XREF to: 006531c9 (DATA)
// 005bb245: MOV dword ptr [EBX + 0x1fc98],0xf149f2ca
// 005bb24f: LEA EAX,[EBX + 0x158]
// 005bb255: FLD float ptr [EBX + 0x1fbf0]
// 005bb25b: FLD float ptr [EBX + 0x1fbe8]
// 005bb261: FLD float ptr [EBX + 0x1fc10]
// 005bb267: FLD float ptr [EBX + 0x1fc08]
// 005bb26d: PUSH EAX
// 005bb26e: FXCH ST3
// 005bb270: FSTP float ptr [EBX + 0x1fbf4]
// 005bb276: FXCH
// 005bb278: FSTP float ptr [EBX + 0x1fbec]
// 005bb27e: FSTP float ptr [EBX + 0x1fc14]
// 005bb284: FSTP float ptr [EBX + 0x1fc0c]
// 005bb28a: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005bb28f: MOV dword ptr [EBX + 0x2a8c],0x0
// 005bb299: MOV dword ptr [EBX + 0x1fc2c],0x0
// 005bb2a3: MOV dword ptr [EBX + 0x1fc50],0x0
// 005bb2ad: LEA EAX,[EBX + 0x1fc78]
// 005bb2b3: MOV dword ptr [EBX + 0x1fc54],0x0
// 005bb2bd: MOV dword ptr [EAX + 0x8],0x0
// 005bb2c4: MOV EDX,dword ptr [EAX + 0x8]
// 005bb2c7: MOV dword ptr [EAX + 0x4],EDX
// 005bb2ca: MOV EDX,dword ptr [EAX + 0x4]
// 005bb2cd: MOV dword ptr [EAX],EDX
// 005bb2cf: MOV dword ptr [EBX + 0x1fc84],0xffffffff
// 005bb2d9: MOV dword ptr [EBX + 0x1fc34],0x0
// 005bb2e3: MOV dword ptr [EBX + 0x1fc58],0x0
// 005bb2ed: MOV dword ptr [EBX + 0x1fc5c],0x0
// 005bb2f7: MOV dword ptr [EBX + 0x1fc38],0x0
// 005bb301: ADD ESP,0x8
// 005bb304: MOV dword ptr [EBX + 0x1fc88],0x0
// 005bb30e: LEA EAX,[EBX + 0x1f738]
// 005bb314: MOV dword ptr [EBX + 0x1fc90],0x0
// 005bb31e: PUSH 0x6531d6
//   XREF to: 006531d6 (DATA)
// 005bb323: MOV EAX,dword ptr [EAX + 0x330]
// 005bb329: ADD EAX,0x158
// 005bb32e: PUSH EAX
// 005bb32f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005bb334: ADD ESP,0x8
// 005bb337: PUSH 0x0
// 005bb339: PUSH 0x6531de
//   XREF to: 006531de (DATA)
// 005bb33e: PUSH 0x1
// 005bb340: PUSH 0x0
// 005bb342: PUSH EBX
// 005bb343: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb348: ADD ESP,0x14
// 005bb34b: PUSH 0x0
// 005bb34d: PUSH 0x6531f2
//   XREF to: 006531f2 (DATA)
// 005bb352: PUSH 0x2
// 005bb354: PUSH 0x1
// 005bb356: PUSH EBX
// 005bb357: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb35c: ADD ESP,0x14
// 005bb35f: PUSH 0x0
// 005bb361: PUSH 0x65320b
//   XREF to: 0065320b (DATA)
// 005bb366: PUSH 0x3
// 005bb368: PUSH 0x0
// 005bb36a: PUSH EBX
// 005bb36b: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb370: ADD ESP,0x14
// 005bb373: PUSH 0x0
// 005bb375: PUSH 0x653221
//   XREF to: 00653221 (DATA)
// 005bb37a: PUSH 0x4
// 005bb37c: PUSH 0x3
// 005bb37e: PUSH EBX
// 005bb37f: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb384: ADD ESP,0x14
// 005bb387: PUSH 0x0
// 005bb389: PUSH 0x65323c
//   XREF to: 0065323c (DATA)
// 005bb38e: PUSH 0x5
// 005bb390: PUSH 0x3
// 005bb392: PUSH EBX
// 005bb393: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb398: ADD ESP,0x14
// 005bb39b: PUSH 0x0
// 005bb39d: PUSH 0x65325c
//   XREF to: 0065325c (DATA)
// 005bb3a2: PUSH 0x3
// 005bb3a4: PUSH 0x1
// 005bb3a6: PUSH EBX
// 005bb3a7: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb3ac: ADD ESP,0x14
// 005bb3af: PUSH 0x1
// 005bb3b1: PUSH 0x653275
//   XREF to: 00653275 (DATA)
// 005bb3b6: PUSH 0x6
// 005bb3b8: PUSH 0x0
// 005bb3ba: PUSH EBX
// 005bb3bb: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb3c0: ADD ESP,0x14
// 005bb3c3: PUSH 0x1
// 005bb3c5: PUSH 0x653288
//   XREF to: 00653288 (DATA)
// 005bb3ca: PUSH 0x0
// 005bb3cc: PUSH 0x6
// 005bb3ce: PUSH EBX
// 005bb3cf: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb3d4: ADD ESP,0x14
// 005bb3d7: PUSH 0x1
// 005bb3d9: PUSH 0x65329b
//   XREF to: 0065329b (DATA)
// 005bb3de: PUSH 0x4
// 005bb3e0: PUSH 0xb
// 005bb3e2: PUSH EBX
// 005bb3e3: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb3e8: ADD ESP,0x14
// 005bb3eb: PUSH 0x0
// 005bb3ed: PUSH 0x6532ae
//   XREF to: 006532ae (DATA)
// 005bb3f2: PUSH 0x7
// 005bb3f4: PUSH 0x3
// 005bb3f6: PUSH EBX
// 005bb3f7: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb3fc: ADD ESP,0x14
// 005bb3ff: PUSH 0x0
// 005bb401: PUSH 0x6532c7
//   XREF to: 006532c7 (DATA)
// 005bb406: PUSH 0x7
// 005bb408: PUSH 0x7
// 005bb40a: PUSH EBX
// 005bb40b: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb410: ADD ESP,0x14
// 005bb413: PUSH 0x0
// 005bb415: PUSH 0x6532d8
//   XREF to: 006532d8 (DATA)
// 005bb41a: PUSH 0x8
// 005bb41c: PUSH 0x0
// 005bb41e: PUSH EBX
// 005bb41f: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb424: ADD ESP,0x14
// 005bb427: PUSH 0x1
// 005bb429: PUSH 0x6532ed
//   XREF to: 006532ed (DATA)
// 005bb42e: PUSH 0x8
// 005bb430: PUSH 0xc
// 005bb432: PUSH EBX
// 005bb433: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb438: ADD ESP,0x14
// 005bb43b: PUSH 0x1
// 005bb43d: PUSH 0x6532fc
//   XREF to: 006532fc (DATA)
// 005bb442: PUSH 0x8
// 005bb444: PUSH 0xc
// 005bb446: PUSH EBX
// 005bb447: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb44c: ADD ESP,0x14
// 005bb44f: PUSH 0x0
// 005bb451: PUSH 0x653314
//   XREF to: 00653314 (DATA)
// 005bb456: PUSH 0x9
// 005bb458: PUSH 0x9
// 005bb45a: PUSH EBX
// 005bb45b: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb460: ADD ESP,0x14
// 005bb463: PUSH 0x0
// 005bb465: PUSH 0x653323
//   XREF to: 00653323 (DATA)
// 005bb46a: PUSH 0xa
// 005bb46c: PUSH 0x3
// 005bb46e: PUSH EBX
// 005bb46f: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb474: ADD ESP,0x14
// 005bb477: PUSH 0x0
// 005bb479: PUSH 0x65333b
//   XREF to: 0065333b (DATA)
// 005bb47e: PUSH 0x0
// 005bb480: PUSH 0xa
// 005bb482: PUSH EBX
// 005bb483: CALL core_charactr.cpp_CCharacter_addLayerAction_FUN_0042e5d0
//   XREF to: 0042e5d0 (UNCONDITIONAL_CALL)
// 005bb488: ADD ESP,0x14
// 005bb48b: PUSH 0x65334e
//   XREF to: 0065334e (DATA)
// 005bb490: LEA EAX,[EBX + 0x2a94]
// 005bb496: PUSH EAX
// 005bb497: CALL core_cloth.cpp_CClothList_add_FUN_0043c0f0
//   XREF to: 0043c0f0 (UNCONDITIONAL_CALL)
// 005bb49c: ADD ESP,0x8
// 005bb49f: MOV EAX,EBX
// 005bb4a1: MOV dword ptr [EBX + 0x1fe6c],0x0
// 005bb4ab: POP EBP
// 005bb4ac: POP EBX
// 005bb4ad: RET
