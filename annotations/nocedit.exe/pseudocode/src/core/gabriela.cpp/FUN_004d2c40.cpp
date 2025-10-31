// Name: core_gabriela.cpp_FUN_004d2c40
// Address: 004d2c40
// Address Range: [[004d2c40, 004d2e89]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d2c40()
// Globals:
//   TerminatedCString s_gabriela_dfm_0062ace2
//   TerminatedCString s_gabcoat_cth_0062acef
//   TerminatedCString s_Bip01_head_0062acfb
//   TerminatedCString s_Bip01_L_Clavicle_0062ad06
//   TerminatedCString s_Bip01_R_Clavicle_0062ad17
//   TerminatedCString s_Bip01_L_UpperArm_0062ad28
//   TerminatedCString s_Bip01_R_UpperArm_0062ad39
//   TerminatedCString s_Bip01_L_ForeArm_0062ad4a
//   TerminatedCString s_Bip01_R_ForeArm_0062ad5a
//   TerminatedCString s_Bip01_L_Foot_0062ad6a
//   TerminatedCString s_Bip01_R_Foot_0062ad77
//   TerminatedCString s_Bip01_L_Thigh_0062ad84
//   TerminatedCString s_Bip01_R_Thigh_0062ad92
//   TerminatedCString s_Bip01_L_Calf_0062ada0
//   TerminatedCString s_Bip01_R_Calf_0062adad
//   TerminatedCString s_Bip01_L_Hand_0062adba
//   TerminatedCString s_Bip01_R_Hand_0062adc7
//   TerminatedCString s_Bip01_Spine2_0062add4
//   TerminatedCString s_Bip01_Spine_0062ade1
//   TerminatedCString s_gab_draw_0062aded
//   TerminatedCString s_gab_shoot_0062adf6
//   TerminatedCString s_gab_crossbow_shoot_0062ae00
//   undefined4 DAT_02d7b848
//   undefined4 DAT_02d7b84c
//   undefined4 DAT_02d7b850
//   undefined4 DAT_02d7b854
//   undefined4 DAT_02d7b858
//   undefined4 DAT_02d7b85c
//   undefined4 DAT_02d7b860
//   undefined4 DAT_02d7b864
//   undefined4 DAT_02d7b868
//   undefined4 DAT_02d7b86c
//   undefined4 DAT_02d7b870
//   undefined4 DAT_02d7b874
//   undefined4 DAT_02d7b878
//   undefined4 DAT_02d7b87c
//   undefined4 DAT_02d7b880
//   undefined4 DAT_02d7b884
//   undefined4 DAT_02d7b888
//   undefined4 DAT_02d7b88c
//   undefined4 DAT_02d7b890
//   undefined4 DAT_02d7b894
// Function calls:
//   core_cloth.cpp_CCloth_load_FUN_00438cf0
//   core_cloth.cpp_FUN_00439710
//   core_hero.cpp_CHero_FUN_004f2540
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d2c40(undefined4 param_1) */

void core_gabriela_cpp_FUN_004d2c40(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  core_skeleton_cpp_FUN_005a0840();
  core_skeleton_cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450();
  core_cloth_cpp_CCloth_load_FUN_00438cf0
            ((CCloth *)&in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y,
             "gabcoat.cth");
  core_cloth_cpp_FUN_00439710();
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_02d7b848 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b84c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b850 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d7b854 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b858 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d7b85c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b860 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b864 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b868 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d7b86c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b870 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02d7b874 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b878 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b888 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b88c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b890 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02d7b894 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  DAT_02d7b87c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  DAT_02d7b884 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  DAT_02d7b880 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  in_stack_00000004->field6_0x1fb9c[8] = '\0';
  in_stack_00000004->field6_0x1fb9c[9] = '\0';
  in_stack_00000004->field6_0x1fb9c[10] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xb] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xc] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xd] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xe] = '\0';
  in_stack_00000004->field6_0x1fb9c[0xf] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x10] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x11] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x12] = '\0';
  in_stack_00000004->field6_0x1fb9c[0x13] = '\0';
  *(undefined4 *)(in_stack_00000004->base_character).carry_hands[0].field0_0x0 = DAT_02d7b888;
  return;
}


