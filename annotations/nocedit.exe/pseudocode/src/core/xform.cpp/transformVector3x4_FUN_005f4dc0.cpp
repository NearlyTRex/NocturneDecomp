// Name: core_xform.cpp_transformVector3x4_FUN_005f4dc0
// Address: 005f4dc0
// Address Range: [[005f4dc0, 005f4e1d]]
// Convention: __cdecl
// Signature: CVector3f * core_xform.cpp_transformVector3x4_FUN_005f4dc0(CVector3f * output_vector, CVector3f * input_vector, CMatrix3x4f * matrix)
// Cross-references:
//   core_baron.cpp_CBaron_process_FUN_00412e80 (00412e80) at 0041326b [UNCONDITIONAL_CALL]
//   core_baron.cpp_FUN_004136b0 (004136b0) at 00413972 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_process_FUN_00415470 (00415470) at 0041579c [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_process_FUN_00416870 (00416870) at 00416f9e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041bf90 (0041bf90) at 0041c67e [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_FUN_0041ca40 (0041ca40) at 0041cb6c [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424aa0 (00424aa0) at 00424af2 [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 00426ace [UNCONDITIONAL_CALL]
//   core_chain.cpp_FUN_0042fcc0 (0042fcc0) at 0042fcf8 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a520 (0042a520) at 0042a754 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042aa49 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b670 (0042b670) at 0042b6ed [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bd30 (0042bd30) at 0042bf07 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042ec05 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439be7 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043acc9 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_00444310 (00444310) at 00444605 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e2f1 [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_process_FUN_0047f140 (0047f140) at 0047f450 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 00484db0 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ec70 (0048ec70) at 0048effc [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_CarryLights_FUN_004d7120 (004d7120) at 004d7252 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d7095 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk6_FUN_004e4a00 (004e4a00) at 004e4dba [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e7d3a [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e84a0 (004e84a0) at 004e84f2 [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6f20 (004f6f20) at 004f7242 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004fa29f [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_0051fcc0 (0051fcc0) at 0051ff9d [UNCONDITIONAL_CALL]
//   core_mirror.cpp_applyMirrorTransform_FUN_005222f0 (005222f0) at 00522303 [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorReflection_FUN_005214c0 (005214c0) at 00522142 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 00526866 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525e34 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568030 (00568030) at 005685ef [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00568b70 (00568b70) at 00568bae [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056ca00 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058bd00 (0058bd00) at 0058c045 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_FUN_0058d790 (0058d790) at 0058d986 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f820 (0059f820) at 0059f8b4 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20 (0059fa20) at 0059fae2 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40 (0059fb40) at 0059fbec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0 (005a16c0) at 005a174d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00 (0059aa00) at 0059aabc [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880 (0059a880) at 0059a9c3 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_FUN_005a1950 (005a1950) at 005a1a03 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a2800 (005a2800) at 005a2c2e [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a3160 (005a3160) at 005a31cd [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c07b0 (005c07b0) at 005c12ce [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2910 (005e2910) at 005e2af0 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_FUN_005f1e40 (005f1e40) at 005f1e98 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fb1f0 (005fb1f0) at 005fb3e6 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fbe70 (005fbe70) at 005fbee1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CVector3f * __cdecl
core_xform_cpp_transformVector3x4_FUN_005f4dc0
          (CVector3f *output_vector,CVector3f *input_vector,CMatrix3x4f *matrix)

{
  output_vector->x =
       input_vector->z * matrix->m[0].y +
       input_vector->x * matrix->m[0].w + input_vector->y * matrix->m[0].x + matrix->m[0].z;
  output_vector->y =
       input_vector->z * matrix->m[1].y +
       input_vector->x * matrix->m[1].w + input_vector->y * matrix->m[1].x + matrix->m[1].z;
  output_vector->z =
       input_vector->z * matrix->m[2].y +
       input_vector->x * matrix->m[2].w + input_vector->y * matrix->m[2].x + matrix->m[2].z;
  return output_vector;
}


// Assembly code:
// 005f4dc0: MOV ECX,dword ptr [ESP + 0x4]
//   Label: core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: Stack[0x4] (READ)
// 005f4dc4: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005f4dc8: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 005f4dcc: FLD float ptr [EDX + 0x4]
// 005f4dcf: FMUL float ptr [EAX + 0x4]
// 005f4dd2: FLD float ptr [EDX]
// 005f4dd4: FMUL float ptr [EAX]
// 005f4dd6: FADDP
// 005f4dd8: FLD float ptr [EDX + 0x8]
// 005f4ddb: FMUL float ptr [EAX + 0x8]
// 005f4dde: FADDP
// 005f4de0: FADD float ptr [EAX + 0xc]
// 005f4de3: FSTP float ptr [ECX]
// 005f4de5: FLD float ptr [EDX + 0x4]
// 005f4de8: FMUL float ptr [EAX + 0x14]
// 005f4deb: FLD float ptr [EDX]
// 005f4ded: FMUL float ptr [EAX + 0x10]
// 005f4df0: FADDP
// 005f4df2: FLD float ptr [EDX + 0x8]
// 005f4df5: FMUL float ptr [EAX + 0x18]
// 005f4df8: FADDP
// 005f4dfa: FADD float ptr [EAX + 0x1c]
// 005f4dfd: FSTP float ptr [ECX + 0x4]
// 005f4e00: FLD float ptr [EDX + 0x4]
// 005f4e03: FMUL float ptr [EAX + 0x24]
// 005f4e06: FLD float ptr [EDX]
// 005f4e08: FMUL float ptr [EAX + 0x20]
// 005f4e0b: FADDP
// 005f4e0d: FLD float ptr [EDX + 0x8]
// 005f4e10: FMUL float ptr [EAX + 0x28]
// 005f4e13: FADDP
// 005f4e15: FADD float ptr [EAX + 0x2c]
// 005f4e18: MOV EAX,ECX
// 005f4e1a: FSTP float ptr [ECX + 0x8]
// 005f4e1d: RET
