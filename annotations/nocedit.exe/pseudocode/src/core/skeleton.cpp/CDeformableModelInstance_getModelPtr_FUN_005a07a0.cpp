// Name: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
// Address: 005a07a0
// Address Range: [[005a07a0, 005a081b]]
// Convention: __cdecl
// Signature: CDeformableModel * core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_actor.cpp_CDemonActor_rayIntersect_FUN_00409470 (00409470) at 004097ec [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 004152e0 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 004166a0 [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b280 (0041b280) at 0041b2f3 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_FUN_0041d680 (0041d680) at 0041d6b2 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bf02 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 0042391c [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_004268e0 (004268e0) at 00426b5d [UNCONDITIONAL_CALL]
//   core_bugs.cpp_FUN_00427400 (00427400) at 00427500 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a3f0 (0042a3f0) at 0042a3ff [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a520 (0042a520) at 0042a6a6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042a830 (0042a830) at 0042a94b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ad00 (0042ad00) at 0042ad5b [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042af60 (0042af60) at 0042b03c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042ba1d [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_00439710 (00439710) at 00439a10 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 00444207 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 00484208 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 0048591d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CGunFlame_FUN_004c4c00 (004c4c00) at 004c4cf8 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e4770 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e6269 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f3fa0 (004f3fa0) at 004f3fac [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6eb5 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f9aa3 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 005254c7 [UNCONDITIONAL_CALL]
//   core_morph.cpp_CMorphModel_FUN_0052a870 (0052a870) at 0052a884 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052aa30 (0052aa30) at 0052aa51 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052bda8 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559730 (00559730) at 0055975d [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00562920 (00562920) at 00563dc7 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00567e20 (00567e20) at 00567fb0 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 005968e9 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_GetModelPtrOfFile_FUN_0058a260 (0058a260) at 0058a291 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_LockGetPtrAndExportModel_FUN_00598ee0 (00598ee0) at 00598efd [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0150 (005a0150) at 005a019f [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a01d0 (005a01d0) at 005a01f0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0210 (005a0210) at 005a022d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0250 (005a0250) at 005a0271 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02a0 (005a02a0) at 005a02c1 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a02f0 (005a02f0) at 005a0311 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a05e0 (005a05e0) at 005a060e [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820 (005a0820) at 005a0825 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1040 (005a1040) at 005a1063 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a10e0 (005a10e0) at 005a10ec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a14b0 (005a14b0) at 005a14eb [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a16c0 (005a16c0) at 005a16d0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a17b0 (005a17b0) at 005a17c7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a17e0 (005a17e0) at 005a17ec [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_allocPointList_FUN_0059deb0 (0059deb0) at 0059dec0 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800 (005a1800) at 005a181d [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_outlinePolygons_FUN_005a03b0 (005a03b0) at 005a03c7 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340 (005a0340) at 005a0370 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a2662 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb7b5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8b1a [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f9259 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064eef0
//   TerminatedCString s_CDeformableModelInstance_0064ef05
//   TerminatedCString s_core_skeleton_cpp_0064ef53
//   TerminatedCString s_Tried_to_do_something_wi_0064ef68
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

CDeformableModel * __cdecl
core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
          (CDeformableModelInstance *this_ptr)

{
  if (this_ptr->model_ptr == (CDeformableModel *)0x0) {
    if (this_ptr->field11_0x2260[0] != '\0') {
      g_CurrentFilename = "..\\core\\skeleton.cpp";
      g_CurrentLineNumber = 0xdd3;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Tried to do something with model %s, but modelPtr not set.  (CDeformableModelInstance::preCache not called.",this_ptr->field11_0x2260);
      return this_ptr->model_ptr;
    }
    g_CurrentFilename = "..\\core\\skeleton.cpp";
    g_CurrentLineNumber = 0xdd1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModelInstance::getModelPtr - modelPtr=NULL, and no name specified.");
  }
  return this_ptr->model_ptr;
}


// Assembly code:
// 005a07a0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
// 005a07a1: PUSH EDI
// 005a07a2: PUSH EBP
// 005a07a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005a07a7: CMP dword ptr [EBX + 0x22b0],0x0
// 005a07ae: JNZ 0x005a07dc
//   XREF to: 005a07dc (CONDITIONAL_JUMP)
// 005a07b0: CMP byte ptr [EBX + 0x2260],0x0
// 005a07b7: JNZ 0x005a07e6
//   XREF to: 005a07e6 (CONDITIONAL_JUMP)
// 005a07b9: MOV EDI,0x64eef0
//   XREF to: 0064eef0 (DATA)
// 005a07be: MOV EBP,0xdd1
// 005a07c3: PUSH 0x64ef05
//   XREF to: 0064ef05 (DATA)
// 005a07c8: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a07ce: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 005a07d4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a07d9: ADD ESP,0x4
// 005a07dc: MOV EAX,dword ptr [EBX + 0x22b0]
//   Label: LAB_005a07dc
// 005a07e2: POP EBP
// 005a07e3: POP EDI
// 005a07e4: POP EBX
// 005a07e5: RET
// 005a07e6: PUSH ESI
//   Label: LAB_005a07e6
// 005a07e7: LEA EAX,[EBX + 0x2260]
// 005a07ed: PUSH EAX
// 005a07ee: MOV ECX,0x64ef53
//   XREF to: 0064ef53 (PARAM)
// 005a07f3: MOV ESI,0xdd3
// 005a07f8: PUSH 0x64ef68
//   XREF to: 0064ef68 (DATA)
// 005a07fd: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a0803: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a0809: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a080e: ADD ESP,0x8
// 005a0811: POP ESI
// 005a0812: MOV EAX,dword ptr [EBX + 0x22b0]
// 005a0818: POP EBP
// 005a0819: POP EDI
// 005a081a: POP EBX
// 005a081b: RET
