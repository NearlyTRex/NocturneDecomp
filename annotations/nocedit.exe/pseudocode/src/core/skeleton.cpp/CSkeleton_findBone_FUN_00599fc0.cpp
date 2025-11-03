// Name: core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
// Address: 00599fc0
// Address Range: [[00599fc0, 0059a045]]
// Convention: __cdecl
// Signature: int core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton * this_ptr, char * bone_name)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00412cb0 (00412cb0) at 00412d80 [UNCONDITIONAL_CALL]
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 00415200 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 004165c0 [UNCONDITIONAL_CALL]
//   core_boneguy.cpp_CBoneGuy_explode_FUN_0041bd90 (0041bd90) at 0041bea0 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 0042383c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ea40 (0042ea40) at 0042ebc4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042ec40 (0042ec40) at 0042ec83 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_OrientBoneCheck_FUN_0043a110 (0043a110) at 0043a156 [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_0043f850 (0043f850) at 0043f920 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 004441ef [UNCONDITIONAL_CALL]
//   core_dog.cpp_CZombieDog_setup_FUN_0047f0c0 (0047f0c0) at 0047f0e8 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 00484167 [UNCONDITIONAL_CALL]
//   core_drone.cpp_FUN_0048ebc0 (0048ebc0) at 0048ec08 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2de1 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 (004ddaf0) at 004e00eb [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e4762 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e6246 [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f0c80 (004f0c80) at 004f0de3 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_NPCSFromZombieTown_FUN_004f4970 (004f4970) at 004f4a63 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f501b [UNCONDITIONAL_CALL]
//   core_hotdemon.cpp_FUN_004f6d00 (004f6d00) at 004f6dc0 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f7e80 (004f7e80) at 004f7fe3 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f9945 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f582 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 005254a4 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00556f90 (00556f90) at 00557060 [UNCONDITIONAL_CALL]
//   core_sentinel.cpp_FUN_00567e20 (00567e20) at 00567fa2 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056c9c8 [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_CDeformableModelInstance_FUN_005968b0 (005968b0) at 00596a5f [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a2600 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb641 [UNCONDITIONAL_CALL]
//   core_succubus.cpp_CSuccubus_FUN_005c6b60 (005c6b60) at 005c6c80 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8a82 [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CBassPlayer_FUN_005da090 (005da090) at 005da0ce [UNCONDITIONAL_CALL]
//   core_tbplayer.cpp_CDrummer_FUN_005da2f0 (005da2f0) at 005da32e [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_FUN_005dafc0 (005dafc0) at 005db009 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e589a [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005efcc0 (005efcc0) at 005efceb [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f916e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064e482
//   TerminatedCString s_Can_t_find_bone_s_in_ske_0064e497
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

int __cdecl core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(CSkeleton *this_ptr,char *bone_name)

{
  int iVar1;
  int iVar2;
  SBone *str1;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < this_ptr->bone_count) {
    str1 = this_ptr->bone_list;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1->bone_name,bone_name);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 1;
    } while (iVar2 < this_ptr->bone_count);
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x16d;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Can't find bone %s in skeleton %s!",bone_name,this_ptr->loaded_filename);
  return -1;
}


// Assembly code:
// 00599fc0: PUSH EBX
//   Label: core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
// 00599fc1: PUSH ESI
// 00599fc2: PUSH EDI
// 00599fc3: PUSH EBP
// 00599fc4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00599fc8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00599fcc: MOV EDX,dword ptr [EDI + 0x28558]
// 00599fd2: XOR EBX,EBX
// 00599fd4: TEST EDX,EDX
// 00599fd6: JLE 0x00599ffa
//   XREF to: 00599ffa (CONDITIONAL_JUMP)
// 00599fd8: LEA ESI,[EDI + 0x2855c]
// 00599fde: PUSH EBP
//   Label: LAB_00599fde
// 00599fdf: PUSH ESI
// 00599fe0: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00599fe5: ADD ESP,0x8
// 00599fe8: TEST EAX,EAX
// 00599fea: JZ 0x0059a00b
//   XREF to: 0059a00b (CONDITIONAL_JUMP)
// 00599fec: INC EBX
// 00599fed: MOV ECX,dword ptr [EDI + 0x28558]
// 00599ff3: ADD ESI,0x24
// 00599ff6: CMP EBX,ECX
// 00599ff8: JL 0x00599fde
//   XREF to: 00599fde (CONDITIONAL_JUMP)
// 00599ffa: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_00599ffa
//   XREF to: Stack[0xc] (READ)
// 00599fff: JNZ 0x0059a012
//   XREF to: 0059a012 (CONDITIONAL_JUMP)
// 0059a001: MOV EAX,0xffffffff
// 0059a006: POP EBP
// 0059a007: POP EDI
// 0059a008: POP ESI
// 0059a009: POP EBX
// 0059a00a: RET
// 0059a00b: MOV EAX,EBX
//   Label: LAB_0059a00b
// 0059a00d: POP EBP
// 0059a00e: POP EDI
// 0059a00f: POP ESI
// 0059a010: POP EBX
// 0059a011: RET
// 0059a012: ADD EDI,0x28508
//   Label: LAB_0059a012
// 0059a018: PUSH EDI
// 0059a019: PUSH EBP
// 0059a01a: MOV ESI,0x64e482
//   XREF to: 0064e482 (DATA)
// 0059a01f: MOV EAX,0x16d
// 0059a024: PUSH 0x64e497
//   XREF to: 0064e497 (DATA)
// 0059a029: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0059a02f: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059a034: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059a039: ADD ESP,0xc
// 0059a03c: MOV EAX,0xffffffff
// 0059a041: POP EBP
// 0059a042: POP EDI
// 0059a043: POP ESI
// 0059a044: POP EBX
// 0059a045: RET