// Assembly code:
// 004d2c40: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d2c40
// 004d2c41: PUSH ESI
// 004d2c42: PUSH EDI
// 004d2c43: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d2c47: PUSH ESI
// 004d2c48: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 004d2c4d: ADD ESP,0x4
// 004d2c50: PUSH 0x62ace2
//   XREF to: 0062ace2 (DATA)
// 004d2c55: LEA EDI,[ESI + 0x158]
// 004d2c5b: PUSH EDI
// 004d2c5c: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004d2c61: ADD ESP,0x8
// 004d2c64: PUSH EDI
// 004d2c65: CALL core_skeleton.cpp_CDeformableModelInstance_CallToLoadSkeletonDeformable_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 004d2c6a: ADD ESP,0x4
// 004d2c6d: PUSH 0x62acef
//   XREF to: 0062acef (DATA)
// 004d2c72: LEA EBX,[ESI + 0x1fc14]
// 004d2c78: PUSH EBX
// 004d2c79: CALL core_cloth.cpp_CCloth_load_FUN_00438cf0
//   XREF to: 00438cf0 (UNCONDITIONAL_CALL)
// 004d2c7e: ADD ESP,0x8
// 004d2c81: PUSH EDI
// 004d2c82: LEA EAX,[ESI + 0x30]
// 004d2c85: PUSH EAX
// 004d2c86: LEA EAX,[ESI + 0x20]
// 004d2c89: PUSH EAX
// 004d2c8a: PUSH EBX
// 004d2c8b: CALL core_cloth.cpp_FUN_00439710
//   XREF to: 00439710 (UNCONDITIONAL_CALL)
// 004d2c90: ADD ESP,0x10
// 004d2c93: PUSH EDI
// 004d2c94: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004d2c99: ADD ESP,0x4
// 004d2c9c: PUSH 0x1
// 004d2c9e: PUSH 0x62acfb
//   XREF to: 0062acfb (DATA)
// 004d2ca3: PUSH EAX
// 004d2ca4: MOV EBX,EAX
// 004d2ca6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2cab: ADD ESP,0xc
// 004d2cae: PUSH 0x1
// 004d2cb0: PUSH 0x62ad06
//   XREF to: 0062ad06 (DATA)
// 004d2cb5: PUSH EBX
// 004d2cb6: MOV [0x02d7b848],EAX
//   XREF to: 02d7b848 (WRITE)
// 004d2cbb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2cc0: ADD ESP,0xc
// 004d2cc3: PUSH 0x1
// 004d2cc5: PUSH 0x62ad17
//   XREF to: 0062ad17 (DATA)
// 004d2cca: PUSH EBX
// 004d2ccb: MOV [0x02d7b84c],EAX
//   XREF to: 02d7b84c (WRITE)
// 004d2cd0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2cd5: ADD ESP,0xc
// 004d2cd8: PUSH 0x1
// 004d2cda: PUSH 0x62ad28
//   XREF to: 0062ad28 (DATA)
// 004d2cdf: PUSH EBX
// 004d2ce0: MOV [0x02d7b850],EAX
//   XREF to: 02d7b850 (WRITE)
// 004d2ce5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2cea: ADD ESP,0xc
// 004d2ced: PUSH 0x1
// 004d2cef: PUSH 0x62ad39
//   XREF to: 0062ad39 (DATA)
// 004d2cf4: PUSH EBX
// 004d2cf5: MOV [0x02d7b854],EAX
//   XREF to: 02d7b854 (WRITE)
// 004d2cfa: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2cff: ADD ESP,0xc
// 004d2d02: PUSH 0x1
// 004d2d04: PUSH 0x62ad4a
//   XREF to: 0062ad4a (DATA)
// 004d2d09: PUSH EBX
// 004d2d0a: MOV [0x02d7b858],EAX
//   XREF to: 02d7b858 (WRITE)
// 004d2d0f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d14: ADD ESP,0xc
// 004d2d17: MOV [0x02d7b85c],EAX
//   XREF to: 02d7b85c (WRITE)
// 004d2d1c: PUSH 0x1
// 004d2d1e: PUSH 0x62ad5a
//   XREF to: 0062ad5a (DATA)
// 004d2d23: PUSH EBX
// 004d2d24: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d29: ADD ESP,0xc
// 004d2d2c: PUSH 0x1
// 004d2d2e: PUSH 0x62ad6a
//   XREF to: 0062ad6a (DATA)
// 004d2d33: PUSH EBX
// 004d2d34: MOV [0x02d7b860],EAX
//   XREF to: 02d7b860 (WRITE)
// 004d2d39: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d3e: ADD ESP,0xc
// 004d2d41: PUSH 0x1
// 004d2d43: PUSH 0x62ad77
//   XREF to: 0062ad77 (DATA)
// 004d2d48: PUSH EBX
// 004d2d49: MOV [0x02d7b864],EAX
//   XREF to: 02d7b864 (WRITE)
// 004d2d4e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d53: ADD ESP,0xc
// 004d2d56: PUSH 0x1
// 004d2d58: PUSH 0x62ad84
//   XREF to: 0062ad84 (DATA)
// 004d2d5d: PUSH EBX
// 004d2d5e: MOV [0x02d7b868],EAX
//   XREF to: 02d7b868 (WRITE)
// 004d2d63: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d68: ADD ESP,0xc
// 004d2d6b: PUSH 0x1
// 004d2d6d: PUSH 0x62ad92
//   XREF to: 0062ad92 (DATA)
// 004d2d72: PUSH EBX
// 004d2d73: MOV [0x02d7b86c],EAX
//   XREF to: 02d7b86c (WRITE)
// 004d2d78: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d7d: ADD ESP,0xc
// 004d2d80: PUSH 0x1
// 004d2d82: PUSH 0x62ada0
//   XREF to: 0062ada0 (DATA)
// 004d2d87: PUSH EBX
// 004d2d88: MOV [0x02d7b870],EAX
//   XREF to: 02d7b870 (WRITE)
// 004d2d8d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2d92: ADD ESP,0xc
// 004d2d95: PUSH 0x1
// 004d2d97: PUSH 0x62adad
//   XREF to: 0062adad (DATA)
// 004d2d9c: PUSH EBX
// 004d2d9d: MOV [0x02d7b874],EAX
//   XREF to: 02d7b874 (WRITE)
// 004d2da2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2da7: ADD ESP,0xc
// 004d2daa: PUSH 0x1
// 004d2dac: PUSH 0x62adba
//   XREF to: 0062adba (DATA)
// 004d2db1: PUSH EBX
// 004d2db2: MOV [0x02d7b878],EAX
//   XREF to: 02d7b878 (WRITE)
// 004d2db7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2dbc: ADD ESP,0xc
// 004d2dbf: PUSH 0x1
// 004d2dc1: PUSH 0x62adc7
//   XREF to: 0062adc7 (DATA)
// 004d2dc6: PUSH EBX
// 004d2dc7: MOV [0x02d7b888],EAX
//   XREF to: 02d7b888 (WRITE)
// 004d2dcc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2dd1: ADD ESP,0xc
// 004d2dd4: PUSH 0x1
// 004d2dd6: PUSH 0x62add4
//   XREF to: 0062add4 (DATA)
// 004d2ddb: PUSH EBX
// 004d2ddc: MOV [0x02d7b88c],EAX
//   XREF to: 02d7b88c (WRITE)
// 004d2de1: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2de6: ADD ESP,0xc
// 004d2de9: MOV [0x02d7b890],EAX
//   XREF to: 02d7b890 (WRITE)
// 004d2dee: PUSH 0x1
// 004d2df0: PUSH 0x62ade1
//   XREF to: 0062ade1 (DATA)
// 004d2df5: PUSH EBX
// 004d2df6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004d2dfb: ADD ESP,0xc
// 004d2dfe: PUSH 0x1
// 004d2e00: PUSH 0x62aded
//   XREF to: 0062aded (DATA)
// 004d2e05: PUSH EDI
// 004d2e06: MOV [0x02d7b894],EAX
//   XREF to: 02d7b894 (WRITE)
// 004d2e0b: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004d2e10: ADD ESP,0x4
// 004d2e13: PUSH EAX
// 004d2e14: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004d2e19: ADD ESP,0xc
// 004d2e1c: PUSH 0x1
// 004d2e1e: PUSH 0x62adf6
//   XREF to: 0062adf6 (DATA)
// 004d2e23: PUSH EDI
// 004d2e24: MOV [0x02d7b87c],EAX
//   XREF to: 02d7b87c (WRITE)
// 004d2e29: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004d2e2e: ADD ESP,0x4
// 004d2e31: PUSH EAX
// 004d2e32: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004d2e37: ADD ESP,0xc
// 004d2e3a: PUSH 0x1
// 004d2e3c: PUSH 0x62ae00
//   XREF to: 0062ae00 (DATA)
// 004d2e41: PUSH EDI
// 004d2e42: MOV [0x02d7b884],EAX
//   XREF to: 02d7b884 (WRITE)
// 004d2e47: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 004d2e4c: ADD ESP,0x4
// 004d2e4f: PUSH EAX
// 004d2e50: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 004d2e55: MOV dword ptr [ESI + 0x1fba4],0x0
// 004d2e5f: MOV dword ptr [ESI + 0x1fba8],0x0
// 004d2e69: MOV [0x02d7b880],EAX
//   XREF to: 02d7b880 (WRITE)
// 004d2e6e: MOV dword ptr [ESI + 0x1fbac],0x0
// 004d2e78: MOV EAX,[0x02d7b888]
//   XREF to: 02d7b888 (READ)
// 004d2e7d: ADD ESP,0xc
// 004d2e80: MOV dword ptr [ESI + 0x24ac],EAX
// 004d2e86: POP EDI
// 004d2e87: POP ESI
// 004d2e88: POP EBX
// 004d2e89: RET
