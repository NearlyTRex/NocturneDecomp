// Name: core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
// Address: 0059c240
// Address Range: [[0059c240, 0059c2c5]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240()
// Cross-references:
//   core_batcreat.cpp_CBatCreature_FUN_00415150 (00415150) at 00415361 [UNCONDITIONAL_CALL]
//   core_batman.cpp_CBatman_FUN_00416510 (00416510) at 00416720 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00423810 (00423810) at 0042392e [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004441b0 (004441b0) at 004442e0 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_DraculaBrideModels_FUN_004840b0 (004840b0) at 0048421a [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_FUN_004e45e0 (004e45e0) at 004e4782 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e6160 (004e6160) at 004e6342 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9910 (004f9910) at 004f9ab6 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525340 (00525340) at 005255a0 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00559730 (00559730) at 005597a7 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a24d0 (005a24d0) at 005a26a0 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb4b0 (005bb4b0) at 005bb7c5 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8b42 [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005f9140 (005f9140) at 005f926d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_skeleton_cpp_0064ea83
//   TerminatedCString s_Can_t_find_part_s_in_mod_0064ea98
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0

#include "nocturne.h"

/* Signature: undefined1 core_skeleton.cpp_CDeformableModel_FindPartInModel(undefined4 param_1,
   undefined4 param_2, undefined4 param_3) */

int core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240(void)

{
  int iVar1;
  int iVar2;
  char *str2;
  int in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x7140)) {
    str2 = (char *)(in_stack_00000004 + 0x7144);
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000008,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x60;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x7140));
  }
  if (in_stack_0000000c == 0) {
    return -1;
  }
  g_CurrentFilename = "..\\core\\skeleton.cpp";
  g_CurrentLineNumber = 0x5c8;
  core_main_c_displayErrorAndQuit_FUN_00506f10
            ("Can't find part %s in model %s",in_stack_00000008,in_stack_00000004 + 0x8fb0);
  return -1;
}


// Assembly code:
// 0059c240: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
// 0059c241: PUSH ESI
// 0059c242: PUSH EDI
// 0059c243: PUSH EBP
// 0059c244: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059c248: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059c24c: MOV EDX,dword ptr [EDI + 0x7140]
// 0059c252: XOR EBX,EBX
// 0059c254: TEST EDX,EDX
// 0059c256: JLE 0x0059c27a
//   XREF to: 0059c27a (CONDITIONAL_JUMP)
// 0059c258: LEA ESI,[EDI + 0x7144]
// 0059c25e: PUSH ESI
//   Label: LAB_0059c25e
// 0059c25f: PUSH EBP
// 0059c260: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0059c265: ADD ESP,0x8
// 0059c268: TEST EAX,EAX
// 0059c26a: JZ 0x0059c28b
//   XREF to: 0059c28b (CONDITIONAL_JUMP)
// 0059c26c: INC EBX
// 0059c26d: MOV ECX,dword ptr [EDI + 0x7140]
// 0059c273: ADD ESI,0x60
// 0059c276: CMP EBX,ECX
// 0059c278: JL 0x0059c25e
//   XREF to: 0059c25e (CONDITIONAL_JUMP)
// 0059c27a: CMP dword ptr [ESP + 0x1c],0x0
//   Label: LAB_0059c27a
//   XREF to: Stack[0xc] (READ)
// 0059c27f: JNZ 0x0059c292
//   XREF to: 0059c292 (CONDITIONAL_JUMP)
// 0059c281: MOV EAX,0xffffffff
// 0059c286: POP EBP
// 0059c287: POP EDI
// 0059c288: POP ESI
// 0059c289: POP EBX
// 0059c28a: RET
// 0059c28b: MOV EAX,EBX
//   Label: LAB_0059c28b
// 0059c28d: POP EBP
// 0059c28e: POP EDI
// 0059c28f: POP ESI
// 0059c290: POP EBX
// 0059c291: RET
// 0059c292: ADD EDI,0x8fb0
//   Label: LAB_0059c292
// 0059c298: PUSH EDI
// 0059c299: PUSH EBP
// 0059c29a: MOV ESI,0x64ea83
//   XREF to: 0064ea83 (DATA)
// 0059c29f: MOV EAX,0x5c8
// 0059c2a4: PUSH 0x64ea98
//   XREF to: 0064ea98 (DATA)
// 0059c2a9: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0059c2af: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0059c2b4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059c2b9: ADD ESP,0xc
// 0059c2bc: MOV EAX,0xffffffff
// 0059c2c1: POP EBP
// 0059c2c2: POP EDI
// 0059c2c3: POP ESI
// 0059c2c4: POP EBX
// 0059c2c5: RET
